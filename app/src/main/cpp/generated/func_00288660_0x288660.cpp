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

// Function: func_00288660
// Address: 0x288660 - 0x2887d0
void func_00288660_0x288660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00288660_0x288660");
#endif

    switch (ctx->pc) {
        case 0x28869cu: goto label_28869c;
        case 0x2886ecu: goto label_2886ec;
        case 0x28870cu: goto label_28870c;
        case 0x28875cu: goto label_28875c;
        case 0x288764u: goto label_288764;
        case 0x2887b0u: goto label_2887b0;
        case 0x2887b8u: goto label_2887b8;
        default: break;
    }

    ctx->pc = 0x288660u;

    // 0x288660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x288660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x288664: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x288664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x288668: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x288668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28866c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28866cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288670: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x288670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x288674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288678: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x288678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x28867c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28867Cu;
    {
        const bool branch_taken_0x28867c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x288680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28867Cu;
        // 0x288680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28867c) {
            ctx->pc = 0x288694u;
            goto label_288694;
        }
    }
    ctx->pc = 0x288684u;
    // 0x288684: 0x50620027  beql        $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x288684u;
    {
        const bool branch_taken_0x288684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x288684) {
            ctx->pc = 0x288688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x288684u;
            // 0x288688: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x288724u;
            goto label_288724;
        }
    }
    ctx->pc = 0x28868Cu;
    // 0x28868c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x28868Cu;
    {
        const bool branch_taken_0x28868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28868Cu;
        // 0x288690: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28868c) {
            ctx->pc = 0x2887BCu;
            goto label_2887bc;
        }
    }
    ctx->pc = 0x288694u;
label_288694:
    // 0x288694: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x288694u;
    SET_GPR_U32(ctx, 31, 0x28869Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x288694u, 0x28869Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28869Cu;
label_28869c:
    // 0x28869c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28869cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2886a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2886A0u;
    {
        const bool branch_taken_0x2886a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886A0u;
        // 0x2886a4: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886a0) {
            ctx->pc = 0x2886B4u;
            goto label_2886b4;
        }
    }
    ctx->pc = 0x2886A8u;
    // 0x2886a8: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x2886a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2886ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2886ACu;
    {
        const bool branch_taken_0x2886ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2886B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2886ACu;
        // 0x2886b0: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886ac) {
            ctx->pc = 0x2886BCu;
            goto label_2886bc;
        }
    }
    ctx->pc = 0x2886B4u;
label_2886b4:
    // 0x2886b4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x2886b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2886b8: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x2886b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2886bc:
    // 0x2886bc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2886bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2886c0: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2886c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2886c4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2886c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2886c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2886c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2886cc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2886ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2886d0: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x2886d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2886d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2886d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2886d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2886dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2886e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886e4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2886E4u;
    SET_GPR_U32(ctx, 31, 0x2886ECu);
    ctx->pc = 0x2886E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2886E4u;
    // 0x2886e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2886E4u, 0x2886ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2886ECu;
label_2886ec:
    // 0x2886ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2886ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2886f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2886f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2886f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2886f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886fc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2886fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x288700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x288700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288704: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x288704u;
    SET_GPR_U32(ctx, 31, 0x28870Cu);
    ctx->pc = 0x288708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288704u;
    // 0x288708: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x288704u, 0x28870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28870Cu;
label_28870c:
    // 0x28870c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x28870cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x288710: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x288710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x288714: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x288714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
    // 0x288718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x288718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28871c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x28871cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x288720: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x288720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_288724:
    // 0x288724: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x288724u;
    {
        const bool branch_taken_0x288724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288724u;
        // 0x288728: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288724) {
            ctx->pc = 0x28875Cu;
            goto label_28875c;
        }
    }
    ctx->pc = 0x28872Cu;
    // 0x28872c: 0x8e030670  lw          $v1, 0x670($s0)
    ctx->pc = 0x28872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x288730: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x288730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x288734: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x288734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x288738: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x288738u;
    {
        const bool branch_taken_0x288738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288738u;
        // 0x28873c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288738) {
            ctx->pc = 0x28875Cu;
            goto label_28875c;
        }
    }
    ctx->pc = 0x288740u;
    // 0x288740: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x288740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288744: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x288744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x288748: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x288748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28874c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28874cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x288750: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x288750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x288754: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x288754u;
    SET_GPR_U32(ctx, 31, 0x28875Cu);
    ctx->pc = 0x288758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288754u;
    // 0x288758: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x288754u, 0x28875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28875Cu;
label_28875c:
    // 0x28875c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x28875Cu;
    SET_GPR_U32(ctx, 31, 0x288764u);
    ctx->pc = 0x288760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28875Cu;
    // 0x288760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x28875Cu, 0x288764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288764u;
label_288764:
    // 0x288764: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x288764u;
    {
        const bool branch_taken_0x288764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x288764) {
            ctx->pc = 0x2887A8u;
            goto label_2887a8;
        }
    }
    ctx->pc = 0x28876Cu;
    // 0x28876c: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x28876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x288770: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x288770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x288774: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288774u;
    {
        const bool branch_taken_0x288774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288774u;
        // 0x288778: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288774) {
            ctx->pc = 0x288794u;
            goto label_288794;
        }
    }
    ctx->pc = 0x28877Cu;
    // 0x28877c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x28877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x288780: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x288780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x288784: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x288784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x288788: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x288788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x28878c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28878Cu;
    {
        const bool branch_taken_0x28878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28878Cu;
        // 0x288790: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28878c) {
            ctx->pc = 0x2887B8u;
            goto label_2887b8;
        }
    }
    ctx->pc = 0x288794u;
label_288794:
    // 0x288794: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x288794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x288798: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x288798u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x28879c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x28879cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2887a0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2887a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2887a4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2887a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_2887a8:
    // 0x2887a8: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x2887A8u;
    SET_GPR_U32(ctx, 31, 0x2887B0u);
    ctx->pc = 0x2887ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2887A8u;
    // 0x2887ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x2887A8u, 0x2887B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887B0u;
label_2887b0:
    // 0x2887b0: 0xc0b6a6e  jal         func_2DA9B8
    ctx->pc = 0x2887B0u;
    SET_GPR_U32(ctx, 31, 0x2887B8u);
    ctx->pc = 0x2887B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2887B0u;
    // 0x2887b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9B8u, 0x2887B0u, 0x2887B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887B8u;
label_2887b8:
    // 0x2887b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2887b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2887bc:
    // 0x2887bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2887bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2887c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2887c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2887c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2887c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2887c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2887C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2887CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2887C8u;
        // 0x2887cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2887C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2887D0u;
}
