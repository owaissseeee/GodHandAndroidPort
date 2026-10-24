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

// Function: func_00258D80
// Address: 0x258d80 - 0x2591f8
void func_00258D80_0x258d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00258D80_0x258d80");
#endif

    switch (ctx->pc) {
        case 0x258dc8u: goto label_258dc8;
        case 0x258e00u: goto label_258e00;
        case 0x258e2cu: goto label_258e2c;
        case 0x258e58u: goto label_258e58;
        case 0x258e8cu: goto label_258e8c;
        case 0x258eb8u: goto label_258eb8;
        case 0x258ec8u: goto label_258ec8;
        case 0x258ef4u: goto label_258ef4;
        case 0x258f20u: goto label_258f20;
        case 0x258f4cu: goto label_258f4c;
        case 0x258f78u: goto label_258f78;
        case 0x258fa4u: goto label_258fa4;
        case 0x258fd0u: goto label_258fd0;
        case 0x258ffcu: goto label_258ffc;
        case 0x259028u: goto label_259028;
        case 0x259054u: goto label_259054;
        case 0x2590a4u: goto label_2590a4;
        case 0x2590acu: goto label_2590ac;
        case 0x2590d4u: goto label_2590d4;
        case 0x259154u: goto label_259154;
        case 0x25915cu: goto label_25915c;
        case 0x2591acu: goto label_2591ac;
        case 0x2591b4u: goto label_2591b4;
        case 0x2591c8u: goto label_2591c8;
        case 0x2591d4u: goto label_2591d4;
        default: break;
    }

    ctx->pc = 0x258d80u;

    // 0x258d80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x258d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x258d84: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x258d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x258d88: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x258d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x258d8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x258d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d90: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x258d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x258d94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x258d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x258d98: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x258d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x258d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258da0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x258da0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x258da4: 0x926302f6  lbu         $v1, 0x2F6($s3)
    ctx->pc = 0x258da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
    // 0x258da8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x258DA8u;
    {
        const bool branch_taken_0x258da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DA8u;
        // 0x258dac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258da8) {
            ctx->pc = 0x258DC0u;
            goto label_258dc0;
        }
    }
    ctx->pc = 0x258DB0u;
    // 0x258db0: 0x106200dc  beq         $v1, $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x258DB0u;
    {
        const bool branch_taken_0x258db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DB0u;
        // 0x258db4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258db0) {
            ctx->pc = 0x259124u;
            goto label_259124;
        }
    }
    ctx->pc = 0x258DB8u;
    // 0x258db8: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x258DB8u;
    {
        const bool branch_taken_0x258db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DB8u;
        // 0x258dbc: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258db8) {
            ctx->pc = 0x2591DCu;
            goto label_2591dc;
        }
    }
    ctx->pc = 0x258DC0u;
label_258dc0:
    // 0x258dc0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x258DC0u;
    SET_GPR_U32(ctx, 31, 0x258DC8u);
    ctx->pc = 0x258DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DC0u;
    // 0x258dc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x258DC0u, 0x258DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DC8u;
label_258dc8:
    // 0x258dc8: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x258dc8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x258dcc: 0x8e620564  lw          $v0, 0x564($s3)
    ctx->pc = 0x258dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x258dd0: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x258dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x258dd4: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x258dd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x258dd8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x258DD8u;
    {
        const bool branch_taken_0x258dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DD8u;
        // 0x258ddc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258dd8) {
            ctx->pc = 0x258DF8u;
            goto label_258df8;
        }
    }
    ctx->pc = 0x258DE0u;
    // 0x258de0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x258de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x258de4: 0x24422a60  addiu       $v0, $v0, 0x2A60
    ctx->pc = 0x258de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10848));
    // 0x258de8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x258de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258dec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x258decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x258df0: 0x800008  jr          $a0
    ctx->pc = 0x258DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x258DF8u: goto label_258df8;
            case 0x258E24u: goto label_258e24;
            case 0x258E50u: goto label_258e50;
            case 0x258EC0u: goto label_258ec0;
            case 0x258EECu: goto label_258eec;
            case 0x258F18u: goto label_258f18;
            case 0x258F44u: goto label_258f44;
            case 0x258F70u: goto label_258f70;
            case 0x258F9Cu: goto label_258f9c;
            case 0x258FC8u: goto label_258fc8;
            case 0x258FF4u: goto label_258ff4;
            case 0x259020u: goto label_259020;
            case 0x25904Cu: goto label_25904c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258DF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x258DF8u;
label_258df8:
    // 0x258df8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x258DF8u;
    SET_GPR_U32(ctx, 31, 0x258E00u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x258DF8u, 0x258E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E00u;
label_258e00:
    // 0x258e00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x258e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x258e04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258E04u;
    {
        const bool branch_taken_0x258e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E04u;
        // 0x258e08: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e04) {
            ctx->pc = 0x258E18u;
            goto label_258e18;
        }
    }
    ctx->pc = 0x258E0Cu;
    // 0x258e0c: 0x8c4305f8  lw          $v1, 0x5F8($v0)
    ctx->pc = 0x258e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1528)));
    // 0x258e10: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x258E10u;
    {
        const bool branch_taken_0x258e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E10u;
        // 0x258e14: 0x8c4405fc  lw          $a0, 0x5FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e10) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258E18u;
label_258e18:
    // 0x258e18: 0x8c430600  lw          $v1, 0x600($v0)
    ctx->pc = 0x258e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1536)));
    // 0x258e1c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x258E1Cu;
    {
        const bool branch_taken_0x258e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E1Cu;
        // 0x258e20: 0x8c440604  lw          $a0, 0x604($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e1c) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258E24u;
label_258e24:
    // 0x258e24: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x258E24u;
    SET_GPR_U32(ctx, 31, 0x258E2Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x258E24u, 0x258E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E2Cu;
label_258e2c:
    // 0x258e2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x258e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x258e30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258E30u;
    {
        const bool branch_taken_0x258e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E30u;
        // 0x258e34: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e30) {
            ctx->pc = 0x258E44u;
            goto label_258e44;
        }
    }
    ctx->pc = 0x258E38u;
    // 0x258e38: 0x8c430af4  lw          $v1, 0xAF4($v0)
    ctx->pc = 0x258e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2804)));
    // 0x258e3c: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x258E3Cu;
    {
        const bool branch_taken_0x258e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E3Cu;
        // 0x258e40: 0x8c440af8  lw          $a0, 0xAF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e3c) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258E44u;
label_258e44:
    // 0x258e44: 0x8c430afc  lw          $v1, 0xAFC($v0)
    ctx->pc = 0x258e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2812)));
    // 0x258e48: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x258E48u;
    {
        const bool branch_taken_0x258e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E48u;
        // 0x258e4c: 0x8c440b00  lw          $a0, 0xB00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e48) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258E50u;
label_258e50:
    // 0x258e50: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x258E50u;
    SET_GPR_U32(ctx, 31, 0x258E58u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x258E50u, 0x258E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E58u;
label_258e58:
    // 0x258e58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x258e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x258e5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258E5Cu;
    {
        const bool branch_taken_0x258e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E5Cu;
        // 0x258e60: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e5c) {
            ctx->pc = 0x258E70u;
            goto label_258e70;
        }
    }
    ctx->pc = 0x258E64u;
    // 0x258e64: 0x8c430af4  lw          $v1, 0xAF4($v0)
    ctx->pc = 0x258e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2804)));
    // 0x258e68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x258E68u;
    {
        const bool branch_taken_0x258e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E68u;
        // 0x258e6c: 0x8c440af8  lw          $a0, 0xAF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e68) {
            ctx->pc = 0x258E78u;
            goto label_258e78;
        }
    }
    ctx->pc = 0x258E70u;
label_258e70:
    // 0x258e70: 0x8c430afc  lw          $v1, 0xAFC($v0)
    ctx->pc = 0x258e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2812)));
    // 0x258e74: 0x8c440b00  lw          $a0, 0xB00($v0)
    ctx->pc = 0x258e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2816)));
label_258e78:
    // 0x258e78: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x258e78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258e7c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x258e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x258e80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x258e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e84: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x258E84u;
    SET_GPR_U32(ctx, 31, 0x258E8Cu);
    ctx->pc = 0x258E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258E84u;
    // 0x258e88: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x258E84u, 0x258E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E8Cu;
label_258e8c:
    // 0x258e8c: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x258e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x258e90: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x258e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x258e94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x258e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x258e98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x258e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258e9c: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x258e9cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x258ea0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x258ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258ea4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x258ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258ea8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x258ea8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258eac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x258eacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258eb0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x258EB0u;
    SET_GPR_U32(ctx, 31, 0x258EB8u);
    ctx->pc = 0x258EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258EB0u;
    // 0x258eb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x258EB0u, 0x258EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258EB8u;
label_258eb8:
    // 0x258eb8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x258EB8u;
    {
        const bool branch_taken_0x258eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258eb8) {
            ctx->pc = 0x25907Cu;
            goto label_25907c;
        }
    }
    ctx->pc = 0x258EC0u;
label_258ec0:
    // 0x258ec0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x258EC0u;
    SET_GPR_U32(ctx, 31, 0x258EC8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x258EC0u, 0x258EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258EC8u;
label_258ec8:
    // 0x258ec8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x258ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x258ecc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258ECCu;
    {
        const bool branch_taken_0x258ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258ECCu;
        // 0x258ed0: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ecc) {
            ctx->pc = 0x258EE0u;
            goto label_258ee0;
        }
    }
    ctx->pc = 0x258ED4u;
    // 0x258ed4: 0x8c430af4  lw          $v1, 0xAF4($v0)
    ctx->pc = 0x258ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2804)));
    // 0x258ed8: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x258ED8u;
    {
        const bool branch_taken_0x258ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258ED8u;
        // 0x258edc: 0x8c440af8  lw          $a0, 0xAF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ed8) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258EE0u;
label_258ee0:
    // 0x258ee0: 0x8c430afc  lw          $v1, 0xAFC($v0)
    ctx->pc = 0x258ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2812)));
    // 0x258ee4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x258EE4u;
    {
        const bool branch_taken_0x258ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EE4u;
        // 0x258ee8: 0x8c440b00  lw          $a0, 0xB00($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ee4) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258EECu;
label_258eec:
    // 0x258eec: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x258EECu;
    SET_GPR_U32(ctx, 31, 0x258EF4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x258EECu, 0x258EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258EF4u;
label_258ef4:
    // 0x258ef4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x258ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x258ef8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258EF8u;
    {
        const bool branch_taken_0x258ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258EF8u;
        // 0x258efc: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ef8) {
            ctx->pc = 0x258F0Cu;
            goto label_258f0c;
        }
    }
    ctx->pc = 0x258F00u;
    // 0x258f00: 0x8c433300  lw          $v1, 0x3300($v0)
    ctx->pc = 0x258f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13056)));
    // 0x258f04: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x258F04u;
    {
        const bool branch_taken_0x258f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F04u;
        // 0x258f08: 0x8c443304  lw          $a0, 0x3304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f04) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258F0Cu;
label_258f0c:
    // 0x258f0c: 0x8c433300  lw          $v1, 0x3300($v0)
    ctx->pc = 0x258f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13056)));
    // 0x258f10: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x258F10u;
    {
        const bool branch_taken_0x258f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F10u;
        // 0x258f14: 0x8c443304  lw          $a0, 0x3304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f10) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258F18u;
label_258f18:
    // 0x258f18: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x258F18u;
    SET_GPR_U32(ctx, 31, 0x258F20u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x258F18u, 0x258F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258F20u;
label_258f20:
    // 0x258f20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x258f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x258f24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258F24u;
    {
        const bool branch_taken_0x258f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F24u;
        // 0x258f28: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f24) {
            ctx->pc = 0x258F38u;
            goto label_258f38;
        }
    }
    ctx->pc = 0x258F2Cu;
    // 0x258f2c: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x258f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x258f30: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x258F30u;
    {
        const bool branch_taken_0x258f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F30u;
        // 0x258f34: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f30) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258F38u;
label_258f38:
    // 0x258f38: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x258f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x258f3c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x258F3Cu;
    {
        const bool branch_taken_0x258f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F3Cu;
        // 0x258f40: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f3c) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258F44u;
label_258f44:
    // 0x258f44: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x258F44u;
    SET_GPR_U32(ctx, 31, 0x258F4Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x258F44u, 0x258F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258F4Cu;
label_258f4c:
    // 0x258f4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x258f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x258f50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258F50u;
    {
        const bool branch_taken_0x258f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F50u;
        // 0x258f54: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f50) {
            ctx->pc = 0x258F64u;
            goto label_258f64;
        }
    }
    ctx->pc = 0x258F58u;
    // 0x258f58: 0x8c431778  lw          $v1, 0x1778($v0)
    ctx->pc = 0x258f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6008)));
    // 0x258f5c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x258F5Cu;
    {
        const bool branch_taken_0x258f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F5Cu;
        // 0x258f60: 0x8c44177c  lw          $a0, 0x177C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f5c) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258F64u;
label_258f64:
    // 0x258f64: 0x8c431780  lw          $v1, 0x1780($v0)
    ctx->pc = 0x258f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6016)));
    // 0x258f68: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x258F68u;
    {
        const bool branch_taken_0x258f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F68u;
        // 0x258f6c: 0x8c441784  lw          $a0, 0x1784($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f68) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258F70u;
label_258f70:
    // 0x258f70: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x258F70u;
    SET_GPR_U32(ctx, 31, 0x258F78u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x258F70u, 0x258F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258F78u;
label_258f78:
    // 0x258f78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x258f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x258f7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258F7Cu;
    {
        const bool branch_taken_0x258f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F7Cu;
        // 0x258f80: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f7c) {
            ctx->pc = 0x258F90u;
            goto label_258f90;
        }
    }
    ctx->pc = 0x258F84u;
    // 0x258f84: 0x8c433acc  lw          $v1, 0x3ACC($v0)
    ctx->pc = 0x258f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15052)));
    // 0x258f88: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x258F88u;
    {
        const bool branch_taken_0x258f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F88u;
        // 0x258f8c: 0x8c443ad0  lw          $a0, 0x3AD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f88) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258F90u;
label_258f90:
    // 0x258f90: 0x8c433ad4  lw          $v1, 0x3AD4($v0)
    ctx->pc = 0x258f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15060)));
    // 0x258f94: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x258F94u;
    {
        const bool branch_taken_0x258f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258F94u;
        // 0x258f98: 0x8c443ad8  lw          $a0, 0x3AD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258f94) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258F9Cu;
label_258f9c:
    // 0x258f9c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x258F9Cu;
    SET_GPR_U32(ctx, 31, 0x258FA4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x258F9Cu, 0x258FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FA4u;
label_258fa4:
    // 0x258fa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x258fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x258fa8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258FA8u;
    {
        const bool branch_taken_0x258fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FA8u;
        // 0x258fac: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fa8) {
            ctx->pc = 0x258FBCu;
            goto label_258fbc;
        }
    }
    ctx->pc = 0x258FB0u;
    // 0x258fb0: 0x8c431778  lw          $v1, 0x1778($v0)
    ctx->pc = 0x258fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6008)));
    // 0x258fb4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x258FB4u;
    {
        const bool branch_taken_0x258fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FB4u;
        // 0x258fb8: 0x8c44177c  lw          $a0, 0x177C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fb4) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258FBCu;
label_258fbc:
    // 0x258fbc: 0x8c431780  lw          $v1, 0x1780($v0)
    ctx->pc = 0x258fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6016)));
    // 0x258fc0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x258FC0u;
    {
        const bool branch_taken_0x258fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FC0u;
        // 0x258fc4: 0x8c441784  lw          $a0, 0x1784($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fc0) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258FC8u;
label_258fc8:
    // 0x258fc8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x258FC8u;
    SET_GPR_U32(ctx, 31, 0x258FD0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x258FC8u, 0x258FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FD0u;
label_258fd0:
    // 0x258fd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x258fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x258fd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258FD4u;
    {
        const bool branch_taken_0x258fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FD4u;
        // 0x258fd8: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fd4) {
            ctx->pc = 0x258FE8u;
            goto label_258fe8;
        }
    }
    ctx->pc = 0x258FDCu;
    // 0x258fdc: 0x8c430f24  lw          $v1, 0xF24($v0)
    ctx->pc = 0x258fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3876)));
    // 0x258fe0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x258FE0u;
    {
        const bool branch_taken_0x258fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FE0u;
        // 0x258fe4: 0x8c440f28  lw          $a0, 0xF28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fe0) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258FE8u;
label_258fe8:
    // 0x258fe8: 0x8c430f2c  lw          $v1, 0xF2C($v0)
    ctx->pc = 0x258fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3884)));
    // 0x258fec: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x258FECu;
    {
        const bool branch_taken_0x258fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258FECu;
        // 0x258ff0: 0x8c440f30  lw          $a0, 0xF30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258fec) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x258FF4u;
label_258ff4:
    // 0x258ff4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x258FF4u;
    SET_GPR_U32(ctx, 31, 0x258FFCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x258FF4u, 0x258FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FFCu;
label_258ffc:
    // 0x258ffc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x258ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x259000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259000u;
    {
        const bool branch_taken_0x259000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259000u;
        // 0x259004: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259000) {
            ctx->pc = 0x259014u;
            goto label_259014;
        }
    }
    ctx->pc = 0x259008u;
    // 0x259008: 0x8c4305f8  lw          $v1, 0x5F8($v0)
    ctx->pc = 0x259008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1528)));
    // 0x25900c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25900Cu;
    {
        const bool branch_taken_0x25900c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25900Cu;
        // 0x259010: 0x8c4405fc  lw          $a0, 0x5FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25900c) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x259014u;
label_259014:
    // 0x259014: 0x8c430600  lw          $v1, 0x600($v0)
    ctx->pc = 0x259014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1536)));
    // 0x259018: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x259018u;
    {
        const bool branch_taken_0x259018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259018u;
        // 0x25901c: 0x8c440604  lw          $a0, 0x604($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259018) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x259020u;
label_259020:
    // 0x259020: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x259020u;
    SET_GPR_U32(ctx, 31, 0x259028u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x259020u, 0x259028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259028u;
label_259028:
    // 0x259028: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x259028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25902c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25902Cu;
    {
        const bool branch_taken_0x25902c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25902Cu;
        // 0x259030: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25902c) {
            ctx->pc = 0x259040u;
            goto label_259040;
        }
    }
    ctx->pc = 0x259034u;
    // 0x259034: 0x8c432e34  lw          $v1, 0x2E34($v0)
    ctx->pc = 0x259034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11828)));
    // 0x259038: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x259038u;
    {
        const bool branch_taken_0x259038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259038u;
        // 0x25903c: 0x8c442e38  lw          $a0, 0x2E38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259038) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x259040u;
label_259040:
    // 0x259040: 0x8c432e3c  lw          $v1, 0x2E3C($v0)
    ctx->pc = 0x259040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11836)));
    // 0x259044: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x259044u;
    {
        const bool branch_taken_0x259044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259044u;
        // 0x259048: 0x8c442e40  lw          $a0, 0x2E40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259044) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x25904Cu;
label_25904c:
    // 0x25904c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25904Cu;
    SET_GPR_U32(ctx, 31, 0x259054u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25904Cu, 0x259054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259054u;
label_259054:
    // 0x259054: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x259054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x259058: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259058u;
    {
        const bool branch_taken_0x259058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259058u;
        // 0x25905c: 0x8e620304  lw          $v0, 0x304($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259058) {
            ctx->pc = 0x25906Cu;
            goto label_25906c;
        }
    }
    ctx->pc = 0x259060u;
    // 0x259060: 0x8c431350  lw          $v1, 0x1350($v0)
    ctx->pc = 0x259060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4944)));
    // 0x259064: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x259064u;
    {
        const bool branch_taken_0x259064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259064u;
        // 0x259068: 0x8c441354  lw          $a0, 0x1354($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259064) {
            ctx->pc = 0x259074u;
            goto label_259074;
        }
    }
    ctx->pc = 0x25906Cu;
label_25906c:
    // 0x25906c: 0x8c431358  lw          $v1, 0x1358($v0)
    ctx->pc = 0x25906cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4952)));
    // 0x259070: 0x8c44135c  lw          $a0, 0x135C($v0)
    ctx->pc = 0x259070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4956)));
label_259074:
    // 0x259074: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x259074u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x259078: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x259078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25907c:
    // 0x25907c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25907cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x259080: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x259080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x259084: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x259084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259088: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x259088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25908c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x25908cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259090: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x259090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x259094: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x259094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259098: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x259098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x25909c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25909Cu;
    SET_GPR_U32(ctx, 31, 0x2590A4u);
    ctx->pc = 0x2590A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25909Cu;
    // 0x2590a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25909Cu, 0x2590A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2590A4u;
label_2590a4:
    // 0x2590a4: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2590A4u;
    SET_GPR_U32(ctx, 31, 0x2590ACu);
    ctx->pc = 0x2590A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2590A4u;
    // 0x2590a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2590A4u, 0x2590ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2590ACu;
label_2590ac:
    // 0x2590ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2590acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2590b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2590b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590b4: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2590b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2590b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2590b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2590bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2590bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2590c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2590c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2590c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2590cc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2590CCu;
    SET_GPR_U32(ctx, 31, 0x2590D4u);
    ctx->pc = 0x2590D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2590CCu;
    // 0x2590d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2590CCu, 0x2590D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2590D4u;
label_2590d4:
    // 0x2590d4: 0x8e620698  lw          $v0, 0x698($s3)
    ctx->pc = 0x2590d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1688)));
    // 0x2590d8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2590D8u;
    {
        const bool branch_taken_0x2590d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2590DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590D8u;
        // 0x2590dc: 0xae6005f0  sw          $zero, 0x5F0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590d8) {
            ctx->pc = 0x259118u;
            goto label_259118;
        }
    }
    ctx->pc = 0x2590E0u;
    // 0x2590e0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2590e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2590e4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2590E4u;
    {
        const bool branch_taken_0x2590e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2590E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2590E4u;
        // 0x2590e8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2590e4) {
            ctx->pc = 0x259118u;
            goto label_259118;
        }
    }
    ctx->pc = 0x2590ECu;
    // 0x2590ec: 0x266305d0  addiu       $v1, $s3, 0x5D0
    ctx->pc = 0x2590ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1488));
    // 0x2590f0: 0xae6205f0  sw          $v0, 0x5F0($s3)
    ctx->pc = 0x2590f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 2));
    // 0x2590f4: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x2590f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x2590f8: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2590F8u;
    {
        const bool branch_taken_0x2590f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2590f8) {
            ctx->pc = 0x2590FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2590F8u;
            // 0x2590fc: 0x926202f6  lbu         $v0, 0x2F6($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25911Cu;
            goto label_25911c;
        }
    }
    ctx->pc = 0x259100u;
    // 0x259100: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x259100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259104: 0xe66005d0  swc1        $f0, 0x5D0($s3)
    ctx->pc = 0x259104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1488), bits); }
    // 0x259108: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x259108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25910c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x25910cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x259110: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x259110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259114: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x259114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_259118:
    // 0x259118: 0x926202f6  lbu         $v0, 0x2F6($s3)
    ctx->pc = 0x259118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 758)));
label_25911c:
    // 0x25911c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x259120: 0xa26202f6  sb          $v0, 0x2F6($s3)
    ctx->pc = 0x259120u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 758), (uint8_t)GPR_U32(ctx, 2));
label_259124:
    // 0x259124: 0x8e6205f0  lw          $v0, 0x5F0($s3)
    ctx->pc = 0x259124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1520)));
    // 0x259128: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x259128u;
    {
        const bool branch_taken_0x259128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259128u;
        // 0x25912c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259128) {
            ctx->pc = 0x259154u;
            goto label_259154;
        }
    }
    ctx->pc = 0x259130u;
    // 0x259130: 0xc66c05a8  lwc1        $f12, 0x5A8($s3)
    ctx->pc = 0x259130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x259134: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x259134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x259138: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x259138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x25913c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25913cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259140: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x259140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259144: 0xae6205f0  sw          $v0, 0x5F0($s3)
    ctx->pc = 0x259144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1520), GPR_U32(ctx, 2));
    // 0x259148: 0x266505d0  addiu       $a1, $s3, 0x5D0
    ctx->pc = 0x259148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1488));
    // 0x25914c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x25914Cu;
    SET_GPR_U32(ctx, 31, 0x259154u);
    ctx->pc = 0x259150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25914Cu;
    // 0x259150: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x25914Cu, 0x259154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259154u;
label_259154:
    // 0x259154: 0xc055f06  jal         func_157C18
    ctx->pc = 0x259154u;
    SET_GPR_U32(ctx, 31, 0x25915Cu);
    ctx->pc = 0x259158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259154u;
    // 0x259158: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x259154u, 0x25915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25915Cu;
label_25915c:
    // 0x25915c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25915Cu;
    {
        const bool branch_taken_0x25915c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25915Cu;
        // 0x259160: 0x24020213  addiu       $v0, $zero, 0x213 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 531));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25915c) {
            ctx->pc = 0x2591B4u;
            goto label_2591b4;
        }
    }
    ctx->pc = 0x259164u;
    // 0x259164: 0x8e630564  lw          $v1, 0x564($s3)
    ctx->pc = 0x259164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1380)));
    // 0x259168: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x259168u;
    {
        const bool branch_taken_0x259168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259168u;
        // 0x25916c: 0x28620214  slti        $v0, $v1, 0x214 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)532) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x259168) {
            ctx->pc = 0x259194u;
            goto label_259194;
        }
    }
    ctx->pc = 0x259170u;
    // 0x259170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x259170u;
    {
        const bool branch_taken_0x259170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259170u;
        // 0x259174: 0x2402020e  addiu       $v0, $zero, 0x20E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259170) {
            ctx->pc = 0x259188u;
            goto label_259188;
        }
    }
    ctx->pc = 0x259178u;
    // 0x259178: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x259178u;
    {
        const bool branch_taken_0x259178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x259178) {
            ctx->pc = 0x25917Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259178u;
            // 0x25917c: 0x8e6216e8  lw          $v0, 0x16E8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x259198u;
            goto label_259198;
        }
    }
    ctx->pc = 0x259180u;
    // 0x259180: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x259180u;
    {
        const bool branch_taken_0x259180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259180) {
            ctx->pc = 0x2591ACu;
            goto label_2591ac;
        }
    }
    ctx->pc = 0x259188u;
label_259188:
    // 0x259188: 0x24020217  addiu       $v0, $zero, 0x217
    ctx->pc = 0x259188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    // 0x25918c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25918Cu;
    {
        const bool branch_taken_0x25918c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25918c) {
            ctx->pc = 0x2591ACu;
            goto label_2591ac;
        }
    }
    ctx->pc = 0x259194u;
label_259194:
    // 0x259194: 0x8e6216e8  lw          $v0, 0x16E8($s3)
    ctx->pc = 0x259194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5864)));
label_259198:
    // 0x259198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x259198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25919c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25919cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591a0: 0x244203e7  addiu       $v0, $v0, 0x3E7
    ctx->pc = 0x2591a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 999));
    // 0x2591a4: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x2591A4u;
    SET_GPR_U32(ctx, 31, 0x2591ACu);
    ctx->pc = 0x2591A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2591A4u;
    // 0x2591a8: 0xae6216e8  sw          $v0, 0x16E8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 5864), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ECD0u, 0x2591A4u, 0x2591ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2591ACu;
label_2591ac:
    // 0x2591ac: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2591ACu;
    SET_GPR_U32(ctx, 31, 0x2591B4u);
    ctx->pc = 0x2591B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2591ACu;
    // 0x2591b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2591ACu, 0x2591B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2591B4u;
label_2591b4:
    // 0x2591b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2591b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2591b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2591b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2591bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2591bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591c0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2591C0u;
    SET_GPR_U32(ctx, 31, 0x2591C8u);
    ctx->pc = 0x2591C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2591C0u;
    // 0x2591c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2591C0u, 0x2591C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2591C8u;
label_2591c8:
    // 0x2591c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2591c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2591cc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2591CCu;
    SET_GPR_U32(ctx, 31, 0x2591D4u);
    ctx->pc = 0x2591D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2591CCu;
    // 0x2591d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2591CCu, 0x2591D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2591D4u;
label_2591d4:
    // 0x2591d4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2591d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2591d8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2591d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2591dc:
    // 0x2591dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2591dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2591e0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2591e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2591e4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2591e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2591e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2591e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2591ec: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2591ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2591f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2591F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2591F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2591F0u;
        // 0x2591f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2591F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2591F8u;
}
