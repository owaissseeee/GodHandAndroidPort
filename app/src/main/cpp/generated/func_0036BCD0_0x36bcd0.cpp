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

// Function: func_0036BCD0
// Address: 0x36bcd0 - 0x36bda0
void func_0036BCD0_0x36bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036BCD0_0x36bcd0");
#endif

    switch (ctx->pc) {
        case 0x36bd48u: goto label_36bd48;
        case 0x36bd50u: goto label_36bd50;
        case 0x36bd74u: goto label_36bd74;
        default: break;
    }

    ctx->pc = 0x36bcd0u;

    // 0x36bcd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36bcd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36bcd8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x36bcd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bcdc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36bcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36bce0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x36bce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36bce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36bce8: 0x24850250  addiu       $a1, $a0, 0x250
    ctx->pc = 0x36bce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x36bcec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36bcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36bcf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36bcf4: 0x8c820384  lw          $v0, 0x384($a0)
    ctx->pc = 0x36bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 900)));
    // 0x36bcf8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x36BCF8u;
    {
        const bool branch_taken_0x36bcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BCF8u;
        // 0x36bcfc: 0x8c860194  lw          $a2, 0x194($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bcf8) {
            ctx->pc = 0x36BD34u;
            goto label_36bd34;
        }
    }
    ctx->pc = 0x36BD00u;
    // 0x36bd00: 0x8c830388  lw          $v1, 0x388($a0)
    ctx->pc = 0x36bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 904)));
    // 0x36bd04: 0xac800384  sw          $zero, 0x384($a0)
    ctx->pc = 0x36bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 900), GPR_U32(ctx, 0));
    // 0x36bd08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36bd0c: 0xac830388  sw          $v1, 0x388($a0)
    ctx->pc = 0x36bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 904), GPR_U32(ctx, 3));
    // 0x36bd10: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x36bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x36bd14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36bd18: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BD18u;
    {
        const bool branch_taken_0x36bd18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BD18u;
        // 0x36bd1c: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bd18) {
            ctx->pc = 0x36BD28u;
            goto label_36bd28;
        }
    }
    ctx->pc = 0x36BD20u;
    // 0x36bd20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x36BD20u;
    {
        const bool branch_taken_0x36bd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BD20u;
        // 0x36bd24: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bd20) {
            ctx->pc = 0x36BD80u;
            goto label_36bd80;
        }
    }
    ctx->pc = 0x36BD28u;
label_36bd28:
    // 0x36bd28: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x36bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x36bd2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36bd30: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x36bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_36bd34:
    // 0x36bd34: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x36bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x36bd38: 0x2411fffe  addiu       $s1, $zero, -0x2
    ctx->pc = 0x36bd38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x36bd3c: 0x46880b  movn        $s1, $v0, $a2
    ctx->pc = 0x36bd3cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x36bd40: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x36bd40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36bd44: 0x0  nop
    ctx->pc = 0x36bd44u;
    // NOP
label_36bd48:
    // 0x36bd48: 0xc0daede  jal         func_36BB78
    ctx->pc = 0x36BD48u;
    SET_GPR_U32(ctx, 31, 0x36BD50u);
    ctx->pc = 0x36BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BD48u;
    // 0x36bd4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BB78u, 0x36BD48u, 0x36BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BD50u;
label_36bd50:
    // 0x36bd50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bd54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36bd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36bd58: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x36bd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36bd5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36BD5Cu;
    {
        const bool branch_taken_0x36bd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BD5Cu;
        // 0x36bd60: 0x531824  and         $v1, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bd5c) {
            ctx->pc = 0x36BD7Cu;
            goto label_36bd7c;
        }
    }
    ctx->pc = 0x36BD64u;
    // 0x36bd64: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x36BD64u;
    {
        const bool branch_taken_0x36bd64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36bd64) {
            ctx->pc = 0x36BD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36BD64u;
            // 0x36bd68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36BD7Cu;
            goto label_36bd7c;
        }
    }
    ctx->pc = 0x36BD6Cu;
    // 0x36bd6c: 0xc0daf68  jal         func_36BDA0
    ctx->pc = 0x36BD6Cu;
    SET_GPR_U32(ctx, 31, 0x36BD74u);
    ctx->pc = 0x36BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BDA0u, 0x36BD6Cu, 0x36BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BD74u;
label_36bd74:
    // 0x36bd74: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x36BD74u;
    {
        const bool branch_taken_0x36bd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x36bd74) {
            ctx->pc = 0x36BD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bd48;
        }
    }
    ctx->pc = 0x36BD7Cu;
label_36bd7c:
    // 0x36bd7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x36bd7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36bd80:
    // 0x36bd80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36bd80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bd84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36bd84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36bd88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36bd88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bd8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36bd8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36bd90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36bd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36bd94: 0x3e00008  jr          $ra
    ctx->pc = 0x36BD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BD94u;
        // 0x36bd98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BD9Cu;
    // 0x36bd9c: 0x0  nop
    ctx->pc = 0x36bd9cu;
    // NOP
    ctx->pc = 0x36bda0u;
}
