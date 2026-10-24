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

// Function: func_0032BC98
// Address: 0x32bc98 - 0x32bd50
void func_0032BC98_0x32bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032BC98_0x32bc98");
#endif

    switch (ctx->pc) {
        case 0x32bcf8u: goto label_32bcf8;
        case 0x32bd04u: goto label_32bd04;
        default: break;
    }

    ctx->pc = 0x32bc98u;

    // 0x32bc98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32bc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32bc9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32bc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32bca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32bca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bca4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32bca8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32bca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bcac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32bcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32bcb0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32bcb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bcb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32bcb8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x32bcb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bcbc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BCBCu;
    {
        const bool branch_taken_0x32bcbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BCBCu;
        // 0x32bcc0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bcbc) {
            ctx->pc = 0x32BCCCu;
            goto label_32bccc;
        }
    }
    ctx->pc = 0x32BCC4u;
    // 0x32bcc4: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x32BCC4u;
    {
        const bool branch_taken_0x32bcc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32bcc4) {
            ctx->pc = 0x32BCF0u;
            goto label_32bcf0;
        }
    }
    ctx->pc = 0x32BCCCu;
label_32bccc:
    // 0x32bccc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32bcd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32bcd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bcd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32bcd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32bcd8: 0x248427a0  addiu       $a0, $a0, 0x27A0
    ctx->pc = 0x32bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10144));
    // 0x32bcdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32bcdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bce0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32bce0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32bce4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32bce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bce8: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x32BCE8u;
    ctx->pc = 0x32BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCE8u;
    // 0x32bcec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32BCE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32BCF0u;
label_32bcf0:
    // 0x32bcf0: 0xc0ca7aa  jal         func_329EA8
    ctx->pc = 0x32BCF0u;
    SET_GPR_U32(ctx, 31, 0x32BCF8u);
    ctx->pc = 0x329EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329EA8u, 0x32BCF0u, 0x32BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BCF8u;
label_32bcf8:
    // 0x32bcf8: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x32bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x32bcfc: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x32BCFCu;
    SET_GPR_U32(ctx, 31, 0x32BD04u);
    ctx->pc = 0x32BD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCFCu;
    // 0x32bd00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x32BCFCu, 0x32BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD04u;
label_32bd04:
    // 0x32bd04: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x32bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x32bd08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32bd0c: 0xae1200bc  sw          $s2, 0xBC($s0)
    ctx->pc = 0x32bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 18));
    // 0x32bd10: 0xae1300c0  sw          $s3, 0xC0($s0)
    ctx->pc = 0x32bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 19));
    // 0x32bd14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32bd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd18: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x32bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x32bd1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32bd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd20: 0xa20200ac  sb          $v0, 0xAC($s0)
    ctx->pc = 0x32bd20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x32bd24: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x32bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x32bd28: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x32bd28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x32bd2c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x32bd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x32bd30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32bd30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32bd34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32bd34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bd38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32bd38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bd3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32bd3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32bd40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32bd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bd44: 0x80cad98  j           func_32B660
    ctx->pc = 0x32BD44u;
    ctx->pc = 0x32BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD44u;
    // 0x32bd48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B660u, 0x32BD44u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32BD4Cu;
    // 0x32bd4c: 0x0  nop
    ctx->pc = 0x32bd4cu;
    // NOP
    ctx->pc = 0x32bd50u;
}
