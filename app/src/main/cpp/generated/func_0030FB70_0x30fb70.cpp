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

// Function: func_0030FB70
// Address: 0x30fb70 - 0x30fcc0
void func_0030FB70_0x30fb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030FB70_0x30fb70");
#endif

    ctx->pc = 0x30fb70u;

    // 0x30fb70: 0x14800029  bnez        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x30FB70u;
    {
        const bool branch_taken_0x30fb70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB70u;
        // 0x30fb74: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb70) {
            ctx->pc = 0x30FC18u;
            goto label_30fc18;
        }
    }
    ctx->pc = 0x30FB78u;
    // 0x30fb78: 0x8c444c30  lw          $a0, 0x4C30($v0)
    ctx->pc = 0x30fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19504)));
    // 0x30fb7c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30FB7Cu;
    {
        const bool branch_taken_0x30fb7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB7Cu;
        // 0x30fb80: 0x24454c30  addiu       $a1, $v0, 0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb7c) {
            ctx->pc = 0x30FB98u;
            goto label_30fb98;
        }
    }
    ctx->pc = 0x30FB84u;
    // 0x30fb84: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x30fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30fb88: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x30fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30fb8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fb90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30FB90u;
    {
        const bool branch_taken_0x30fb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB90u;
        // 0x30fb94: 0x22083  sra         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb90) {
            ctx->pc = 0x30FB9Cu;
            goto label_30fb9c;
        }
    }
    ctx->pc = 0x30FB98u;
label_30fb98:
    // 0x30fb98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30fb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fb9c:
    // 0x30fb9c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30fba0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FBA0u;
    {
        const bool branch_taken_0x30fba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fba0) {
            ctx->pc = 0x30FBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FBA0u;
            // 0x30fba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FBB8u;
            goto label_30fbb8;
        }
    }
    ctx->pc = 0x30FBA8u;
    // 0x30fba8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x30fbac: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x30fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30fbb0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fbb4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x30fbb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_30fbb8:
    // 0x30fbb8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x30fbb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fbbc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x30FBBCu;
    {
        const bool branch_taken_0x30fbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FBBCu;
        // 0x30fbc0: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fbbc) {
            ctx->pc = 0x30FC10u;
            goto label_30fc10;
        }
    }
    ctx->pc = 0x30FBC4u;
    // 0x30fbc4: 0x8c444c38  lw          $a0, 0x4C38($v0)
    ctx->pc = 0x30fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19512)));
    // 0x30fbc8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30FBC8u;
    {
        const bool branch_taken_0x30fbc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FBC8u;
        // 0x30fbcc: 0x24454c38  addiu       $a1, $v0, 0x4C38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fbc8) {
            ctx->pc = 0x30FBE4u;
            goto label_30fbe4;
        }
    }
    ctx->pc = 0x30FBD0u;
    // 0x30fbd0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x30fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30fbd4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x30fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30fbd8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fbdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30FBDCu;
    {
        const bool branch_taken_0x30fbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FBDCu;
        // 0x30fbe0: 0x22083  sra         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fbdc) {
            ctx->pc = 0x30FBE8u;
            goto label_30fbe8;
        }
    }
    ctx->pc = 0x30FBE4u;
label_30fbe4:
    // 0x30fbe4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30fbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fbe8:
    // 0x30fbe8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30fbec: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FBECu;
    {
        const bool branch_taken_0x30fbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fbec) {
            ctx->pc = 0x30FBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FBECu;
            // 0x30fbf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FC04u;
            goto label_30fc04;
        }
    }
    ctx->pc = 0x30FBF4u;
    // 0x30fbf4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x30fbf8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x30fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30fbfc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fc00: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x30fc00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_30fc04:
    // 0x30fc04: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x30fc04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fc08: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x30FC08u;
    {
        const bool branch_taken_0x30fc08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC08u;
        // 0x30fc0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc08) {
            ctx->pc = 0x30FCB4u;
            goto label_30fcb4;
        }
    }
    ctx->pc = 0x30FC10u;
label_30fc10:
    // 0x30fc10: 0x3e00008  jr          $ra
    ctx->pc = 0x30FC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC10u;
        // 0x30fc14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FC18u;
label_30fc18:
    // 0x30fc18: 0x8c444c30  lw          $a0, 0x4C30($v0)
    ctx->pc = 0x30fc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19504)));
    // 0x30fc1c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30FC1Cu;
    {
        const bool branch_taken_0x30fc1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC1Cu;
        // 0x30fc20: 0x24454c30  addiu       $a1, $v0, 0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc1c) {
            ctx->pc = 0x30FC38u;
            goto label_30fc38;
        }
    }
    ctx->pc = 0x30FC24u;
    // 0x30fc24: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x30fc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30fc28: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x30fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30fc2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fc30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30FC30u;
    {
        const bool branch_taken_0x30fc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC30u;
        // 0x30fc34: 0x22083  sra         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc30) {
            ctx->pc = 0x30FC3Cu;
            goto label_30fc3c;
        }
    }
    ctx->pc = 0x30FC38u;
label_30fc38:
    // 0x30fc38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30fc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fc3c:
    // 0x30fc3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30fc40: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FC40u;
    {
        const bool branch_taken_0x30fc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fc40) {
            ctx->pc = 0x30FC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FC40u;
            // 0x30fc44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FC58u;
            goto label_30fc58;
        }
    }
    ctx->pc = 0x30FC48u;
    // 0x30fc48: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x30fc4c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x30fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30fc50: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fc54: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x30fc54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_30fc58:
    // 0x30fc58: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x30fc58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fc5c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x30FC5Cu;
    {
        const bool branch_taken_0x30fc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC5Cu;
        // 0x30fc60: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc5c) {
            ctx->pc = 0x30FCB0u;
            goto label_30fcb0;
        }
    }
    ctx->pc = 0x30FC64u;
    // 0x30fc64: 0x8c444c58  lw          $a0, 0x4C58($v0)
    ctx->pc = 0x30fc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19544)));
    // 0x30fc68: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30FC68u;
    {
        const bool branch_taken_0x30fc68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC68u;
        // 0x30fc6c: 0x24454c58  addiu       $a1, $v0, 0x4C58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc68) {
            ctx->pc = 0x30FC84u;
            goto label_30fc84;
        }
    }
    ctx->pc = 0x30FC70u;
    // 0x30fc70: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x30fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30fc74: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x30fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x30fc78: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fc7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30FC7Cu;
    {
        const bool branch_taken_0x30fc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC7Cu;
        // 0x30fc80: 0x22083  sra         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc7c) {
            ctx->pc = 0x30FC88u;
            goto label_30fc88;
        }
    }
    ctx->pc = 0x30FC84u;
label_30fc84:
    // 0x30fc84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30fc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fc88:
    // 0x30fc88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x30fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30fc8c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FC8Cu;
    {
        const bool branch_taken_0x30fc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fc8c) {
            ctx->pc = 0x30FC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FC8Cu;
            // 0x30fc90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FCA4u;
            goto label_30fca4;
        }
    }
    ctx->pc = 0x30FC94u;
    // 0x30fc94: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x30fc98: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x30fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30fc9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30fca0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x30fca0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_30fca4:
    // 0x30fca4: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x30fca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30fca8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30FCA8u;
    {
        const bool branch_taken_0x30fca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FCA8u;
        // 0x30fcac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fca8) {
            ctx->pc = 0x30FCB4u;
            goto label_30fcb4;
        }
    }
    ctx->pc = 0x30FCB0u;
label_30fcb0:
    // 0x30fcb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30fcb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fcb4:
    // 0x30fcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x30FCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FCBCu;
    // 0x30fcbc: 0x0  nop
    ctx->pc = 0x30fcbcu;
    // NOP
    ctx->pc = 0x30fcc0u;
}
