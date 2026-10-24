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

// Function: func_00235DB8
// Address: 0x235db8 - 0x236190
void func_00235DB8_0x235db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00235DB8_0x235db8");
#endif

    switch (ctx->pc) {
        case 0x235dd4u: goto label_235dd4;
        case 0x235e54u: goto label_235e54;
        case 0x235e60u: goto label_235e60;
        case 0x235eecu: goto label_235eec;
        case 0x235f2cu: goto label_235f2c;
        case 0x235f4cu: goto label_235f4c;
        case 0x235f58u: goto label_235f58;
        case 0x235f70u: goto label_235f70;
        case 0x236024u: goto label_236024;
        case 0x236044u: goto label_236044;
        case 0x236058u: goto label_236058;
        case 0x236084u: goto label_236084;
        case 0x236090u: goto label_236090;
        case 0x2360ecu: goto label_2360ec;
        case 0x236128u: goto label_236128;
        case 0x236140u: goto label_236140;
        case 0x236150u: goto label_236150;
        case 0x236168u: goto label_236168;
        case 0x236174u: goto label_236174;
        default: break;
    }

    ctx->pc = 0x235db8u;

    // 0x235db8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x235dbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x235dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x235dc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x235dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x235dc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235dcc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x235DCCu;
    SET_GPR_U32(ctx, 31, 0x235DD4u);
    ctx->pc = 0x235DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DCCu;
    // 0x235dd0: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x235DCCu, 0x235DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DD4u;
label_235dd4:
    // 0x235dd4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x235dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x235dd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x235dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ddc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x235ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x235de0: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x235DE0u;
    {
        const bool branch_taken_0x235de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DE0u;
        // 0x235de4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235de0) {
            ctx->pc = 0x236174u;
            goto label_236174;
        }
    }
    ctx->pc = 0x235DE8u;
    // 0x235de8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x235de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x235dec: 0x2442a1e0  addiu       $v0, $v0, -0x5E20
    ctx->pc = 0x235decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943200));
    // 0x235df0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x235df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235df4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x235df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x235df8: 0x800008  jr          $a0
    ctx->pc = 0x235DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x235E00u: goto label_235e00;
            case 0x235ED8u: goto label_235ed8;
            case 0x235FD0u: goto label_235fd0;
            case 0x236030u: goto label_236030;
            case 0x236098u: goto label_236098;
            case 0x236100u: goto label_236100;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235DF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x235E00u;
label_235e00:
    // 0x235e00: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x235e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x235e04: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x235e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x235e08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235E08u;
    {
        const bool branch_taken_0x235e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E08u;
        // 0x235e0c: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e08) {
            ctx->pc = 0x235E1Cu;
            goto label_235e1c;
        }
    }
    ctx->pc = 0x235E10u;
    // 0x235e10: 0x28620250  slti        $v0, $v1, 0x250
    ctx->pc = 0x235e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)592) ? 1 : 0);
    // 0x235e14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x235E14u;
    {
        const bool branch_taken_0x235e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235e14) {
            ctx->pc = 0x235E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235E14u;
            // 0x235e18: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235E2Cu;
            goto label_235e2c;
        }
    }
    ctx->pc = 0x235E1Cu;
label_235e1c:
    // 0x235e1c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x235e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235e20: 0x8c430c68  lw          $v1, 0xC68($v0)
    ctx->pc = 0x235e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3176)));
    // 0x235e24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235E24u;
    {
        const bool branch_taken_0x235e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E24u;
        // 0x235e28: 0x8c440c6c  lw          $a0, 0xC6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e24) {
            ctx->pc = 0x235E34u;
            goto label_235e34;
        }
    }
    ctx->pc = 0x235E2Cu;
label_235e2c:
    // 0x235e2c: 0x8c431a64  lw          $v1, 0x1A64($v0)
    ctx->pc = 0x235e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6756)));
    // 0x235e30: 0x8c441a68  lw          $a0, 0x1A68($v0)
    ctx->pc = 0x235e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
label_235e34:
    // 0x235e34: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x235e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235e38: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x235e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x235e3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x235e3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x235e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x235e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x235e48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e4c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x235E4Cu;
    SET_GPR_U32(ctx, 31, 0x235E54u);
    ctx->pc = 0x235E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E4Cu;
    // 0x235e50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x235E4Cu, 0x235E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E54u;
label_235e54:
    // 0x235e54: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x235e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x235e58: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x235E58u;
    SET_GPR_U32(ctx, 31, 0x235E60u);
    ctx->pc = 0x235E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E58u;
    // 0x235e5c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x235E58u, 0x235E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E60u;
label_235e60:
    // 0x235e60: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x235e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x235e64: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x235e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x235e68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x235E68u;
    {
        const bool branch_taken_0x235e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E68u;
        // 0x235e6c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e68) {
            ctx->pc = 0x235E88u;
            goto label_235e88;
        }
    }
    ctx->pc = 0x235E70u;
    // 0x235e70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x235e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x235e74: 0x2442a200  addiu       $v0, $v0, -0x5E00
    ctx->pc = 0x235e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943232));
    // 0x235e78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x235e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x235e7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x235e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x235e80: 0x800008  jr          $a0
    ctx->pc = 0x235E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x235E88u: goto label_235e88;
            case 0x235E90u: goto label_235e90;
            case 0x235E98u: goto label_235e98;
            case 0x235EA0u: goto label_235ea0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235E80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x235E88u;
label_235e88:
    // 0x235e88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x235E88u;
    {
        const bool branch_taken_0x235e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E88u;
        // 0x235e8c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e88) {
            ctx->pc = 0x235EA4u;
            goto label_235ea4;
        }
    }
    ctx->pc = 0x235E90u;
label_235e90:
    // 0x235e90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x235E90u;
    {
        const bool branch_taken_0x235e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E90u;
        // 0x235e94: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e90) {
            ctx->pc = 0x235EA4u;
            goto label_235ea4;
        }
    }
    ctx->pc = 0x235E98u;
label_235e98:
    // 0x235e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x235E98u;
    {
        const bool branch_taken_0x235e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E98u;
        // 0x235e9c: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e98) {
            ctx->pc = 0x235EA4u;
            goto label_235ea4;
        }
    }
    ctx->pc = 0x235EA0u;
label_235ea0:
    // 0x235ea0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x235ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_235ea4:
    // 0x235ea4: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x235ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x235ea8: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x235ea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x235eac: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x235eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x235eb0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x235EB0u;
    {
        const bool branch_taken_0x235eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EB0u;
        // 0x235eb4: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235eb0) {
            ctx->pc = 0x235EBCu;
            goto label_235ebc;
        }
    }
    ctx->pc = 0x235EB8u;
    // 0x235eb8: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x235eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_235ebc:
    // 0x235ebc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x235ebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x235ec0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x235ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x235ec4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x235ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x235ec8: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x235ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x235ecc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x235eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x235ed0: 0xa604056a  sh          $a0, 0x56A($s0)
    ctx->pc = 0x235ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 4));
    // 0x235ed4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x235ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_235ed8:
    // 0x235ed8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x235ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x235edc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ee0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x235ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x235ee4: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x235EE4u;
    SET_GPR_U32(ctx, 31, 0x235EECu);
    ctx->pc = 0x235EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235EE4u;
    // 0x235ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x235EE4u, 0x235EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235EECu;
label_235eec:
    // 0x235eec: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x235eecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x235ef0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x235EF0u;
    {
        const bool branch_taken_0x235ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EF0u;
        // 0x235ef4: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ef0) {
            ctx->pc = 0x235F18u;
            goto label_235f18;
        }
    }
    ctx->pc = 0x235EF8u;
    // 0x235ef8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x235ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x235efc: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x235efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x235f00: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x235f00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x235f04: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x235f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x235f08: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x235f08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x235f0c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x235f0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x235f10: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x235f10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x235f14: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x235f14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_235f18:
    // 0x235f18: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x235f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x235f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235f24: 0xc055f06  jal         func_157C18
    ctx->pc = 0x235F24u;
    SET_GPR_U32(ctx, 31, 0x235F2Cu);
    ctx->pc = 0x235F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F24u;
    // 0x235f28: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x235F24u, 0x235F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F2Cu;
label_235f2c:
    // 0x235f2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x235F2Cu;
    {
        const bool branch_taken_0x235f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F2Cu;
        // 0x235f30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f2c) {
            ctx->pc = 0x235F38u;
            goto label_235f38;
        }
    }
    ctx->pc = 0x235F34u;
    // 0x235f34: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x235f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_235f38:
    // 0x235f38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x235f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x235f3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x235f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x235f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235f44: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x235F44u;
    SET_GPR_U32(ctx, 31, 0x235F4Cu);
    ctx->pc = 0x235F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F44u;
    // 0x235f48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x235F44u, 0x235F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F4Cu;
label_235f4c:
    // 0x235f4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x235f4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x235f50: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x235F50u;
    SET_GPR_U32(ctx, 31, 0x235F58u);
    ctx->pc = 0x235F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F50u;
    // 0x235f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x235F50u, 0x235F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F58u;
label_235f58:
    // 0x235f58: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x235f58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
    // 0x235f5c: 0x18400085  blez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x235F5Cu;
    {
        const bool branch_taken_0x235f5c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x235F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F5Cu;
        // 0x235f60: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f5c) {
            ctx->pc = 0x236174u;
            goto label_236174;
        }
    }
    ctx->pc = 0x235F64u;
    // 0x235f64: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x235f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x235f68: 0xc0b6ddc  jal         func_2DB770
    ctx->pc = 0x235F68u;
    SET_GPR_U32(ctx, 31, 0x235F70u);
    ctx->pc = 0x235F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F68u;
    // 0x235f6c: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x235F68u, 0x235F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F70u;
label_235f70:
    // 0x235f70: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x235f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x235f74: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x235f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x235f78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x235f78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7474A8u));
    // 0x235f7c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x235f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x235f80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x235F80u;
    {
        const bool branch_taken_0x235f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235f80) {
            ctx->pc = 0x235F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235F80u;
            // 0x235f84: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235F98u;
            goto label_235f98;
        }
    }
    ctx->pc = 0x235F88u;
    // 0x235f88: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x235f88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x235f8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x235f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x235f90: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x235f90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x235f94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x235f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_235f98:
    // 0x235f98: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x235f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
    // 0x235f9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x235fa0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x235FA0u;
    {
        const bool branch_taken_0x235fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235fa0) {
            ctx->pc = 0x235FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235FA0u;
            // 0x235fa4: 0x86020568  lh          $v0, 0x568($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235FB8u;
            goto label_235fb8;
        }
    }
    ctx->pc = 0x235FA8u;
    // 0x235fa8: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x235fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x235fac: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x235facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x235fb0: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x235fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x235fb4: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x235fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
label_235fb8:
    // 0x235fb8: 0x5c40006f  bgtzl       $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x235FB8u;
    {
        const bool branch_taken_0x235fb8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x235fb8) {
            ctx->pc = 0x235FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235FB8u;
            // 0x235fbc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236178u;
            goto label_236178;
        }
    }
    ctx->pc = 0x235FC0u;
    // 0x235fc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x235fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x235fc4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x235fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x235fc8: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x235FC8u;
    {
        const bool branch_taken_0x235fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FC8u;
        // 0x235fcc: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fc8) {
            ctx->pc = 0x236174u;
            goto label_236174;
        }
    }
    ctx->pc = 0x235FD0u;
label_235fd0:
    // 0x235fd0: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x235fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x235fd4: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x235fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x235fd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x235FD8u;
    {
        const bool branch_taken_0x235fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FD8u;
        // 0x235fdc: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fd8) {
            ctx->pc = 0x235FECu;
            goto label_235fec;
        }
    }
    ctx->pc = 0x235FE0u;
    // 0x235fe0: 0x28620250  slti        $v0, $v1, 0x250
    ctx->pc = 0x235fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)592) ? 1 : 0);
    // 0x235fe4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x235FE4u;
    {
        const bool branch_taken_0x235fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235fe4) {
            ctx->pc = 0x235FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235FE4u;
            // 0x235fe8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235FFCu;
            goto label_235ffc;
        }
    }
    ctx->pc = 0x235FECu;
label_235fec:
    // 0x235fec: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x235fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x235ff0: 0x8c430c70  lw          $v1, 0xC70($v0)
    ctx->pc = 0x235ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3184)));
    // 0x235ff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x235FF4u;
    {
        const bool branch_taken_0x235ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FF4u;
        // 0x235ff8: 0x8c440c74  lw          $a0, 0xC74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ff4) {
            ctx->pc = 0x236004u;
            goto label_236004;
        }
    }
    ctx->pc = 0x235FFCu;
label_235ffc:
    // 0x235ffc: 0x8c431a6c  lw          $v1, 0x1A6C($v0)
    ctx->pc = 0x235ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6764)));
    // 0x236000: 0x8c441a70  lw          $a0, 0x1A70($v0)
    ctx->pc = 0x236000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_236004:
    // 0x236004: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x236004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x236008: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x236008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23600c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23600cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x236010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236014: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x236014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x236018: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x236018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23601c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23601Cu;
    SET_GPR_U32(ctx, 31, 0x236024u);
    ctx->pc = 0x236020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23601Cu;
    // 0x236020: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23601Cu, 0x236024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236024u;
label_236024:
    // 0x236024: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x236024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x236028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23602c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23602cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_236030:
    // 0x236030: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x236030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x236034: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x236034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236038: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x236038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x23603c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x23603Cu;
    SET_GPR_U32(ctx, 31, 0x236044u);
    ctx->pc = 0x236040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23603Cu;
    // 0x236040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x23603Cu, 0x236044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236044u;
label_236044:
    // 0x236044: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x236044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x236048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x236048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23604c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23604cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236050: 0xc055f06  jal         func_157C18
    ctx->pc = 0x236050u;
    SET_GPR_U32(ctx, 31, 0x236058u);
    ctx->pc = 0x236054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236050u;
    // 0x236054: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x236050u, 0x236058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236058u;
label_236058:
    // 0x236058: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236058u;
    {
        const bool branch_taken_0x236058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236058u;
        // 0x23605c: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236058) {
            ctx->pc = 0x236070u;
            goto label_236070;
        }
    }
    ctx->pc = 0x236060u;
    // 0x236060: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x236060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x236064: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x236064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x236068: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x236068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x23606c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23606cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_236070:
    // 0x236070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x236074: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x236074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23607c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23607Cu;
    SET_GPR_U32(ctx, 31, 0x236084u);
    ctx->pc = 0x236080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23607Cu;
    // 0x236080: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23607Cu, 0x236084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236084u;
label_236084:
    // 0x236084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236088: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x236088u;
    SET_GPR_U32(ctx, 31, 0x236090u);
    ctx->pc = 0x23608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236088u;
    // 0x23608c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x236088u, 0x236090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236090u;
label_236090:
    // 0x236090: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x236090u;
    {
        const bool branch_taken_0x236090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236090u;
        // 0x236094: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236090) {
            ctx->pc = 0x236178u;
            goto label_236178;
        }
    }
    ctx->pc = 0x236098u;
label_236098:
    // 0x236098: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x236098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x23609c: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x23609cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x2360a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2360A0u;
    {
        const bool branch_taken_0x2360a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2360A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360A0u;
        // 0x2360a4: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360a0) {
            ctx->pc = 0x2360B4u;
            goto label_2360b4;
        }
    }
    ctx->pc = 0x2360A8u;
    // 0x2360a8: 0x28620250  slti        $v0, $v1, 0x250
    ctx->pc = 0x2360a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)592) ? 1 : 0);
    // 0x2360ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2360ACu;
    {
        const bool branch_taken_0x2360ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2360ac) {
            ctx->pc = 0x2360B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2360ACu;
            // 0x2360b0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2360C4u;
            goto label_2360c4;
        }
    }
    ctx->pc = 0x2360B4u;
label_2360b4:
    // 0x2360b4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2360b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2360b8: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x2360b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x2360bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2360BCu;
    {
        const bool branch_taken_0x2360bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2360C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360BCu;
        // 0x2360c0: 0x8c440c7c  lw          $a0, 0xC7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360bc) {
            ctx->pc = 0x2360CCu;
            goto label_2360cc;
        }
    }
    ctx->pc = 0x2360C4u;
label_2360c4:
    // 0x2360c4: 0x8c431a74  lw          $v1, 0x1A74($v0)
    ctx->pc = 0x2360c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6772)));
    // 0x2360c8: 0x8c441a78  lw          $a0, 0x1A78($v0)
    ctx->pc = 0x2360c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6776)));
label_2360cc:
    // 0x2360cc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2360ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2360d0: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2360d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2360d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2360d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2360d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2360d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2360dc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2360dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2360e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2360e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2360e4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2360E4u;
    SET_GPR_U32(ctx, 31, 0x2360ECu);
    ctx->pc = 0x2360E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360E4u;
    // 0x2360e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2360E4u, 0x2360ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360ECu;
label_2360ec:
    // 0x2360ec: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2360ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2360f0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2360f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2360f4: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x2360f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x2360f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2360f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2360fc: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2360fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_236100:
    // 0x236100: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x236100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x236104: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x236104u;
    {
        const bool branch_taken_0x236104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236104u;
        // 0x236108: 0x96030568  lhu         $v1, 0x568($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236104) {
            ctx->pc = 0x236138u;
            goto label_236138;
        }
    }
    ctx->pc = 0x23610Cu;
    // 0x23610c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x23610cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x236110: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x236110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x236114: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x236114u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x236118: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x236118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x23611c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23611cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236120: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x236120u;
    SET_GPR_U32(ctx, 31, 0x236128u);
    ctx->pc = 0x236124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236120u;
    // 0x236124: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x236120u, 0x236128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236128u;
label_236128:
    // 0x236128: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x236128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x23612c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23612cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x236130: 0x0  nop
    ctx->pc = 0x236130u;
    // NOP
    // 0x236134: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x236134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_236138:
    // 0x236138: 0xc055f06  jal         func_157C18
    ctx->pc = 0x236138u;
    SET_GPR_U32(ctx, 31, 0x236140u);
    ctx->pc = 0x23613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236138u;
    // 0x23613c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x236138u, 0x236140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236140u;
label_236140:
    // 0x236140: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x236140u;
    {
        const bool branch_taken_0x236140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236140u;
        // 0x236144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236140) {
            ctx->pc = 0x236158u;
            goto label_236158;
        }
    }
    ctx->pc = 0x236148u;
    // 0x236148: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x236148u;
    SET_GPR_U32(ctx, 31, 0x236150u);
    ctx->pc = 0x23614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236148u;
    // 0x23614c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x236148u, 0x236150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236150u;
label_236150:
    // 0x236150: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x236150u;
    {
        const bool branch_taken_0x236150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236150u;
        // 0x236154: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236150) {
            ctx->pc = 0x236178u;
            goto label_236178;
        }
    }
    ctx->pc = 0x236158u;
label_236158:
    // 0x236158: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x236158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23615c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23615cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x236160: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x236160u;
    SET_GPR_U32(ctx, 31, 0x236168u);
    ctx->pc = 0x236164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236160u;
    // 0x236164: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x236160u, 0x236168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236168u;
label_236168:
    // 0x236168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23616c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23616Cu;
    SET_GPR_U32(ctx, 31, 0x236174u);
    ctx->pc = 0x236170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23616Cu;
    // 0x236170: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23616Cu, 0x236174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236174u;
label_236174:
    // 0x236174: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x236174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_236178:
    // 0x236178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x236178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23617c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23617cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236180: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x236180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x236184: 0x3e00008  jr          $ra
    ctx->pc = 0x236184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236184u;
        // 0x236188: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23618Cu;
    // 0x23618c: 0x0  nop
    ctx->pc = 0x23618cu;
    // NOP
    ctx->pc = 0x236190u;
}
