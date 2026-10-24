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

// Function: func_0032DDF8
// Address: 0x32ddf8 - 0x32de38
void func_0032DDF8_0x32ddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DDF8_0x32ddf8");
#endif

    switch (ctx->pc) {
        case 0x32de14u: goto label_32de14;
        case 0x32de20u: goto label_32de20;
        default: break;
    }

    ctx->pc = 0x32ddf8u;

    // 0x32ddf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ddf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ddfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ddfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32de00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32de00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32de04: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x32de04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32de08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32de08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32de0c: 0xc0cff28  jal         func_33FCA0
    ctx->pc = 0x32DE0Cu;
    SET_GPR_U32(ctx, 31, 0x32DE14u);
    ctx->pc = 0x32DE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DE0Cu;
    // 0x32de10: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA0u, 0x32DE0Cu, 0x32DE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE14u;
label_32de14:
    // 0x32de14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32de14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32de18: 0xc0cb78e  jal         func_32DE38
    ctx->pc = 0x32DE18u;
    SET_GPR_U32(ctx, 31, 0x32DE20u);
    ctx->pc = 0x32DE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DE18u;
    // 0x32de1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DE38u, 0x32DE18u, 0x32DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE20u;
label_32de20:
    // 0x32de20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32de20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32de24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32de24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32de28: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x32de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32de2c: 0x80cff2a  j           func_33FCA8
    ctx->pc = 0x32DE2Cu;
    ctx->pc = 0x32DE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DE2Cu;
    // 0x32de30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCA8u, 0x32DE2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DE34u;
    // 0x32de34: 0x0  nop
    ctx->pc = 0x32de34u;
    // NOP
    ctx->pc = 0x32de38u;
}
