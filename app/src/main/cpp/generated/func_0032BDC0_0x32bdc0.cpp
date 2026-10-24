#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0032BDC0
// Address: 0x32bdc0 - 0x32be10
void func_0032BDC0_0x32bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032BDC0_0x32bdc0");
#endif

    switch (ctx->pc) {
        case 0x32bde4u: goto label_32bde4;
        case 0x32bdf4u: goto label_32bdf4;
        default: break;
    }

    ctx->pc = 0x32bdc0u;

    // 0x32bdc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32bdc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32bdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32bdc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32bdc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bdcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32bdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32bdd0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32bdd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bdd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32bdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32bdd8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32bddc: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32BDDCu;
    SET_GPR_U32(ctx, 31, 0x32BDE4u);
    ctx->pc = 0x32BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDDCu;
    // 0x32bde0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32BDDCu, 0x32BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDE4u;
label_32bde4:
    // 0x32bde4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bde8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32bde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bdec: 0xc0caf84  jal         func_32BE10
    ctx->pc = 0x32BDECu;
    SET_GPR_U32(ctx, 31, 0x32BDF4u);
    ctx->pc = 0x32BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDECu;
    // 0x32bdf0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BE10u, 0x32BDECu, 0x32BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDF4u;
label_32bdf4:
    // 0x32bdf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32bdf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bdf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32bdf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32bdfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32bdfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32be00: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32be00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32be04: 0x80cf9ac  j           func_33E6B0
    ctx->pc = 0x32BE04u;
    ctx->pc = 0x32BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BE04u;
    // 0x32be08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32BE04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32BE0Cu;
    // 0x32be0c: 0x0  nop
    ctx->pc = 0x32be0cu;
    // NOP
    ctx->pc = 0x32be10u;
}
