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

// Function: func_0033AA48
// Address: 0x33aa48 - 0x33ab68
void func_0033AA48_0x33aa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033AA48_0x33aa48");
#endif

    switch (ctx->pc) {
        case 0x33aa48u: goto label_33aa48;
        case 0x33aa4cu: goto label_33aa4c;
        case 0x33aa50u: goto label_33aa50;
        case 0x33aa54u: goto label_33aa54;
        case 0x33aa58u: goto label_33aa58;
        case 0x33aa5cu: goto label_33aa5c;
        case 0x33aa60u: goto label_33aa60;
        case 0x33aa64u: goto label_33aa64;
        case 0x33aa68u: goto label_33aa68;
        case 0x33aa6cu: goto label_33aa6c;
        case 0x33aa70u: goto label_33aa70;
        case 0x33aa74u: goto label_33aa74;
        case 0x33aa78u: goto label_33aa78;
        case 0x33aa7cu: goto label_33aa7c;
        case 0x33aa80u: goto label_33aa80;
        case 0x33aa84u: goto label_33aa84;
        case 0x33aa88u: goto label_33aa88;
        case 0x33aa8cu: goto label_33aa8c;
        case 0x33aa90u: goto label_33aa90;
        case 0x33aa94u: goto label_33aa94;
        case 0x33aa98u: goto label_33aa98;
        case 0x33aa9cu: goto label_33aa9c;
        case 0x33aaa0u: goto label_33aaa0;
        case 0x33aaa4u: goto label_33aaa4;
        case 0x33aaa8u: goto label_33aaa8;
        case 0x33aaacu: goto label_33aaac;
        case 0x33aab0u: goto label_33aab0;
        case 0x33aab4u: goto label_33aab4;
        case 0x33aab8u: goto label_33aab8;
        case 0x33aabcu: goto label_33aabc;
        case 0x33aac0u: goto label_33aac0;
        case 0x33aac4u: goto label_33aac4;
        case 0x33aac8u: goto label_33aac8;
        case 0x33aaccu: goto label_33aacc;
        case 0x33aad0u: goto label_33aad0;
        case 0x33aad4u: goto label_33aad4;
        case 0x33aad8u: goto label_33aad8;
        case 0x33aadcu: goto label_33aadc;
        case 0x33aae0u: goto label_33aae0;
        case 0x33aae4u: goto label_33aae4;
        case 0x33aae8u: goto label_33aae8;
        case 0x33aaecu: goto label_33aaec;
        case 0x33aaf0u: goto label_33aaf0;
        case 0x33aaf4u: goto label_33aaf4;
        case 0x33aaf8u: goto label_33aaf8;
        case 0x33aafcu: goto label_33aafc;
        case 0x33ab00u: goto label_33ab00;
        case 0x33ab04u: goto label_33ab04;
        case 0x33ab08u: goto label_33ab08;
        case 0x33ab0cu: goto label_33ab0c;
        case 0x33ab10u: goto label_33ab10;
        case 0x33ab14u: goto label_33ab14;
        case 0x33ab18u: goto label_33ab18;
        case 0x33ab1cu: goto label_33ab1c;
        case 0x33ab20u: goto label_33ab20;
        case 0x33ab24u: goto label_33ab24;
        case 0x33ab28u: goto label_33ab28;
        case 0x33ab2cu: goto label_33ab2c;
        case 0x33ab30u: goto label_33ab30;
        case 0x33ab34u: goto label_33ab34;
        case 0x33ab38u: goto label_33ab38;
        case 0x33ab3cu: goto label_33ab3c;
        case 0x33ab40u: goto label_33ab40;
        case 0x33ab44u: goto label_33ab44;
        case 0x33ab48u: goto label_33ab48;
        case 0x33ab4cu: goto label_33ab4c;
        case 0x33ab50u: goto label_33ab50;
        case 0x33ab54u: goto label_33ab54;
        case 0x33ab58u: goto label_33ab58;
        case 0x33ab5cu: goto label_33ab5c;
        case 0x33ab60u: goto label_33ab60;
        case 0x33ab64u: goto label_33ab64;
        default: break;
    }

    ctx->pc = 0x33aa48u;

label_33aa48:
    // 0x33aa48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33aa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33aa4c:
    // 0x33aa4c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x33aa4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33aa50:
    // 0x33aa50: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_33aa54:
    if (ctx->pc == 0x33AA54u) {
        ctx->pc = 0x33AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA50u;
        // 0x33aa54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AA58u;
        goto label_33aa58;
    }
    ctx->pc = 0x33AA50u;
    {
        const bool branch_taken_0x33aa50 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA50u;
        // 0x33aa54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa50) {
            ctx->pc = 0x33AA78u;
            goto label_33aa78;
        }
    }
    ctx->pc = 0x33AA58u;
label_33aa58:
    // 0x33aa58: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33aa5c:
    // 0x33aa5c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33aa60:
    // 0x33aa60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33aa60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33aa64:
    // 0x33aa64: 0x24845ce8  addiu       $a0, $a0, 0x5CE8
    ctx->pc = 0x33aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23784));
label_33aa68:
    // 0x33aa68: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8
    ctx->pc = 0x33aa68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
label_33aa6c:
    // 0x33aa6c: 0x80ce812  j           func_33A048
label_33aa70:
    if (ctx->pc == 0x33AA70u) {
        ctx->pc = 0x33AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA6Cu;
        // 0x33aa70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AA74u;
        goto label_33aa74;
    }
    ctx->pc = 0x33AA6Cu;
    ctx->pc = 0x33AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AA6Cu;
    // 0x33aa70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33AA6Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33AA74u;
label_33aa74:
    // 0x33aa74: 0x0  nop
    ctx->pc = 0x33aa74u;
    // NOP
label_33aa78:
    // 0x33aa78: 0x81020004  lb          $v0, 0x4($t0)
    ctx->pc = 0x33aa78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_33aa7c:
    // 0x33aa7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_33aa80:
    if (ctx->pc == 0x33AA80u) {
        ctx->pc = 0x33AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA7Cu;
        // 0x33aa80: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AA84u;
        goto label_33aa84;
    }
    ctx->pc = 0x33AA7Cu;
    {
        const bool branch_taken_0x33aa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA7Cu;
        // 0x33aa80: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa7c) {
            ctx->pc = 0x33AAA0u;
            goto label_33aaa0;
        }
    }
    ctx->pc = 0x33AA84u;
label_33aa84:
    // 0x33aa84: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_33aa88:
    // 0x33aa88: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33aa88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_33aa8c:
    // 0x33aa8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33aa8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33aa90:
    // 0x33aa90: 0x24845cf8  addiu       $a0, $a0, 0x5CF8
    ctx->pc = 0x33aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23800));
label_33aa94:
    // 0x33aa94: 0x24a55c08  addiu       $a1, $a1, 0x5C08
    ctx->pc = 0x33aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23560));
label_33aa98:
    // 0x33aa98: 0x80ce812  j           func_33A048
label_33aa9c:
    if (ctx->pc == 0x33AA9Cu) {
        ctx->pc = 0x33AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA98u;
        // 0x33aa9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AAA0u;
        goto label_33aaa0;
    }
    ctx->pc = 0x33AA98u;
    ctx->pc = 0x33AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AA98u;
    // 0x33aa9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33AA98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33AAA0u;
label_33aaa0:
    // 0x33aaa0: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_33aaa4:
    if (ctx->pc == 0x33AAA4u) {
        ctx->pc = 0x33AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAA0u;
        // 0x33aaa4: 0x8d020028  lw          $v0, 0x28($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AAA8u;
        goto label_33aaa8;
    }
    ctx->pc = 0x33AAA0u;
    {
        const bool branch_taken_0x33aaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aaa0) {
            ctx->pc = 0x33AAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AAA0u;
            // 0x33aaa4: 0x8d020028  lw          $v0, 0x28($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AB10u;
            goto label_33ab10;
        }
    }
    ctx->pc = 0x33AAA8u;
label_33aaa8:
    // 0x33aaa8: 0x8cca0004  lw          $t2, 0x4($a2)
    ctx->pc = 0x33aaa8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_33aaac:
    // 0x33aaac: 0x1940002c  blez        $t2, . + 4 + (0x2C << 2)
label_33aab0:
    if (ctx->pc == 0x33AAB0u) {
        ctx->pc = 0x33AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAACu;
        // 0x33aab0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AAB4u;
        goto label_33aab4;
    }
    ctx->pc = 0x33AAACu;
    {
        const bool branch_taken_0x33aaac = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x33AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAACu;
        // 0x33aab0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aaac) {
            ctx->pc = 0x33AB60u;
            goto label_33ab60;
        }
    }
    ctx->pc = 0x33AAB4u;
label_33aab4:
    // 0x33aab4: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x33aab4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33aab8:
    // 0x33aab8: 0x11200029  beqz        $t1, . + 4 + (0x29 << 2)
label_33aabc:
    if (ctx->pc == 0x33AABCu) {
        ctx->pc = 0x33AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAB8u;
        // 0x33aabc: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AAC0u;
        goto label_33aac0;
    }
    ctx->pc = 0x33AAB8u;
    {
        const bool branch_taken_0x33aab8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAB8u;
        // 0x33aabc: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aab8) {
            ctx->pc = 0x33AB60u;
            goto label_33ab60;
        }
    }
    ctx->pc = 0x33AAC0u;
label_33aac0:
    // 0x33aac0: 0x250b0008  addiu       $t3, $t0, 0x8
    ctx->pc = 0x33aac0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_33aac4:
    // 0x33aac4: 0x81020005  lb          $v0, 0x5($t0)
    ctx->pc = 0x33aac4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
label_33aac8:
    // 0x33aac8: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x33aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_33aacc:
    // 0x33aacc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33aaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33aad0:
    // 0x33aad0: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
label_33aad4:
    if (ctx->pc == 0x33AAD4u) {
        ctx->pc = 0x33AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAD0u;
        // 0x33aad4: 0x8c670010  lw          $a3, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AAD8u;
        goto label_33aad8;
    }
    ctx->pc = 0x33AAD0u;
    {
        const bool branch_taken_0x33aad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAD0u;
        // 0x33aad4: 0x8c670010  lw          $a3, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aad0) {
            ctx->pc = 0x33AB00u;
            goto label_33ab00;
        }
    }
    ctx->pc = 0x33AAD8u;
label_33aad8:
    // 0x33aad8: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_33aadc:
    if (ctx->pc == 0x33AADCu) {
        ctx->pc = 0x33AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAD8u;
        // 0x33aadc: 0x12a1021  addu        $v0, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AAE0u;
        goto label_33aae0;
    }
    ctx->pc = 0x33AAD8u;
    {
        const bool branch_taken_0x33aad8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAD8u;
        // 0x33aadc: 0x12a1021  addu        $v0, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aad8) {
            ctx->pc = 0x33AB00u;
            goto label_33ab00;
        }
    }
    ctx->pc = 0x33AAE0u;
label_33aae0:
    // 0x33aae0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x33aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_33aae4:
    // 0x33aae4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_33aae8:
    if (ctx->pc == 0x33AAE8u) {
        ctx->pc = 0x33AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAE4u;
        // 0x33aae8: 0x8d070014  lw          $a3, 0x14($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AAECu;
        goto label_33aaec;
    }
    ctx->pc = 0x33AAE4u;
    {
        const bool branch_taken_0x33aae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33aae4) {
            ctx->pc = 0x33AAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AAE4u;
            // 0x33aae8: 0x8d070014  lw          $a3, 0x14($t0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AB04u;
            goto label_33ab04;
        }
    }
    ctx->pc = 0x33AAECu;
label_33aaec:
    // 0x33aaec: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x33aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_33aaf0:
    // 0x33aaf0: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x33aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
label_33aaf4:
    // 0x33aaf4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x33aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_33aaf8:
    // 0x33aaf8: 0x10000019  b           . + 4 + (0x19 << 2)
label_33aafc:
    if (ctx->pc == 0x33AAFCu) {
        ctx->pc = 0x33AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAF8u;
        // 0x33aafc: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AB00u;
        goto label_33ab00;
    }
    ctx->pc = 0x33AAF8u;
    {
        const bool branch_taken_0x33aaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAF8u;
        // 0x33aafc: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aaf8) {
            ctx->pc = 0x33AB60u;
            goto label_33ab60;
        }
    }
    ctx->pc = 0x33AB00u;
label_33ab00:
    // 0x33ab00: 0x8d070014  lw          $a3, 0x14($t0)
    ctx->pc = 0x33ab00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_33ab04:
    // 0x33ab04: 0x54e0000a  bnel        $a3, $zero, . + 4 + (0xA << 2)
label_33ab08:
    if (ctx->pc == 0x33AB08u) {
        ctx->pc = 0x33AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB04u;
        // 0x33ab08: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AB0Cu;
        goto label_33ab0c;
    }
    ctx->pc = 0x33AB04u;
    {
        const bool branch_taken_0x33ab04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ab04) {
            ctx->pc = 0x33AB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AB04u;
            // 0x33ab08: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AB30u;
            goto label_33ab30;
        }
    }
    ctx->pc = 0x33AB0Cu;
label_33ab0c:
    // 0x33ab0c: 0x8d020028  lw          $v0, 0x28($t0)
    ctx->pc = 0x33ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_33ab10:
    // 0x33ab10: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_33ab14:
    if (ctx->pc == 0x33AB14u) {
        ctx->pc = 0x33AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB10u;
        // 0x33ab14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AB18u;
        goto label_33ab18;
    }
    ctx->pc = 0x33AB10u;
    {
        const bool branch_taken_0x33ab10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB10u;
        // 0x33ab14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab10) {
            ctx->pc = 0x33AB60u;
            goto label_33ab60;
        }
    }
    ctx->pc = 0x33AB18u;
label_33ab18:
    // 0x33ab18: 0x8d04002c  lw          $a0, 0x2C($t0)
    ctx->pc = 0x33ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_33ab1c:
    // 0x33ab1c: 0x40f809  jalr        $v0
label_33ab20:
    if (ctx->pc == 0x33AB20u) {
        ctx->pc = 0x33AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB1Cu;
        // 0x33ab20: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AB24u;
        goto label_33ab24;
    }
    ctx->pc = 0x33AB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33AB24u);
        ctx->pc = 0x33AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB1Cu;
        // 0x33ab20: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AB1Cu, 0x33AB24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33AB24u;
label_33ab24:
    // 0x33ab24: 0x1000000e  b           . + 4 + (0xE << 2)
label_33ab28:
    if (ctx->pc == 0x33AB28u) {
        ctx->pc = 0x33AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB24u;
        // 0x33ab28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AB2Cu;
        goto label_33ab2c;
    }
    ctx->pc = 0x33AB24u;
    {
        const bool branch_taken_0x33ab24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB24u;
        // 0x33ab28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab24) {
            ctx->pc = 0x33AB60u;
            goto label_33ab60;
        }
    }
    ctx->pc = 0x33AB2Cu;
label_33ab2c:
    // 0x33ab2c: 0x0  nop
    ctx->pc = 0x33ab2cu;
    // NOP
label_33ab30:
    // 0x33ab30: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x33ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_33ab34:
    // 0x33ab34: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x33ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_33ab38:
    // 0x33ab38: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x33ab38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_33ab3c:
    // 0x33ab3c: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x33ab3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_33ab40:
    // 0x33ab40: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x33ab40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33ab44:
    // 0x33ab44: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x33ab44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_33ab48:
    // 0x33ab48: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x33ab48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
label_33ab4c:
    // 0x33ab4c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x33ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_33ab50:
    // 0x33ab50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33ab54:
    // 0x33ab54: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x33ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_33ab58:
    // 0x33ab58: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x33ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_33ab5c:
    // 0x33ab5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33ab5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33ab60:
    // 0x33ab60: 0x3e00008  jr          $ra
label_33ab64:
    if (ctx->pc == 0x33AB64u) {
        ctx->pc = 0x33AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB60u;
        // 0x33ab64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AB68u;
        goto label_fallthrough_0x33ab60;
    }
    ctx->pc = 0x33AB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB60u;
        // 0x33ab64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33ab60:
    ctx->pc = 0x33AB68u;
}
