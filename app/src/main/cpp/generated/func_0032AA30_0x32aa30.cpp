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

// Function: func_0032AA30
// Address: 0x32aa30 - 0x32aaa0
void func_0032AA30_0x32aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032AA30_0x32aa30");
#endif

    switch (ctx->pc) {
        case 0x32aa78u: goto label_32aa78;
        default: break;
    }

    ctx->pc = 0x32aa30u;

    // 0x32aa30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32aa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32aa34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32aa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32aa38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32aa38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa3c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32AA3Cu;
    {
        const bool branch_taken_0x32aa3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA3Cu;
        // 0x32aa40: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa3c) {
            ctx->pc = 0x32AA60u;
            goto label_32aa60;
        }
    }
    ctx->pc = 0x32AA44u;
    // 0x32aa44: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32aa48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32aa48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32aa4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32aa4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32aa50: 0x248422b8  addiu       $a0, $a0, 0x22B8
    ctx->pc = 0x32aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8888));
    // 0x32aa54: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x32AA54u;
    ctx->pc = 0x32AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA54u;
    // 0x32aa58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32AA54u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32AA5Cu;
    // 0x32aa5c: 0x0  nop
    ctx->pc = 0x32aa5cu;
    // NOP
label_32aa60:
    // 0x32aa60: 0x820300ad  lb          $v1, 0xAD($s0)
    ctx->pc = 0x32aa60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 173)));
    // 0x32aa64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32aa68: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32AA68u;
    {
        const bool branch_taken_0x32aa68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA68u;
        // 0x32aa6c: 0xa6050040  sh          $a1, 0x40($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa68) {
            ctx->pc = 0x32AA80u;
            goto label_32aa80;
        }
    }
    ctx->pc = 0x32AA70u;
    // 0x32aa70: 0xc0c9e24  jal         func_327890
    ctx->pc = 0x32AA70u;
    SET_GPR_U32(ctx, 31, 0x32AA78u);
    ctx->pc = 0x32AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA70u;
    // 0x32aa74: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327890u, 0x32AA70u, 0x32AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AA78u;
label_32aa78:
    // 0x32aa78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32AA78u;
    {
        const bool branch_taken_0x32aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AA78u;
        // 0x32aa7c: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aa78) {
            ctx->pc = 0x32AA88u;
            goto label_32aa88;
        }
    }
    ctx->pc = 0x32AA80u;
label_32aa80:
    // 0x32aa80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32aa80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32aa84: 0x86050040  lh          $a1, 0x40($s0)
    ctx->pc = 0x32aa84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_32aa88:
    // 0x32aa88: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x32aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32aa8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32aa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32aa90: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x32aa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x32aa94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32aa94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32aa98: 0x80c98f8  j           func_3263E0
    ctx->pc = 0x32AA98u;
    ctx->pc = 0x32AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AA98u;
    // 0x32aa9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3263E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3263E0u, 0x32AA98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32AAA0u;
}
