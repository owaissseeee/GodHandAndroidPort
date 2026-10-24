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

// Function: cScenario_getObjIdFromStr
// Address: 0x2c4c58 - 0x2c4d50
void cScenario_getObjIdFromStr_0x2c4c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_getObjIdFromStr_0x2c4c58");
#endif

    ctx->pc = 0x2c4c58u;

    // 0x2c4c58: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2c4c58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c4c5c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x2c4c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2c4c60: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4C60u;
    {
        const bool branch_taken_0x2c4c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c4c60) {
            ctx->pc = 0x2C4C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4C60u;
            // 0x2c4c64: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4C80u;
            goto label_2c4c80;
        }
    }
    ctx->pc = 0x2C4C68u;
    // 0x2c4c68: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2c4c68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2c4c6c: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x2c4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x2c4c70: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4C70u;
    {
        const bool branch_taken_0x2c4c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4c70) {
            ctx->pc = 0x2C4C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4C70u;
            // 0x2c4c74: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4C80u;
            goto label_2c4c80;
        }
    }
    ctx->pc = 0x2C4C78u;
    // 0x2c4c78: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C4C78u;
    {
        const bool branch_taken_0x2c4c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C78u;
        // 0x2c4c7c: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c78) {
            ctx->pc = 0x2C4D14u;
            goto label_2c4d14;
        }
    }
    ctx->pc = 0x2C4C80u;
label_2c4c80:
    // 0x2c4c80: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2c4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2c4c84: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4C84u;
    {
        const bool branch_taken_0x2c4c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C84u;
        // 0x2c4c88: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c84) {
            ctx->pc = 0x2C4CA4u;
            goto label_2c4ca4;
        }
    }
    ctx->pc = 0x2C4C8Cu;
    // 0x2c4c8c: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2c4c8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2c4c90: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x2c4c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x2c4c94: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4C94u;
    {
        const bool branch_taken_0x2c4c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C94u;
        // 0x2c4c98: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c94) {
            ctx->pc = 0x2C4CA8u;
            goto label_2c4ca8;
        }
    }
    ctx->pc = 0x2C4C9Cu;
    // 0x2c4c9c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C4C9Cu;
    {
        const bool branch_taken_0x2c4c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C9Cu;
        // 0x2c4ca0: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c9c) {
            ctx->pc = 0x2C4D14u;
            goto label_2c4d14;
        }
    }
    ctx->pc = 0x2C4CA4u;
label_2c4ca4:
    // 0x2c4ca4: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2c4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2c4ca8:
    // 0x2c4ca8: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x2c4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x2c4cac: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2c4cacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2c4cb0: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C4CB0u;
    {
        const bool branch_taken_0x2c4cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CB0u;
        // 0x2c4cb4: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cb0) {
            ctx->pc = 0x2C4CE0u;
            goto label_2c4ce0;
        }
    }
    ctx->pc = 0x2C4CB8u;
    // 0x2c4cb8: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2c4cb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2c4cbc: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x2c4cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x2c4cc0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4CC0u;
    {
        const bool branch_taken_0x2c4cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CC0u;
        // 0x2c4cc4: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cc0) {
            ctx->pc = 0x2C4CD0u;
            goto label_2c4cd0;
        }
    }
    ctx->pc = 0x2C4CC8u;
    // 0x2c4cc8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C4CC8u;
    {
        const bool branch_taken_0x2c4cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CC8u;
        // 0x2c4ccc: 0x24040300  addiu       $a0, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cc8) {
            ctx->pc = 0x2C4D14u;
            goto label_2c4d14;
        }
    }
    ctx->pc = 0x2C4CD0u;
label_2c4cd0:
    // 0x2c4cd0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4CD0u;
    {
        const bool branch_taken_0x2c4cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CD0u;
        // 0x2c4cd4: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cd0) {
            ctx->pc = 0x2C4CE0u;
            goto label_2c4ce0;
        }
    }
    ctx->pc = 0x2C4CD8u;
    // 0x2c4cd8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C4CD8u;
    {
        const bool branch_taken_0x2c4cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CD8u;
        // 0x2c4cdc: 0x24040400  addiu       $a0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cd8) {
            ctx->pc = 0x2C4D14u;
            goto label_2c4d14;
        }
    }
    ctx->pc = 0x2C4CE0u;
label_2c4ce0:
    // 0x2c4ce0: 0x24030065  addiu       $v1, $zero, 0x65
    ctx->pc = 0x2c4ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x2c4ce4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2c4ce4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2c4ce8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4CE8u;
    {
        const bool branch_taken_0x2c4ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CE8u;
        // 0x2c4cec: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ce8) {
            ctx->pc = 0x2C4D0Cu;
            goto label_2c4d0c;
        }
    }
    ctx->pc = 0x2C4CF0u;
    // 0x2c4cf0: 0x80a30001  lb          $v1, 0x1($a1)
    ctx->pc = 0x2c4cf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2c4cf4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4CF4u;
    {
        const bool branch_taken_0x2c4cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CF4u;
        // 0x2c4cf8: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cf4) {
            ctx->pc = 0x2C4D04u;
            goto label_2c4d04;
        }
    }
    ctx->pc = 0x2C4CFCu;
    // 0x2c4cfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4CFCu;
    {
        const bool branch_taken_0x2c4cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CFCu;
        // 0x2c4d00: 0x24040500  addiu       $a0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cfc) {
            ctx->pc = 0x2C4D14u;
            goto label_2c4d14;
        }
    }
    ctx->pc = 0x2C4D04u;
label_2c4d04:
    // 0x2c4d04: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4D04u;
    {
        const bool branch_taken_0x2c4d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D04u;
        // 0x2c4d08: 0x24040600  addiu       $a0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d04) {
            ctx->pc = 0x2C4D14u;
            goto label_2c4d14;
        }
    }
    ctx->pc = 0x2C4D0Cu;
label_2c4d0c:
    // 0x2c4d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D0Cu;
        // 0x2c4d10: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4D14u;
label_2c4d14:
    // 0x2c4d14: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x2c4d14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2c4d18: 0x28620061  slti        $v0, $v1, 0x61
    ctx->pc = 0x2c4d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x2c4d1c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4D1Cu;
    {
        const bool branch_taken_0x2c4d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D1Cu;
        // 0x2c4d20: 0x2462ffd0  addiu       $v0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d1c) {
            ctx->pc = 0x2C4D28u;
            goto label_2c4d28;
        }
    }
    ctx->pc = 0x2C4D24u;
    // 0x2c4d24: 0x2462ffa9  addiu       $v0, $v1, -0x57
    ctx->pc = 0x2c4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967209));
label_2c4d28:
    // 0x2c4d28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c4d2c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2c4d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c4d30: 0x80a50003  lb          $a1, 0x3($a1)
    ctx->pc = 0x2c4d30u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2c4d34: 0x28a20061  slti        $v0, $a1, 0x61
    ctx->pc = 0x2c4d34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x2c4d38: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4D38u;
    {
        const bool branch_taken_0x2c4d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d38) {
            ctx->pc = 0x2C4D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4D38u;
            // 0x2c4d3c: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4D44u;
            goto label_2c4d44;
        }
    }
    ctx->pc = 0x2C4D40u;
    // 0x2c4d40: 0x2482ffa9  addiu       $v0, $a0, -0x57
    ctx->pc = 0x2c4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967209));
label_2c4d44:
    // 0x2c4d44: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x2c4d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c4d48: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D48u;
        // 0x2c4d4c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4D50u;
}
