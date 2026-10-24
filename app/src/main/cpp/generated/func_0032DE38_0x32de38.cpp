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

// Function: func_0032DE38
// Address: 0x32de38 - 0x32de88
void func_0032DE38_0x32de38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032DE38_0x32de38");
#endif

    switch (ctx->pc) {
        case 0x32de50u: goto label_32de50;
        case 0x32de58u: goto label_32de58;
        case 0x32de6cu: goto label_32de6c;
        default: break;
    }

    ctx->pc = 0x32de38u;

    // 0x32de38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32de38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32de3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32de3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32de40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32de40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32de44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32de44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32de48: 0xc0cff1c  jal         func_33FC70
    ctx->pc = 0x32DE48u;
    SET_GPR_U32(ctx, 31, 0x32DE50u);
    ctx->pc = 0x32DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DE48u;
    // 0x32de4c: 0xe60c01e4  swc1        $f12, 0x1E4($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32DE48u, 0x32DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE50u;
label_32de50:
    // 0x32de50: 0xc0cb724  jal         func_32DC90
    ctx->pc = 0x32DE50u;
    SET_GPR_U32(ctx, 31, 0x32DE58u);
    ctx->pc = 0x32DE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DE50u;
    // 0x32de54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC90u, 0x32DE50u, 0x32DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE58u;
label_32de58:
    // 0x32de58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32de58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32de5c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DE5Cu;
    {
        const bool branch_taken_0x32de5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x32DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DE5Cu;
        // 0x32de60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32de5c) {
            ctx->pc = 0x32DE6Cu;
            goto label_32de6c;
        }
    }
    ctx->pc = 0x32DE64u;
    // 0x32de64: 0xc0cb75c  jal         func_32DD70
    ctx->pc = 0x32DE64u;
    SET_GPR_U32(ctx, 31, 0x32DE6Cu);
    ctx->pc = 0x32DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DD70u, 0x32DE64u, 0x32DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DE6Cu;
label_32de6c:
    // 0x32de6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32de6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32de70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32de70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32de74: 0x80cff22  j           func_33FC88
    ctx->pc = 0x32DE74u;
    ctx->pc = 0x32DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DE74u;
    // 0x32de78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32DE74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32DE7Cu;
    // 0x32de7c: 0x0  nop
    ctx->pc = 0x32de7cu;
    // NOP
    // 0x32de80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32de80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32de84: 0x0  nop
    ctx->pc = 0x32de84u;
    // NOP
    ctx->pc = 0x32de88u;
}
