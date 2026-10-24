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

// Function: func_0037DC88
// Address: 0x37dc88 - 0x37e128
void func_0037DC88_0x37dc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037DC88_0x37dc88");
#endif

    switch (ctx->pc) {
        case 0x37dcbcu: goto label_37dcbc;
        case 0x37dce8u: goto label_37dce8;
        case 0x37dd18u: goto label_37dd18;
        case 0x37dd78u: goto label_37dd78;
        case 0x37ddc0u: goto label_37ddc0;
        case 0x37ddf0u: goto label_37ddf0;
        case 0x37de50u: goto label_37de50;
        case 0x37deb0u: goto label_37deb0;
        case 0x37df10u: goto label_37df10;
        case 0x37df44u: goto label_37df44;
        case 0x37df78u: goto label_37df78;
        case 0x37dfd8u: goto label_37dfd8;
        case 0x37e038u: goto label_37e038;
        case 0x37e088u: goto label_37e088;
        case 0x37e0bcu: goto label_37e0bc;
        case 0x37e0f8u: goto label_37e0f8;
        default: break;
    }

    ctx->pc = 0x37dc88u;

    // 0x37dc88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x37dc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x37dc8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37dc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37dc90: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x37dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x37dc94: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x37dc94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dc98: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x37dc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x37dc9c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x37dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x37dca0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x37dca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x37dca4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x37dca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x37dca8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x37dca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x37dcac: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x37dcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x37dcb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37dcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37dcb4: 0xc0e01b6  jal         func_3806D8
    ctx->pc = 0x37DCB4u;
    SET_GPR_U32(ctx, 31, 0x37DCBCu);
    ctx->pc = 0x37DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DCB4u;
    // 0x37dcb8: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3806D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3806D8u, 0x37DCB4u, 0x37DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DCBCu;
label_37dcbc:
    // 0x37dcbc: 0x8e930010  lw          $s3, 0x10($s4)
    ctx->pc = 0x37dcbcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x37dcc0: 0x126000a0  beqz        $s3, . + 4 + (0xA0 << 2)
    ctx->pc = 0x37DCC0u;
    {
        const bool branch_taken_0x37dcc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DCC0u;
        // 0x37dcc4: 0x26720014  addiu       $s2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dcc0) {
            ctx->pc = 0x37DF44u;
            goto label_37df44;
        }
    }
    ctx->pc = 0x37DCC8u;
    // 0x37dcc8: 0x8e700014  lw          $s0, 0x14($s3)
    ctx->pc = 0x37dcc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x37dccc: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x37dcccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x37dcd0: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x37dcd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x37dcd4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x37DCD4u;
    {
        const bool branch_taken_0x37dcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DCD4u;
        // 0x37dcd8: 0x26750008  addiu       $s5, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dcd4) {
            ctx->pc = 0x37DD4Cu;
            goto label_37dd4c;
        }
    }
    ctx->pc = 0x37DCDCu;
    // 0x37dcdc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x37dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x37dce0: 0x24564030  addiu       $s6, $v0, 0x4030
    ctx->pc = 0x37dce0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x37dce4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x37dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37dce8:
    // 0x37dce8: 0x24a4fff0  addiu       $a0, $a1, -0x10
    ctx->pc = 0x37dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x37dcec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37dcf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37dcf4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x37DCF4u;
    {
        const bool branch_taken_0x37dcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DCF4u;
        // 0x37dcf8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dcf4) {
            ctx->pc = 0x37DD3Cu;
            goto label_37dd3c;
        }
    }
    ctx->pc = 0x37DCFCu;
    // 0x37dcfc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x37dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37dd00: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37dd04: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37dd04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37dd08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DD08u;
    {
        const bool branch_taken_0x37dd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD08u;
        // 0x37dd0c: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dd08) {
            ctx->pc = 0x37DD20u;
            goto label_37dd20;
        }
    }
    ctx->pc = 0x37DD10u;
    // 0x37dd10: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37DD10u;
    SET_GPR_U32(ctx, 31, 0x37DD18u);
    ctx->pc = 0x37DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DD10u;
    // 0x37dd14: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37DD10u, 0x37DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DD18u;
label_37dd18:
    // 0x37dd18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37DD18u;
    {
        const bool branch_taken_0x37dd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD18u;
        // 0x37dd1c: 0x211102b  sltu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dd18) {
            ctx->pc = 0x37DD44u;
            goto label_37dd44;
        }
    }
    ctx->pc = 0x37DD20u;
label_37dd20:
    // 0x37dd20: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37dd24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37dd28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37dd2c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x37dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x37dd30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37dd34: 0xaca3fff0  sw          $v1, -0x10($a1)
    ctx->pc = 0x37dd34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 3));
    // 0x37dd38: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x37dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_37dd3c:
    // 0x37dd3c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x37dd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x37dd40: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x37dd40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_37dd44:
    // 0x37dd44: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x37DD44u;
    {
        const bool branch_taken_0x37dd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37dd44) {
            ctx->pc = 0x37DD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DD44u;
            // 0x37dd48: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37dce8;
        }
    }
    ctx->pc = 0x37DD4Cu;
label_37dd4c:
    // 0x37dd4c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x37dd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x37dd50: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x37dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x37dd54: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37dd58: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x37dd58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x37dd5c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x37DD5Cu;
    {
        const bool branch_taken_0x37dd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD5Cu;
        // 0x37dd60: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dd5c) {
            ctx->pc = 0x37DDA0u;
            goto label_37dda0;
        }
    }
    ctx->pc = 0x37DD64u;
    // 0x37dd64: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x37dd64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37dd68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DD68u;
    {
        const bool branch_taken_0x37dd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD68u;
        // 0x37dd6c: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dd68) {
            ctx->pc = 0x37DD80u;
            goto label_37dd80;
        }
    }
    ctx->pc = 0x37DD70u;
    // 0x37dd70: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37DD70u;
    SET_GPR_U32(ctx, 31, 0x37DD78u);
    ctx->pc = 0x37DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DD70u;
    // 0x37dd74: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37DD70u, 0x37DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DD78u;
label_37dd78:
    // 0x37dd78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37DD78u;
    {
        const bool branch_taken_0x37dd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD78u;
        // 0x37dd7c: 0x8eb10004  lw          $s1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dd78) {
            ctx->pc = 0x37DDA4u;
            goto label_37dda4;
        }
    }
    ctx->pc = 0x37DD80u;
label_37dd80:
    // 0x37dd80: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x37dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x37dd84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37dd88: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x37dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x37dd8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37dd90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37dd94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x37dd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37dd98: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x37dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x37dd9c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37dd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37dda0:
    // 0x37dda0: 0x8eb10004  lw          $s1, 0x4($s5)
    ctx->pc = 0x37dda0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_37dda4:
    // 0x37dda4: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x37dda4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x37dda8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x37dda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x37ddac: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x37DDACu;
    {
        const bool branch_taken_0x37ddac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDACu;
        // 0x37ddb0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ddac) {
            ctx->pc = 0x37DE24u;
            goto label_37de24;
        }
    }
    ctx->pc = 0x37DDB4u;
    // 0x37ddb4: 0x24524030  addiu       $s2, $v0, 0x4030
    ctx->pc = 0x37ddb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x37ddb8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x37ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37ddbc: 0x0  nop
    ctx->pc = 0x37ddbcu;
    // NOP
label_37ddc0:
    // 0x37ddc0: 0x24a4fff0  addiu       $a0, $a1, -0x10
    ctx->pc = 0x37ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x37ddc4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37ddc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37ddcc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x37DDCCu;
    {
        const bool branch_taken_0x37ddcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDCCu;
        // 0x37ddd0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ddcc) {
            ctx->pc = 0x37DE14u;
            goto label_37de14;
        }
    }
    ctx->pc = 0x37DDD4u;
    // 0x37ddd4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x37ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37ddd8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37dddc: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37dddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37dde0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DDE0u;
    {
        const bool branch_taken_0x37dde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDE0u;
        // 0x37dde4: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dde0) {
            ctx->pc = 0x37DDF8u;
            goto label_37ddf8;
        }
    }
    ctx->pc = 0x37DDE8u;
    // 0x37dde8: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37DDE8u;
    SET_GPR_U32(ctx, 31, 0x37DDF0u);
    ctx->pc = 0x37DDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DDE8u;
    // 0x37ddec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37DDE8u, 0x37DDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DDF0u;
label_37ddf0:
    // 0x37ddf0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37DDF0u;
    {
        const bool branch_taken_0x37ddf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDF0u;
        // 0x37ddf4: 0x211102b  sltu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ddf0) {
            ctx->pc = 0x37DE1Cu;
            goto label_37de1c;
        }
    }
    ctx->pc = 0x37DDF8u;
label_37ddf8:
    // 0x37ddf8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37ddfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37de00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37de00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37de04: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x37de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x37de08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37de08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37de0c: 0xaca3fff0  sw          $v1, -0x10($a1)
    ctx->pc = 0x37de0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 3));
    // 0x37de10: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x37de10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_37de14:
    // 0x37de14: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x37de14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x37de18: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x37de18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_37de1c:
    // 0x37de1c: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x37DE1Cu;
    {
        const bool branch_taken_0x37de1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37de1c) {
            ctx->pc = 0x37DE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DE1Cu;
            // 0x37de20: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ddc0;
        }
    }
    ctx->pc = 0x37DE24u;
label_37de24:
    // 0x37de24: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x37de24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x37de28: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x37de28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x37de2c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x37de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37de30: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x37de30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x37de34: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x37DE34u;
    {
        const bool branch_taken_0x37de34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE34u;
        // 0x37de38: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37de34) {
            ctx->pc = 0x37DE7Cu;
            goto label_37de7c;
        }
    }
    ctx->pc = 0x37DE3Cu;
    // 0x37de3c: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x37de3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37de40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DE40u;
    {
        const bool branch_taken_0x37de40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE40u;
        // 0x37de44: 0x24620007  addiu       $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37de40) {
            ctx->pc = 0x37DE58u;
            goto label_37de58;
        }
    }
    ctx->pc = 0x37DE48u;
    // 0x37de48: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37DE48u;
    SET_GPR_U32(ctx, 31, 0x37DE50u);
    ctx->pc = 0x37DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DE48u;
    // 0x37de4c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37DE48u, 0x37DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DE50u;
label_37de50:
    // 0x37de50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37DE50u;
    {
        const bool branch_taken_0x37de50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE50u;
        // 0x37de54: 0x8e660004  lw          $a2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37de50) {
            ctx->pc = 0x37DE80u;
            goto label_37de80;
        }
    }
    ctx->pc = 0x37DE58u;
label_37de58:
    // 0x37de58: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37de58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37de5c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37de60: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37de60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37de64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37de64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37de68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37de68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37de6c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37de70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37de74: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x37de74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x37de78: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37de78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37de7c:
    // 0x37de7c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x37de7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_37de80:
    // 0x37de80: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37de80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37de84: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37de88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37de88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37de8c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37DE8Cu;
    {
        const bool branch_taken_0x37de8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE8Cu;
        // 0x37de90: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37de8c) {
            ctx->pc = 0x37DEDCu;
            goto label_37dedc;
        }
    }
    ctx->pc = 0x37DE94u;
    // 0x37de94: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37de94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37de98: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37de98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37de9c: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37de9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37dea0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DEA0u;
    {
        const bool branch_taken_0x37dea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DEA0u;
        // 0x37dea4: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dea0) {
            ctx->pc = 0x37DEB8u;
            goto label_37deb8;
        }
    }
    ctx->pc = 0x37DEA8u;
    // 0x37dea8: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37DEA8u;
    SET_GPR_U32(ctx, 31, 0x37DEB0u);
    ctx->pc = 0x37DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DEA8u;
    // 0x37deac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37DEA8u, 0x37DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DEB0u;
label_37deb0:
    // 0x37deb0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37DEB0u;
    {
        const bool branch_taken_0x37deb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DEB0u;
        // 0x37deb4: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37deb0) {
            ctx->pc = 0x37DEE0u;
            goto label_37dee0;
        }
    }
    ctx->pc = 0x37DEB8u;
label_37deb8:
    // 0x37deb8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37debc: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37debcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37dec0: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37dec4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37dec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37decc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37deccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37ded0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ded4: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37ded4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37ded8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37ded8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37dedc:
    // 0x37dedc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x37dedcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37dee0:
    // 0x37dee0: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37dee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37dee4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37dee8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37deec: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37DEECu;
    {
        const bool branch_taken_0x37deec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DEECu;
        // 0x37def0: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37deec) {
            ctx->pc = 0x37DF3Cu;
            goto label_37df3c;
        }
    }
    ctx->pc = 0x37DEF4u;
    // 0x37def4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37def4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37def8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37defc: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37defcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37df00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DF00u;
    {
        const bool branch_taken_0x37df00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF00u;
        // 0x37df04: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37df00) {
            ctx->pc = 0x37DF18u;
            goto label_37df18;
        }
    }
    ctx->pc = 0x37DF08u;
    // 0x37df08: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37DF08u;
    SET_GPR_U32(ctx, 31, 0x37DF10u);
    ctx->pc = 0x37DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DF08u;
    // 0x37df0c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37DF08u, 0x37DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DF10u;
label_37df10:
    // 0x37df10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37DF10u;
    {
        const bool branch_taken_0x37df10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37df10) {
            ctx->pc = 0x37DF3Cu;
            goto label_37df3c;
        }
    }
    ctx->pc = 0x37DF18u;
label_37df18:
    // 0x37df18: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37df18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37df1c: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37df20: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37df20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37df24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37df28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37df28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37df2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37df30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37df30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37df34: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37df34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37df38: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37df38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37df3c:
    // 0x37df3c: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x37DF3Cu;
    SET_GPR_U32(ctx, 31, 0x37DF44u);
    ctx->pc = 0x37DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DF3Cu;
    // 0x37df40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x37DF3Cu, 0x37DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DF44u;
label_37df44:
    // 0x37df44: 0x8e860044  lw          $a2, 0x44($s4)
    ctx->pc = 0x37df44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x37df48: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37df48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37df4c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37df50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37df54: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37DF54u;
    {
        const bool branch_taken_0x37df54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF54u;
        // 0x37df58: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37df54) {
            ctx->pc = 0x37DFA4u;
            goto label_37dfa4;
        }
    }
    ctx->pc = 0x37DF5Cu;
    // 0x37df5c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37df60: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37df60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37df64: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37df64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37df68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DF68u;
    {
        const bool branch_taken_0x37df68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF68u;
        // 0x37df6c: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37df68) {
            ctx->pc = 0x37DF80u;
            goto label_37df80;
        }
    }
    ctx->pc = 0x37DF70u;
    // 0x37df70: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37DF70u;
    SET_GPR_U32(ctx, 31, 0x37DF78u);
    ctx->pc = 0x37DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DF70u;
    // 0x37df74: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37DF70u, 0x37DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DF78u;
label_37df78:
    // 0x37df78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37DF78u;
    {
        const bool branch_taken_0x37df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF78u;
        // 0x37df7c: 0x8e860040  lw          $a2, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37df78) {
            ctx->pc = 0x37DFA8u;
            goto label_37dfa8;
        }
    }
    ctx->pc = 0x37DF80u;
label_37df80:
    // 0x37df80: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37df80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37df84: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37df84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37df88: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37df88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37df8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37df90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37df90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37df94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37df94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37df98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37df98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37df9c: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37dfa0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37dfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37dfa4:
    // 0x37dfa4: 0x8e860040  lw          $a2, 0x40($s4)
    ctx->pc = 0x37dfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_37dfa8:
    // 0x37dfa8: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37dfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37dfac: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37dfb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37dfb4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37DFB4u;
    {
        const bool branch_taken_0x37dfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DFB4u;
        // 0x37dfb8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dfb4) {
            ctx->pc = 0x37E004u;
            goto label_37e004;
        }
    }
    ctx->pc = 0x37DFBCu;
    // 0x37dfbc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37dfc0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37dfc4: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37dfc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37dfc8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DFC8u;
    {
        const bool branch_taken_0x37dfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DFC8u;
        // 0x37dfcc: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dfc8) {
            ctx->pc = 0x37DFE0u;
            goto label_37dfe0;
        }
    }
    ctx->pc = 0x37DFD0u;
    // 0x37dfd0: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37DFD0u;
    SET_GPR_U32(ctx, 31, 0x37DFD8u);
    ctx->pc = 0x37DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DFD0u;
    // 0x37dfd4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37DFD0u, 0x37DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DFD8u;
label_37dfd8:
    // 0x37dfd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37DFD8u;
    {
        const bool branch_taken_0x37dfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DFD8u;
        // 0x37dfdc: 0x8e86003c  lw          $a2, 0x3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dfd8) {
            ctx->pc = 0x37E008u;
            goto label_37e008;
        }
    }
    ctx->pc = 0x37DFE0u;
label_37dfe0:
    // 0x37dfe0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37dfe4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37dfe8: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37dfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37dfec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37dff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37dff4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37dff8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37dffc: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37dffcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37e000: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37e000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37e004:
    // 0x37e004: 0x8e86003c  lw          $a2, 0x3C($s4)
    ctx->pc = 0x37e004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_37e008:
    // 0x37e008: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37e008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37e00c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37e010: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37e014: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37E014u;
    {
        const bool branch_taken_0x37e014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E014u;
        // 0x37e018: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e014) {
            ctx->pc = 0x37E064u;
            goto label_37e064;
        }
    }
    ctx->pc = 0x37E01Cu;
    // 0x37e01c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37e020: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37e020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37e024: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37e024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37e028: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37E028u;
    {
        const bool branch_taken_0x37e028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E028u;
        // 0x37e02c: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e028) {
            ctx->pc = 0x37E040u;
            goto label_37e040;
        }
    }
    ctx->pc = 0x37E030u;
    // 0x37e030: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37E030u;
    SET_GPR_U32(ctx, 31, 0x37E038u);
    ctx->pc = 0x37E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E030u;
    // 0x37e034: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37E030u, 0x37E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E038u;
label_37e038:
    // 0x37e038: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37E038u;
    {
        const bool branch_taken_0x37e038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E038u;
        // 0x37e03c: 0x32f20001  andi        $s2, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e038) {
            ctx->pc = 0x37E068u;
            goto label_37e068;
        }
    }
    ctx->pc = 0x37E040u;
label_37e040:
    // 0x37e040: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37e040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37e044: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37e044u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37e048: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37e048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37e04c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37e050: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37e050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37e054: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37e058: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37e058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37e05c: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37e060: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37e060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37e064:
    // 0x37e064: 0x32f20001  andi        $s2, $s7, 0x1
    ctx->pc = 0x37e064u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_37e068:
    // 0x37e068: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x37e068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x37e06c: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x37E06Cu;
    {
        const bool branch_taken_0x37e06c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E06Cu;
        // 0x37e070: 0x2690003c  addiu       $s0, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e06c) {
            ctx->pc = 0x37E0E8u;
            goto label_37e0e8;
        }
    }
    ctx->pc = 0x37E074u;
    // 0x37e074: 0x1230001c  beq         $s1, $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x37E074u;
    {
        const bool branch_taken_0x37e074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x37E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E074u;
        // 0x37e078: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e074) {
            ctx->pc = 0x37E0E8u;
            goto label_37e0e8;
        }
    }
    ctx->pc = 0x37E07Cu;
    // 0x37e07c: 0x24534030  addiu       $s3, $v0, 0x4030
    ctx->pc = 0x37e07cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16432));
    // 0x37e080: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x37e080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x37e084: 0x0  nop
    ctx->pc = 0x37e084u;
    // NOP
label_37e088:
    // 0x37e088: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x37e088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37e08c: 0x24a4fff0  addiu       $a0, $a1, -0x10
    ctx->pc = 0x37e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x37e090: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37e090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37e094: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37e094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37e098: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x37E098u;
    {
        const bool branch_taken_0x37e098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E098u;
        // 0x37e09c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e098) {
            ctx->pc = 0x37E0E0u;
            goto label_37e0e0;
        }
    }
    ctx->pc = 0x37E0A0u;
    // 0x37e0a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x37e0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x37e0a4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37e0a8: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37e0a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37e0ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37E0ACu;
    {
        const bool branch_taken_0x37e0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0ACu;
        // 0x37e0b0: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e0ac) {
            ctx->pc = 0x37E0C4u;
            goto label_37e0c4;
        }
    }
    ctx->pc = 0x37E0B4u;
    // 0x37e0b4: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37E0B4u;
    SET_GPR_U32(ctx, 31, 0x37E0BCu);
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37E0B4u, 0x37E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E0BCu;
label_37e0bc:
    // 0x37e0bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37E0BCu;
    {
        const bool branch_taken_0x37e0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e0bc) {
            ctx->pc = 0x37E0E0u;
            goto label_37e0e0;
        }
    }
    ctx->pc = 0x37E0C4u;
label_37e0c4:
    // 0x37e0c4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37e0c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37e0cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37e0d0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x37e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x37e0d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37e0d8: 0xaca3fff0  sw          $v1, -0x10($a1)
    ctx->pc = 0x37e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 3));
    // 0x37e0dc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x37e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_37e0e0:
    // 0x37e0e0: 0x1630ffe9  bne         $s1, $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x37E0E0u;
    {
        const bool branch_taken_0x37e0e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x37E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0E0u;
        // 0x37e0e4: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e0e0) {
            ctx->pc = 0x37E088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37e088;
        }
    }
    ctx->pc = 0x37E0E8u;
label_37e0e8:
    // 0x37e0e8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E0E8u;
    {
        const bool branch_taken_0x37e0e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0E8u;
        // 0x37e0ec: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e0e8) {
            ctx->pc = 0x37E0FCu;
            goto label_37e0fc;
        }
    }
    ctx->pc = 0x37E0F0u;
    // 0x37e0f0: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x37E0F0u;
    SET_GPR_U32(ctx, 31, 0x37E0F8u);
    ctx->pc = 0x37E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E0F0u;
    // 0x37e0f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x37E0F0u, 0x37E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E0F8u;
label_37e0f8:
    // 0x37e0f8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x37e0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37e0fc:
    // 0x37e0fc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x37e0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37e100: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x37e100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37e104: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x37e104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37e108: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37e108u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37e10c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x37e10cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37e110: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x37e110u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37e114: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x37e114u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37e118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37e118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37e11c: 0x3e00008  jr          $ra
    ctx->pc = 0x37E11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E11Cu;
        // 0x37e120: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E124u;
    // 0x37e124: 0x0  nop
    ctx->pc = 0x37e124u;
    // NOP
    ctx->pc = 0x37e128u;
}
