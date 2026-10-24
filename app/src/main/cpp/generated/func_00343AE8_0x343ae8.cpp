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

// Function: func_00343AE8
// Address: 0x343ae8 - 0x343bd0
void func_00343AE8_0x343ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00343AE8_0x343ae8");
#endif

    switch (ctx->pc) {
        case 0x343b80u: goto label_343b80;
        default: break;
    }

    ctx->pc = 0x343ae8u;

    // 0x343ae8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x343ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x343aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x343aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x343af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x343af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343af4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x343af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x343af8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x343af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x343afc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x343afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x343b00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x343b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x343b04: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x343b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x343b08: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x343B08u;
    {
        const bool branch_taken_0x343b08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x343b08) {
            ctx->pc = 0x343B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343B08u;
            // 0x343b0c: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343B38u;
            goto label_343b38;
        }
    }
    ctx->pc = 0x343B10u;
    // 0x343b10: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x343b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x343b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x343b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343b18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x343b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x343b1c: 0x24847308  addiu       $a0, $a0, 0x7308
    ctx->pc = 0x343b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29448));
    // 0x343b20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x343b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343b24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x343b24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x343b28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x343b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343b2c: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x343B2Cu;
    ctx->pc = 0x343B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B2Cu;
    // 0x343b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x343B2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x343B34u;
    // 0x343b34: 0x0  nop
    ctx->pc = 0x343b34u;
    // NOP
label_343b38:
    // 0x343b38: 0x8cb30008  lw          $s3, 0x8($a1)
    ctx->pc = 0x343b38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x343b3c: 0x24720004  addiu       $s2, $v1, 0x4
    ctx->pc = 0x343b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x343b40: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x343b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x343b44: 0x2531818  mult        $v1, $s2, $s3
    ctx->pc = 0x343b44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x343b48: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x343b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x343b4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x343B4Cu;
    {
        const bool branch_taken_0x343b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B4Cu;
        // 0x343b50: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343b4c) {
            ctx->pc = 0x343B78u;
            goto label_343b78;
        }
    }
    ctx->pc = 0x343B54u;
    // 0x343b54: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x343b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x343b58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x343b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343b5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x343b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x343b60: 0x24847340  addiu       $a0, $a0, 0x7340
    ctx->pc = 0x343b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29504));
    // 0x343b64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x343b64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343b68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x343b68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x343b6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x343b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343b70: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x343B70u;
    ctx->pc = 0x343B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B70u;
    // 0x343b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x343B70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x343B78u;
label_343b78:
    // 0x343b78: 0xc0d1566  jal         func_345598
    ctx->pc = 0x343B78u;
    SET_GPR_U32(ctx, 31, 0x343B80u);
    ctx->pc = 0x345598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345598u, 0x343B78u, 0x343B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B80u;
label_343b80:
    // 0x343b80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343b84: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x343B84u;
    {
        const bool branch_taken_0x343b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x343b84) {
            ctx->pc = 0x343B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343B84u;
            // 0x343b88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343BB8u;
            goto label_343bb8;
        }
    }
    ctx->pc = 0x343B8Cu;
    // 0x343b8c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x343b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x343b90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x343b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343b94: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x343b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343b98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x343b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343b9c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x343b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343ba0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x343ba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x343ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x343ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343ba8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x343ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x343bac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x343bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343bb0: 0x80d4128  j           func_3504A0
    ctx->pc = 0x343BB0u;
    ctx->pc = 0x343BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343BB0u;
    // 0x343bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3504A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3504A0u, 0x343BB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x343BB8u;
label_343bb8:
    // 0x343bb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x343bb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x343bbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x343bbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343bc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x343bc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x343bc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x343bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x343BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BC8u;
        // 0x343bcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343BD0u;
}
