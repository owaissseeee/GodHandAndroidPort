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

// Function: func_00288DA8
// Address: 0x288da8 - 0x288f00
void func_00288DA8_0x288da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00288DA8_0x288da8");
#endif

    switch (ctx->pc) {
        case 0x288e3cu: goto label_288e3c;
        case 0x288e4cu: goto label_288e4c;
        case 0x288e60u: goto label_288e60;
        case 0x288e78u: goto label_288e78;
        case 0x288ec4u: goto label_288ec4;
        case 0x288ee8u: goto label_288ee8;
        default: break;
    }

    ctx->pc = 0x288da8u;

    // 0x288da8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x288da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x288dac: 0x240202a2  addiu       $v0, $zero, 0x2A2
    ctx->pc = 0x288dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
    // 0x288db0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x288db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x288db4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x288db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x288db8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x288db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288dbc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x288dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x288dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288dc4: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x288dc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x288dc8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288DC8u;
    {
        const bool branch_taken_0x288dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x288DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DC8u;
        // 0x288dcc: 0x240202a3  addiu       $v0, $zero, 0x2A3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288dc8) {
            ctx->pc = 0x288DD8u;
            goto label_288dd8;
        }
    }
    ctx->pc = 0x288DD0u;
    // 0x288dd0: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x288DD0u;
    {
        const bool branch_taken_0x288dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x288dd0) {
            ctx->pc = 0x288DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288DD0u;
            // 0x288dd4: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288E04u;
            goto label_288e04;
        }
    }
    ctx->pc = 0x288DD8u;
label_288dd8:
    // 0x288dd8: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x288dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x288ddc: 0x240202a3  addiu       $v0, $zero, 0x2A3
    ctx->pc = 0x288ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
    // 0x288de0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x288DE0u;
    {
        const bool branch_taken_0x288de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x288DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DE0u;
        // 0x288de4: 0x286202a4  slti        $v0, $v1, 0x2A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)676) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288de0) {
            ctx->pc = 0x288E2Cu;
            goto label_288e2c;
        }
    }
    ctx->pc = 0x288DE8u;
    // 0x288de8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x288DE8u;
    {
        const bool branch_taken_0x288de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DE8u;
        // 0x288dec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288de8) {
            ctx->pc = 0x288E30u;
            goto label_288e30;
        }
    }
    ctx->pc = 0x288DF0u;
    // 0x288df0: 0x240202a4  addiu       $v0, $zero, 0x2A4
    ctx->pc = 0x288df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
    // 0x288df4: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x288DF4u;
    {
        const bool branch_taken_0x288df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x288df4) {
            ctx->pc = 0x288DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288DF4u;
            // 0x288df8: 0x962402fe  lhu         $a0, 0x2FE($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288E34u;
            goto label_288e34;
        }
    }
    ctx->pc = 0x288DFCu;
    // 0x288dfc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x288DFCu;
    {
        const bool branch_taken_0x288dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288DFCu;
        // 0x288e00: 0x24120032  addiu       $s2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288dfc) {
            ctx->pc = 0x288E30u;
            goto label_288e30;
        }
    }
    ctx->pc = 0x288E04u;
label_288e04:
    // 0x288e04: 0x240202a6  addiu       $v0, $zero, 0x2A6
    ctx->pc = 0x288e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 678));
    // 0x288e08: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288E08u;
    {
        const bool branch_taken_0x288e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x288E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E08u;
        // 0x288e0c: 0x286202a7  slti        $v0, $v1, 0x2A7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)679) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e08) {
            ctx->pc = 0x288E2Cu;
            goto label_288e2c;
        }
    }
    ctx->pc = 0x288E10u;
    // 0x288e10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288E10u;
    {
        const bool branch_taken_0x288e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E10u;
        // 0x288e14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e10) {
            ctx->pc = 0x288E30u;
            goto label_288e30;
        }
    }
    ctx->pc = 0x288E18u;
    // 0x288e18: 0x240202a7  addiu       $v0, $zero, 0x2A7
    ctx->pc = 0x288e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
    // 0x288e1c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288E1Cu;
    {
        const bool branch_taken_0x288e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x288e1c) {
            ctx->pc = 0x288E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288E1Cu;
            // 0x288e20: 0x24120032  addiu       $s2, $zero, 0x32 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288E30u;
            goto label_288e30;
        }
    }
    ctx->pc = 0x288E24u;
    // 0x288e24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x288E24u;
    {
        const bool branch_taken_0x288e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E24u;
        // 0x288e28: 0x962402fe  lhu         $a0, 0x2FE($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e24) {
            ctx->pc = 0x288E34u;
            goto label_288e34;
        }
    }
    ctx->pc = 0x288E2Cu;
label_288e2c:
    // 0x288e2c: 0x24120019  addiu       $s2, $zero, 0x19
    ctx->pc = 0x288e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_288e30:
    // 0x288e30: 0x962402fe  lhu         $a0, 0x2FE($s1)
    ctx->pc = 0x288e30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
label_288e34:
    // 0x288e34: 0xc0b77a8  jal         func_2DDEA0
    ctx->pc = 0x288E34u;
    SET_GPR_U32(ctx, 31, 0x288E3Cu);
    ctx->pc = 0x288E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E34u;
    // 0x288e38: 0x8e250564  lw          $a1, 0x564($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDEA0u, 0x288E34u, 0x288E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E3Cu;
label_288e3c:
    // 0x288e3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x288e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e44: 0xc05657a  jal         func_1595E8
    ctx->pc = 0x288E44u;
    SET_GPR_U32(ctx, 31, 0x288E4Cu);
    ctx->pc = 0x288E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E44u;
    // 0x288e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595E8u, 0x288E44u, 0x288E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E4Cu;
label_288e4c:
    // 0x288e4c: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x288e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x288e50: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x288e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x288e54: 0x24a58c90  addiu       $a1, $a1, -0x7370
    ctx->pc = 0x288e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937744));
    // 0x288e58: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x288E58u;
    SET_GPR_U32(ctx, 31, 0x288E60u);
    ctx->pc = 0x288E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E58u;
    // 0x288e5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x288E58u, 0x288E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E60u;
label_288e60:
    // 0x288e60: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x288e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x288e64: 0x8e240304  lw          $a0, 0x304($s1)
    ctx->pc = 0x288e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x288e68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x288e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x288e6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e70: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x288E70u;
    SET_GPR_U32(ctx, 31, 0x288E78u);
    ctx->pc = 0x288E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288E70u;
    // 0x288e74: 0x24a58c98  addiu       $a1, $a1, -0x7368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x288E70u, 0x288E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288E78u;
label_288e78:
    // 0x288e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288e7c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x288e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x288e80: 0x240202a7  addiu       $v0, $zero, 0x2A7
    ctx->pc = 0x288e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
    // 0x288e84: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x288E84u;
    {
        const bool branch_taken_0x288e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x288e84) {
            ctx->pc = 0x288EC4u;
            goto label_288ec4;
        }
    }
    ctx->pc = 0x288E8Cu;
    // 0x288e8c: 0x8e22155c  lw          $v0, 0x155C($s1)
    ctx->pc = 0x288e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5468)));
    // 0x288e90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x288e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x288e94: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x288E94u;
    {
        const bool branch_taken_0x288e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288E94u;
        // 0x288e98: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288e94) {
            ctx->pc = 0x288EC4u;
            goto label_288ec4;
        }
    }
    ctx->pc = 0x288E9Cu;
    // 0x288e9c: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x288e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x288ea0: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x288ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x288ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ea8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x288ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x288eac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x288eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288eb0: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x288eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x288eb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x288eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288eb8: 0x8d06001c  lw          $a2, 0x1C($t0)
    ctx->pc = 0x288eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x288ebc: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x288EBCu;
    SET_GPR_U32(ctx, 31, 0x288EC4u);
    ctx->pc = 0x288EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288EBCu;
    // 0x288ec0: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x288EBCu, 0x288EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288EC4u;
label_288ec4:
    // 0x288ec4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288EC4u;
    {
        const bool branch_taken_0x288ec4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x288EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EC4u;
        // 0x288ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ec4) {
            ctx->pc = 0x288ED4u;
            goto label_288ed4;
        }
    }
    ctx->pc = 0x288ECCu;
    // 0x288ecc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x288ECCu;
    {
        const bool branch_taken_0x288ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288ECCu;
        // 0x288ed0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ecc) {
            ctx->pc = 0x288EE8u;
            goto label_288ee8;
        }
    }
    ctx->pc = 0x288ED4u;
label_288ed4:
    // 0x288ed4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x288ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ed8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x288ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288edc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x288edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ee0: 0xc0525ce  jal         func_149738
    ctx->pc = 0x288EE0u;
    SET_GPR_U32(ctx, 31, 0x288EE8u);
    ctx->pc = 0x288EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288EE0u;
    // 0x288ee4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149738u, 0x288EE0u, 0x288EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288EE8u;
label_288ee8:
    // 0x288ee8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x288ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288eec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x288eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288ef0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x288ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x288EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288EF8u;
        // 0x288efc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288F00u;
}
