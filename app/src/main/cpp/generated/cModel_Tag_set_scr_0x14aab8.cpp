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

// Function: cModel_Tag_set_scr
// Address: 0x14aab8 - 0x14ac90
void cModel_Tag_set_scr_0x14aab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_Tag_set_scr_0x14aab8");
#endif

    switch (ctx->pc) {
        case 0x14ab00u: goto label_14ab00;
        case 0x14ab0cu: goto label_14ab0c;
        case 0x14ab20u: goto label_14ab20;
        case 0x14ab28u: goto label_14ab28;
        case 0x14ab4cu: goto label_14ab4c;
        case 0x14ab5cu: goto label_14ab5c;
        case 0x14ab70u: goto label_14ab70;
        case 0x14abc0u: goto label_14abc0;
        case 0x14abdcu: goto label_14abdc;
        case 0x14abe8u: goto label_14abe8;
        case 0x14abfcu: goto label_14abfc;
        case 0x14ac18u: goto label_14ac18;
        case 0x14ac30u: goto label_14ac30;
        case 0x14ac50u: goto label_14ac50;
        case 0x14ac5cu: goto label_14ac5c;
        default: break;
    }

    ctx->pc = 0x14aab8u;

    // 0x14aab8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14aab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14aabc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x14aac0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x14aac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x14aac4: 0x8c4376b0  lw          $v1, 0x76B0($v0)
    ctx->pc = 0x14aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7476B0u));
    // 0x14aac8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14aac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aacc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x14aaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x14aad0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x14aad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x14aad4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14aad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aad8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x14aad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x14aadc: 0x30750001  andi        $s5, $v1, 0x1
    ctx->pc = 0x14aadcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14aae0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x14aae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x14aae4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x14aae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x14aae8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14aae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14aaec: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x14aaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x14aaf0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x14aaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x14aaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14aaf8: 0xc05343a  jal         func_14D0E8
    ctx->pc = 0x14AAF8u;
    SET_GPR_U32(ctx, 31, 0x14AB00u);
    ctx->pc = 0x14AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAF8u;
    // 0x14aafc: 0xc0b82d  daddu       $s7, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D0E8u, 0x14AAF8u, 0x14AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB00u;
label_14ab00:
    // 0x14ab00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ab00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab04: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14AB04u;
    SET_GPR_U32(ctx, 31, 0x14AB0Cu);
    ctx->pc = 0x14AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB04u;
    // 0x14ab08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14AB04u, 0x14AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB0Cu;
label_14ab0c:
    // 0x14ab0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14ab0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab10: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x14AB10u;
    {
        const bool branch_taken_0x14ab10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB10u;
        // 0x14ab14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab10) {
            ctx->pc = 0x14AB3Cu;
            goto label_14ab3c;
        }
    }
    ctx->pc = 0x14AB18u;
    // 0x14ab18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ab18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab1c: 0x0  nop
    ctx->pc = 0x14ab1cu;
    // NOP
label_14ab20:
    // 0x14ab20: 0xc054ec0  jal         func_153B00
    ctx->pc = 0x14AB20u;
    SET_GPR_U32(ctx, 31, 0x14AB28u);
    ctx->pc = 0x14AB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB20u;
    // 0x14ab24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153B00u, 0x14AB20u, 0x14AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB28u;
label_14ab28:
    // 0x14ab28: 0x8e100404  lw          $s0, 0x404($s0)
    ctx->pc = 0x14ab28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x14ab2c: 0x0  nop
    ctx->pc = 0x14ab2cu;
    // NOP
    // 0x14ab30: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14AB30u;
    {
        const bool branch_taken_0x14ab30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ab30) {
            ctx->pc = 0x14AB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AB30u;
            // 0x14ab34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ab20;
        }
    }
    ctx->pc = 0x14AB38u;
    // 0x14ab38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14ab3c:
    // 0x14ab3c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x14ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x14ab40: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x14ab40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab44: 0xc0556fa  jal         func_155BE8
    ctx->pc = 0x14AB44u;
    SET_GPR_U32(ctx, 31, 0x14AB4Cu);
    ctx->pc = 0x14AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB44u;
    // 0x14ab48: 0x11b400  sll         $s6, $s1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155BE8u, 0x14AB44u, 0x14AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB4Cu;
label_14ab4c:
    // 0x14ab4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14ab4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ab50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab54: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14AB54u;
    SET_GPR_U32(ctx, 31, 0x14AB5Cu);
    ctx->pc = 0x14AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB54u;
    // 0x14ab58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14AB54u, 0x14AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB5Cu;
label_14ab5c:
    // 0x14ab5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14ab5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab60: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
    ctx->pc = 0x14AB60u;
    {
        const bool branch_taken_0x14ab60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB60u;
        // 0x14ab64: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab60) {
            ctx->pc = 0x14AC3Cu;
            goto label_14ac3c;
        }
    }
    ctx->pc = 0x14AB68u;
    // 0x14ab68: 0x3c1e8000  lui         $fp, 0x8000
    ctx->pc = 0x14ab68u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32768 << 16));
    // 0x14ab6c: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x14ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_14ab70:
    // 0x14ab70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14ab70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14ab74: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x14AB74u;
    {
        const bool branch_taken_0x14ab74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ab74) {
            ctx->pc = 0x14AB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AB74u;
            // 0x14ab78: 0x8e310404  lw          $s1, 0x404($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AC34u;
            goto label_14ac34;
        }
    }
    ctx->pc = 0x14AB7Cu;
    // 0x14ab7c: 0x8e440250  lw          $a0, 0x250($s2)
    ctx->pc = 0x14ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x14ab80: 0x30820400  andi        $v0, $a0, 0x400
    ctx->pc = 0x14ab80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x14ab84: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14AB84u;
    {
        const bool branch_taken_0x14ab84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB84u;
        // 0x14ab88: 0x30820080  andi        $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab84) {
            ctx->pc = 0x14ABACu;
            goto label_14abac;
        }
    }
    ctx->pc = 0x14AB8Cu;
    // 0x14ab8c: 0x8e230414  lw          $v1, 0x414($s1)
    ctx->pc = 0x14ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1044)));
    // 0x14ab90: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x14ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x14ab94: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x14ab98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14ab98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14ab9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14ab9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14aba0: 0x56e20024  bnel        $s7, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14ABA0u;
    {
        const bool branch_taken_0x14aba0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x14aba0) {
            ctx->pc = 0x14ABA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ABA0u;
            // 0x14aba4: 0x8e310404  lw          $s1, 0x404($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AC34u;
            goto label_14ac34;
        }
    }
    ctx->pc = 0x14ABA8u;
    // 0x14aba8: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x14aba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_14abac:
    // 0x14abac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14ABACu;
    {
        const bool branch_taken_0x14abac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14abac) {
            ctx->pc = 0x14ABB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ABACu;
            // 0x14abb0: 0x8e420250  lw          $v0, 0x250($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14ABC4u;
            goto label_14abc4;
        }
    }
    ctx->pc = 0x14ABB4u;
    // 0x14abb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14abb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abb8: 0xc052d34  jal         func_14B4D0
    ctx->pc = 0x14ABB8u;
    SET_GPR_U32(ctx, 31, 0x14ABC0u);
    ctx->pc = 0x14ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ABB8u;
    // 0x14abbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4D0u, 0x14ABB8u, 0x14ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ABC0u;
label_14abc0:
    // 0x14abc0: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x14abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_14abc4:
    // 0x14abc4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x14abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x14abc8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14abc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14abcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14ABCCu;
    {
        const bool branch_taken_0x14abcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABCCu;
        // 0x14abd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abcc) {
            ctx->pc = 0x14ABDCu;
            goto label_14abdc;
        }
    }
    ctx->pc = 0x14ABD4u;
    // 0x14abd4: 0xc052d76  jal         func_14B5D8
    ctx->pc = 0x14ABD4u;
    SET_GPR_U32(ctx, 31, 0x14ABDCu);
    ctx->pc = 0x14ABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ABD4u;
    // 0x14abd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B5D8u, 0x14ABD4u, 0x14ABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ABDCu;
label_14abdc:
    // 0x14abdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14abdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abe0: 0xc052fbe  jal         func_14BEF8
    ctx->pc = 0x14ABE0u;
    SET_GPR_U32(ctx, 31, 0x14ABE8u);
    ctx->pc = 0x14ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ABE0u;
    // 0x14abe4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BEF8u, 0x14ABE0u, 0x14ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ABE8u;
label_14abe8:
    // 0x14abe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14abe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14abecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14abf0: 0x21e2825  or          $a1, $s0, $fp
    ctx->pc = 0x14abf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 30));
    // 0x14abf4: 0xc0556ba  jal         func_155AE8
    ctx->pc = 0x14ABF4u;
    SET_GPR_U32(ctx, 31, 0x14ABFCu);
    ctx->pc = 0x14ABF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ABF4u;
    // 0x14abf8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155AE8u, 0x14ABF4u, 0x14ABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ABFCu;
label_14abfc:
    // 0x14abfc: 0x52900007  beql        $s4, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14ABFCu;
    {
        const bool branch_taken_0x14abfc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        if (branch_taken_0x14abfc) {
            ctx->pc = 0x14AC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14ABFCu;
            // 0x14ac00: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AC1Cu;
            goto label_14ac1c;
        }
    }
    ctx->pc = 0x14AC04u;
    // 0x14ac04: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AC04u;
    {
        const bool branch_taken_0x14ac04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC04u;
        // 0x14ac08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac04) {
            ctx->pc = 0x14AC18u;
            goto label_14ac18;
        }
    }
    ctx->pc = 0x14AC0Cu;
    // 0x14ac0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14ac0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac10: 0xc0556ba  jal         func_155AE8
    ctx->pc = 0x14AC10u;
    SET_GPR_U32(ctx, 31, 0x14AC18u);
    ctx->pc = 0x14AC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC10u;
    // 0x14ac14: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155AE8u, 0x14AC10u, 0x14AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC18u;
label_14ac18:
    // 0x14ac18: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x14ac18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14ac1c:
    // 0x14ac1c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x14ac1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ac20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14ac24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac28: 0xc052e04  jal         func_14B810
    ctx->pc = 0x14AC28u;
    SET_GPR_U32(ctx, 31, 0x14AC30u);
    ctx->pc = 0x14AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC28u;
    // 0x14ac2c: 0x163403  sra         $a2, $s6, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B810u, 0x14AC28u, 0x14AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC30u;
label_14ac30:
    // 0x14ac30: 0x8e310404  lw          $s1, 0x404($s1)
    ctx->pc = 0x14ac30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1028)));
label_14ac34:
    // 0x14ac34: 0x5620ffce  bnel        $s1, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x14AC34u;
    {
        const bool branch_taken_0x14ac34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ac34) {
            ctx->pc = 0x14AC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AC34u;
            // 0x14ac38: 0x8e220380  lw          $v0, 0x380($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ab70;
        }
    }
    ctx->pc = 0x14AC3Cu;
label_14ac3c:
    // 0x14ac3c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AC3Cu;
    {
        const bool branch_taken_0x14ac3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC3Cu;
        // 0x14ac40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ac3c) {
            ctx->pc = 0x14AC50u;
            goto label_14ac50;
        }
    }
    ctx->pc = 0x14AC44u;
    // 0x14ac44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14ac44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac48: 0xc0556ba  jal         func_155AE8
    ctx->pc = 0x14AC48u;
    SET_GPR_U32(ctx, 31, 0x14AC50u);
    ctx->pc = 0x14AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC48u;
    // 0x14ac4c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155AE8u, 0x14AC48u, 0x14AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC50u;
label_14ac50:
    // 0x14ac50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14ac50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ac54: 0xc0531ae  jal         func_14C6B8
    ctx->pc = 0x14AC54u;
    SET_GPR_U32(ctx, 31, 0x14AC5Cu);
    ctx->pc = 0x14AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC54u;
    // 0x14ac58: 0x162c03  sra         $a1, $s6, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C6B8u, 0x14AC54u, 0x14AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC5Cu;
label_14ac5c:
    // 0x14ac5c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x14ac5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14ac60: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x14ac60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14ac64: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x14ac64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14ac68: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x14ac68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ac6c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14ac6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ac70: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x14ac70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ac74: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x14ac74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ac78: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x14ac78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ac7c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x14ac7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ac80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ac80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ac84: 0x3e00008  jr          $ra
    ctx->pc = 0x14AC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC84u;
        // 0x14ac88: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AC8Cu;
    // 0x14ac8c: 0x0  nop
    ctx->pc = 0x14ac8cu;
    // NOP
    ctx->pc = 0x14ac90u;
}
