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

// Function: func_0017B5E0
// Address: 0x17b5e0 - 0x17b6e8
void func_0017B5E0_0x17b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017B5E0_0x17b5e0");
#endif

    ctx->pc = 0x17b5e0u;

    // 0x17b5e0: 0x90820602  lbu         $v0, 0x602($a0)
    ctx->pc = 0x17b5e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1538)));
    // 0x17b5e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b5e8: 0x1043003c  beq         $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x17B5E8u;
    {
        const bool branch_taken_0x17b5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x17B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B5E8u;
        // 0x17b5ec: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5e8) {
            ctx->pc = 0x17B6DCu;
            goto label_17b6dc;
        }
    }
    ctx->pc = 0x17B5F0u;
    // 0x17b5f0: 0x90820601  lbu         $v0, 0x601($a0)
    ctx->pc = 0x17b5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1537)));
    // 0x17b5f4: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x17B5F4u;
    {
        const bool branch_taken_0x17b5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b5f4) {
            ctx->pc = 0x17B6DCu;
            goto label_17b6dc;
        }
    }
    ctx->pc = 0x17B5FCu;
    // 0x17b5fc: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x17b5fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x17b600: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B600u;
    {
        const bool branch_taken_0x17b600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B600u;
        // 0x17b604: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b600) {
            ctx->pc = 0x17B614u;
            goto label_17b614;
        }
    }
    ctx->pc = 0x17B608u;
    // 0x17b608: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x17b608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x17b60c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17B60Cu;
    {
        const bool branch_taken_0x17b60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B60Cu;
        // 0x17b610: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b60c) {
            ctx->pc = 0x17B618u;
            goto label_17b618;
        }
    }
    ctx->pc = 0x17B614u;
label_17b614:
    // 0x17b614: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17b614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b618:
    // 0x17b618: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B618u;
    {
        const bool branch_taken_0x17b618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b618) {
            ctx->pc = 0x17B61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B618u;
            // 0x17b61c: 0x908302b4  lbu         $v1, 0x2B4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B65Cu;
            goto label_17b65c;
        }
    }
    ctx->pc = 0x17B620u;
    // 0x17b620: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x17b620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x17b624: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B624u;
    {
        const bool branch_taken_0x17b624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B624u;
        // 0x17b628: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b624) {
            ctx->pc = 0x17B638u;
            goto label_17b638;
        }
    }
    ctx->pc = 0x17B62Cu;
    // 0x17b62c: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x17b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x17b630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17B630u;
    {
        const bool branch_taken_0x17b630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B630u;
        // 0x17b634: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b630) {
            ctx->pc = 0x17B63Cu;
            goto label_17b63c;
        }
    }
    ctx->pc = 0x17B638u;
label_17b638:
    // 0x17b638: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17b638u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b63c:
    // 0x17b63c: 0x3c01bfb2  lui         $at, 0xBFB2
    ctx->pc = 0x17b63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49074 << 16));
    // 0x17b640: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x17b640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x17b644: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b648: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x17b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x17b64c: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x17b64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x17b650: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17b650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17b654: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17b654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17b658: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x17b658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
label_17b65c:
    // 0x17b65c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b660: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17b660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17b664: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B664u;
    {
        const bool branch_taken_0x17b664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B664u;
        // 0x17b668: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b664) {
            ctx->pc = 0x17B678u;
            goto label_17b678;
        }
    }
    ctx->pc = 0x17B66Cu;
    // 0x17b66c: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x17b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x17b670: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17B670u;
    {
        const bool branch_taken_0x17b670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B670u;
        // 0x17b674: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b670) {
            ctx->pc = 0x17B67Cu;
            goto label_17b67c;
        }
    }
    ctx->pc = 0x17B678u;
label_17b678:
    // 0x17b678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17b678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b67c:
    // 0x17b67c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B67Cu;
    {
        const bool branch_taken_0x17b67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B67Cu;
        // 0x17b680: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b67c) {
            ctx->pc = 0x17B6C0u;
            goto label_17b6c0;
        }
    }
    ctx->pc = 0x17B684u;
    // 0x17b684: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x17b684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x17b688: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17b688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17b68c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B68Cu;
    {
        const bool branch_taken_0x17b68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B68Cu;
        // 0x17b690: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b68c) {
            ctx->pc = 0x17B6A0u;
            goto label_17b6a0;
        }
    }
    ctx->pc = 0x17B694u;
    // 0x17b694: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x17b694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x17b698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17B698u;
    {
        const bool branch_taken_0x17b698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B698u;
        // 0x17b69c: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b698) {
            ctx->pc = 0x17B6A4u;
            goto label_17b6a4;
        }
    }
    ctx->pc = 0x17B6A0u;
label_17b6a0:
    // 0x17b6a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17b6a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b6a4:
    // 0x17b6a4: 0x3c01bfb2  lui         $at, 0xBFB2
    ctx->pc = 0x17b6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49074 << 16));
    // 0x17b6a8: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x17b6a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x17b6ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b6b0: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x17b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x17b6b4: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x17b6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x17b6b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17b6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17b6bc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17b6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_17b6c0:
    // 0x17b6c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b6c4: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x17b6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b6c8: 0xa0820601  sb          $v0, 0x601($a0)
    ctx->pc = 0x17b6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1537), (uint8_t)GPR_U32(ctx, 2));
    // 0x17b6cc: 0xa0800600  sb          $zero, 0x600($a0)
    ctx->pc = 0x17b6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b6d0: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x17b6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b6d4: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x17b6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b6d8: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x17b6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_17b6dc:
    // 0x17b6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x17B6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B6DCu;
        // 0x17b6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B6E4u;
    // 0x17b6e4: 0x0  nop
    ctx->pc = 0x17b6e4u;
    // NOP
    ctx->pc = 0x17b6e8u;
}
