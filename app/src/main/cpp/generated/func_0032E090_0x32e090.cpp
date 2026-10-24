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

// Function: func_0032E090
// Address: 0x32e090 - 0x32e118
void func_0032E090_0x32e090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E090_0x32e090");
#endif

    switch (ctx->pc) {
        case 0x32e0d0u: goto label_32e0d0;
        default: break;
    }

    ctx->pc = 0x32e090u;

    // 0x32e090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32e090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32e094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32e094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32e098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32e098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e09c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32e09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32e0a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32e0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e0a4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32E0A4u;
    {
        const bool branch_taken_0x32e0a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E0A4u;
        // 0x32e0a8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e0a4) {
            ctx->pc = 0x32E0C8u;
            goto label_32e0c8;
        }
    }
    ctx->pc = 0x32E0ACu;
    // 0x32e0ac: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32e0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e0b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32e0b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e0b8: 0x24842d10  addiu       $a0, $a0, 0x2D10
    ctx->pc = 0x32e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11536));
    // 0x32e0bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32e0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e0c0: 0x80cff2c  j           func_33FCB0
    ctx->pc = 0x32E0C0u;
    ctx->pc = 0x32E0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E0C0u;
    // 0x32e0c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32E0C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32E0C8u;
label_32e0c8:
    // 0x32e0c8: 0xc0cb724  jal         func_32DC90
    ctx->pc = 0x32E0C8u;
    SET_GPR_U32(ctx, 31, 0x32E0D0u);
    ctx->pc = 0x32DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC90u, 0x32E0C8u, 0x32E0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E0D0u;
label_32e0d0:
    // 0x32e0d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32e0d4: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x32e0d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x32e0d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32e0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e0dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x32e0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e0e0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32E0E0u;
    {
        const bool branch_taken_0x32e0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x32E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E0E0u;
        // 0x32e0e4: 0xae1101a8  sw          $s1, 0x1A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e0e0) {
            ctx->pc = 0x32E100u;
            goto label_32e100;
        }
    }
    ctx->pc = 0x32E0E8u;
    // 0x32e0e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e0ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32e0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e0f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32e0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e0f4: 0x80cbbda  j           func_32EF68
    ctx->pc = 0x32E0F4u;
    ctx->pc = 0x32E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E0F4u;
    // 0x32e0f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EF68u, 0x32E0F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32E0FCu;
    // 0x32e0fc: 0x0  nop
    ctx->pc = 0x32e0fcu;
    // NOP
label_32e100:
    // 0x32e100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32e100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32e104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32e108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32e108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e10c: 0x3e00008  jr          $ra
    ctx->pc = 0x32E10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E10Cu;
        // 0x32e110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E114u;
    // 0x32e114: 0x0  nop
    ctx->pc = 0x32e114u;
    // NOP
    ctx->pc = 0x32e118u;
}
