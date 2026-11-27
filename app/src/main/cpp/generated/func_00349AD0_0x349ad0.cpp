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

// Function: func_00349AD0
// Address: 0x349ad0 - 0x349b48
void func_00349AD0_0x349ad0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349AD0_0x349ad0");
#endif

    if (__builtin_expect(ctx->pc != 0x349ad0u, 0)) {
        switch (ctx->pc) {
            case 0x349b04u: goto label_349b04;
            case 0x349b1cu: goto label_349b1c;
            default: break;
        }
    }


    // 0x349ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x349ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x349ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x349ad8: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x349adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x349ae0: 0xa0882d  daddu       $s1, $a1, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349ae4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x349ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x349ae8: 0xc0902d  daddu       $s2, $a2, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349aec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x349aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x349af0: 0xe0982d  daddu       $s3, $a3, $zero
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349af4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x349af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x349af8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x349af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x349afc: 0xc0c9fea  jal         func_327FA8
    SET_GPR_U32(ctx, 31, 0x349B04u);
    ctx->pc = 0x349B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349AFCu;
    // 0x349b00: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00327FA8_0x327fa8, 0x327fa8u, 0x349b04u)) {
        return;
    }
label_349b04:
    // 0x349b04: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b08: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b0c: 0x240302d  daddu       $a2, $s2, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b10: 0x260382d  daddu       $a3, $s3, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b14: 0xc0c9f86  jal         func_327E18
    SET_GPR_U32(ctx, 31, 0x349B1Cu);
    ctx->pc = 0x349B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B14u;
    // 0x349b18: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00327E18_0x327e18, 0x327e18u, 0x349b1cu)) {
        return;
    }
label_349b1c:
    // 0x349b1c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b20: 0x280282d  daddu       $a1, $s4, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349b24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x349b24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x349b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349b30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x349b30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349b34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x349b34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x349b38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x349b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x349b3c: 0x80ca112  j           func_328448
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349B3Cu;
    // 0x349b40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x349B3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x349b44: 0x0  nop
    // NOP
    ctx->pc = 0x349b48u;
}