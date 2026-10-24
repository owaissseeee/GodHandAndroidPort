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

// Function: func_002380D0
// Address: 0x2380d0 - 0x2383d0
void func_002380D0_0x2380d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002380D0_0x2380d0");
#endif

    switch (ctx->pc) {
        case 0x2380ecu: goto label_2380ec;
        case 0x238104u: goto label_238104;
        case 0x238170u: goto label_238170;
        case 0x238184u: goto label_238184;
        case 0x238230u: goto label_238230;
        case 0x23825cu: goto label_23825c;
        case 0x238268u: goto label_238268;
        case 0x238288u: goto label_238288;
        case 0x238330u: goto label_238330;
        case 0x238384u: goto label_238384;
        case 0x238394u: goto label_238394;
        case 0x2383a8u: goto label_2383a8;
        case 0x2383b4u: goto label_2383b4;
        default: break;
    }

    ctx->pc = 0x2380d0u;

    // 0x2380d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2380d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2380d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2380d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2380d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2380d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2380dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2380e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2380e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2380e4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2380E4u;
    SET_GPR_U32(ctx, 31, 0x2380ECu);
    ctx->pc = 0x2380E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380E4u;
    // 0x2380e8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2380E4u, 0x2380ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380ECu;
label_2380ec:
    // 0x2380ec: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2380ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2380f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2380f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380f4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x2380f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x2380f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2380f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380fc: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2380FCu;
    SET_GPR_U32(ctx, 31, 0x238104u);
    ctx->pc = 0x238100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380FCu;
    // 0x238100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2380FCu, 0x238104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238104u;
label_238104:
    // 0x238104: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x238104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x238108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23810c: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x23810Cu;
    {
        const bool branch_taken_0x23810c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x238110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23810Cu;
        // 0x238110: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23810c) {
            ctx->pc = 0x2381F0u;
            goto label_2381f0;
        }
    }
    ctx->pc = 0x238114u;
    // 0x238114: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x238114u;
    {
        const bool branch_taken_0x238114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238114) {
            ctx->pc = 0x238118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238114u;
            // 0x238118: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23812Cu;
            goto label_23812c;
        }
    }
    ctx->pc = 0x23811Cu;
    // 0x23811c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23811Cu;
    {
        const bool branch_taken_0x23811c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23811c) {
            ctx->pc = 0x238120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23811Cu;
            // 0x238120: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238144u;
            goto label_238144;
        }
    }
    ctx->pc = 0x238124u;
    // 0x238124: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x238124u;
    {
        const bool branch_taken_0x238124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238124u;
        // 0x238128: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238124) {
            ctx->pc = 0x2383B8u;
            goto label_2383b8;
        }
    }
    ctx->pc = 0x23812Cu;
label_23812c:
    // 0x23812c: 0x10620074  beq         $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x23812Cu;
    {
        const bool branch_taken_0x23812c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x238130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23812Cu;
        // 0x238130: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23812c) {
            ctx->pc = 0x238300u;
            goto label_238300;
        }
    }
    ctx->pc = 0x238134u;
    // 0x238134: 0x50620084  beql        $v1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x238134u;
    {
        const bool branch_taken_0x238134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x238134) {
            ctx->pc = 0x238138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238134u;
            // 0x238138: 0x8602056e  lh          $v0, 0x56E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238348u;
            goto label_238348;
        }
    }
    ctx->pc = 0x23813Cu;
    // 0x23813c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x23813Cu;
    {
        const bool branch_taken_0x23813c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23813Cu;
        // 0x238140: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23813c) {
            ctx->pc = 0x2383B8u;
            goto label_2383b8;
        }
    }
    ctx->pc = 0x238144u;
label_238144:
    // 0x238144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238148: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x238148u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23814c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23814cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238150: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x238150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x238154: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x238154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238158: 0x8c4514a0  lw          $a1, 0x14A0($v0)
    ctx->pc = 0x238158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5280)));
    // 0x23815c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23815cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238160: 0x8c4614a4  lw          $a2, 0x14A4($v0)
    ctx->pc = 0x238160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5284)));
    // 0x238164: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x238164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238168: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x238168u;
    SET_GPR_U32(ctx, 31, 0x238170u);
    ctx->pc = 0x23816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238168u;
    // 0x23816c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x238168u, 0x238170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238170u;
label_238170:
    // 0x238170: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x238170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x238174: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x238174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x238178: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x238178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x23817c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23817Cu;
    SET_GPR_U32(ctx, 31, 0x238184u);
    ctx->pc = 0x238180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23817Cu;
    // 0x238180: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23817Cu, 0x238184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238184u;
label_238184:
    // 0x238184: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x238184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x238188: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x238188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x23818c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23818Cu;
    {
        const bool branch_taken_0x23818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23818Cu;
        // 0x238190: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23818c) {
            ctx->pc = 0x2381ACu;
            goto label_2381ac;
        }
    }
    ctx->pc = 0x238194u;
    // 0x238194: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x238194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x238198: 0x2442a340  addiu       $v0, $v0, -0x5CC0
    ctx->pc = 0x238198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943552));
    // 0x23819c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23819cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2381a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2381a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2381a4: 0x800008  jr          $a0
    ctx->pc = 0x2381A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2381ACu: goto label_2381ac;
            case 0x2381B4u: goto label_2381b4;
            case 0x2381BCu: goto label_2381bc;
            case 0x2381C4u: goto label_2381c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2381A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2381ACu;
label_2381ac:
    // 0x2381ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2381ACu;
    {
        const bool branch_taken_0x2381ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381ACu;
        // 0x2381b0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381ac) {
            ctx->pc = 0x2381C8u;
            goto label_2381c8;
        }
    }
    ctx->pc = 0x2381B4u;
label_2381b4:
    // 0x2381b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2381B4u;
    {
        const bool branch_taken_0x2381b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381B4u;
        // 0x2381b8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381b4) {
            ctx->pc = 0x2381C8u;
            goto label_2381c8;
        }
    }
    ctx->pc = 0x2381BCu;
label_2381bc:
    // 0x2381bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2381BCu;
    {
        const bool branch_taken_0x2381bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381BCu;
        // 0x2381c0: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381bc) {
            ctx->pc = 0x2381C8u;
            goto label_2381c8;
        }
    }
    ctx->pc = 0x2381C4u;
label_2381c4:
    // 0x2381c4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2381c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2381c8:
    // 0x2381c8: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2381c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x2381cc: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2381ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2381d0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2381d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2381d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2381D4u;
    {
        const bool branch_taken_0x2381d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381D4u;
        // 0x2381d8: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381d4) {
            ctx->pc = 0x2381E0u;
            goto label_2381e0;
        }
    }
    ctx->pc = 0x2381DCu;
    // 0x2381dc: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2381dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_2381e0:
    // 0x2381e0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2381e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2381e4: 0xa600056a  sh          $zero, 0x56A($s0)
    ctx->pc = 0x2381e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
    // 0x2381e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2381e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2381ec: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2381ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2381f0:
    // 0x2381f0: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x2381f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x2381f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2381F4u;
    {
        const bool branch_taken_0x2381f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381F4u;
        // 0x2381f8: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381f4) {
            ctx->pc = 0x23821Cu;
            goto label_23821c;
        }
    }
    ctx->pc = 0x2381FCu;
    // 0x2381fc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2381fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x238200: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x238200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x238204: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x238204u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x238208: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x238208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x23820c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x23820cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x238210: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x238210u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238214: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x238214u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x238218: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x238218u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_23821c:
    // 0x23821c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23821cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x238220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238228: 0xc055f06  jal         func_157C18
    ctx->pc = 0x238228u;
    SET_GPR_U32(ctx, 31, 0x238230u);
    ctx->pc = 0x23822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238228u;
    // 0x23822c: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x238228u, 0x238230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238230u;
label_238230:
    // 0x238230: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238230u;
    {
        const bool branch_taken_0x238230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238230u;
        // 0x238234: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238230) {
            ctx->pc = 0x238248u;
            goto label_238248;
        }
    }
    ctx->pc = 0x238238u;
    // 0x238238: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x238238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23823c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x23823cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x238240: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x238240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x238244: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x238244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_238248:
    // 0x238248: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23824c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23824cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x238250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238254: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x238254u;
    SET_GPR_U32(ctx, 31, 0x23825Cu);
    ctx->pc = 0x238258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238254u;
    // 0x238258: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x238254u, 0x23825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23825Cu;
label_23825c:
    // 0x23825c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23825cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x238260: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x238260u;
    SET_GPR_U32(ctx, 31, 0x238268u);
    ctx->pc = 0x238264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238260u;
    // 0x238264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x238260u, 0x238268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238268u;
label_238268:
    // 0x238268: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x238268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
    // 0x23826c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23826Cu;
    {
        const bool branch_taken_0x23826c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x238270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23826Cu;
        // 0x238270: 0x9603056a  lhu         $v1, 0x56A($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23826c) {
            ctx->pc = 0x238280u;
            goto label_238280;
        }
    }
    ctx->pc = 0x238274u;
    // 0x238274: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x238274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x238278: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x238278u;
    {
        const bool branch_taken_0x238278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238278u;
        // 0x23827c: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238278) {
            ctx->pc = 0x2382CCu;
            goto label_2382cc;
        }
    }
    ctx->pc = 0x238280u;
label_238280:
    // 0x238280: 0xc0b6ddc  jal         func_2DB770
    ctx->pc = 0x238280u;
    SET_GPR_U32(ctx, 31, 0x238288u);
    ctx->pc = 0x2DB770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB770u, 0x238280u, 0x238288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238288u;
label_238288:
    // 0x238288: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x238288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x23828c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x23828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x238290: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x238290u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7474A8u));
    // 0x238294: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x238294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x238298: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x238298u;
    {
        const bool branch_taken_0x238298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238298) {
            ctx->pc = 0x23829Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238298u;
            // 0x23829c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2382B0u;
            goto label_2382b0;
        }
    }
    ctx->pc = 0x2382A0u;
    // 0x2382a0: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x2382a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x2382a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2382a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2382a8: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2382a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x2382ac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2382acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2382b0:
    // 0x2382b0: 0x3c0300f0  lui         $v1, 0xF0
    ctx->pc = 0x2382b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)240 << 16));
    // 0x2382b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2382b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2382b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2382B8u;
    {
        const bool branch_taken_0x2382b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2382b8) {
            ctx->pc = 0x2382BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2382B8u;
            // 0x2382bc: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2382D0u;
            goto label_2382d0;
        }
    }
    ctx->pc = 0x2382C0u;
    // 0x2382c0: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x2382c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x2382c4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2382c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2382c8: 0xa6020568  sh          $v0, 0x568($s0)
    ctx->pc = 0x2382c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
label_2382cc:
    // 0x2382cc: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x2382ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_2382d0:
    // 0x2382d0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2382d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2382d4: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x2382D4u;
    {
        const bool branch_taken_0x2382d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2382d4) {
            ctx->pc = 0x2382D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2382D4u;
            // 0x2382d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2383B8u;
            goto label_2383b8;
        }
    }
    ctx->pc = 0x2382DCu;
    // 0x2382dc: 0x86020568  lh          $v0, 0x568($s0)
    ctx->pc = 0x2382dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x2382e0: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2382E0u;
    {
        const bool branch_taken_0x2382e0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2382E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382E0u;
        // 0x2382e4: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382e0) {
            ctx->pc = 0x2382F8u;
            goto label_2382f8;
        }
    }
    ctx->pc = 0x2382E8u;
    // 0x2382e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2382e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2382ec: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2382ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2382f0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2382f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2382f4: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x2382f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2382f8:
    // 0x2382f8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2382F8u;
    {
        const bool branch_taken_0x2382f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382F8u;
        // 0x2382fc: 0xa602056a  sh          $v0, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382f8) {
            ctx->pc = 0x2383B4u;
            goto label_2383b4;
        }
    }
    ctx->pc = 0x238300u;
label_238300:
    // 0x238300: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x238300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x238304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238308: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x238308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23830c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23830cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238310: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x238310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x238314: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x238314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238318: 0x8c4514a8  lw          $a1, 0x14A8($v0)
    ctx->pc = 0x238318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5288)));
    // 0x23831c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23831cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238320: 0x8c4614ac  lw          $a2, 0x14AC($v0)
    ctx->pc = 0x238320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5292)));
    // 0x238324: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x238324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238328: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x238328u;
    SET_GPR_U32(ctx, 31, 0x238330u);
    ctx->pc = 0x23832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238328u;
    // 0x23832c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x238328u, 0x238330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238330u;
label_238330:
    // 0x238330: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x238330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x238334: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x238334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x238338: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x238338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x23833c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x238340: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x238340u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x238344: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x238344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_238348:
    // 0x238348: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x238348u;
    {
        const bool branch_taken_0x238348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238348u;
        // 0x23834c: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238348) {
            ctx->pc = 0x238370u;
            goto label_238370;
        }
    }
    ctx->pc = 0x238350u;
    // 0x238350: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x238350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x238354: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x238354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x238358: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x238358u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x23835c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x23835cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x238360: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x238360u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238364: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x238364u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x238368: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x238368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x23836c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x23836cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_238370:
    // 0x238370: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x238370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x238374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23837c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23837Cu;
    SET_GPR_U32(ctx, 31, 0x238384u);
    ctx->pc = 0x238380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23837Cu;
    // 0x238380: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23837Cu, 0x238384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238384u;
label_238384:
    // 0x238384: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238384u;
    {
        const bool branch_taken_0x238384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238384) {
            ctx->pc = 0x238394u;
            goto label_238394;
        }
    }
    ctx->pc = 0x23838Cu;
    // 0x23838c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23838Cu;
    SET_GPR_U32(ctx, 31, 0x238394u);
    ctx->pc = 0x238390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23838Cu;
    // 0x238390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23838Cu, 0x238394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238394u;
label_238394:
    // 0x238394: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x238394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x238398: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x238398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23839c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23839cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383a0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2383A0u;
    SET_GPR_U32(ctx, 31, 0x2383A8u);
    ctx->pc = 0x2383A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383A0u;
    // 0x2383a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2383A0u, 0x2383A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383A8u;
label_2383a8:
    // 0x2383a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2383a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383ac: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2383ACu;
    SET_GPR_U32(ctx, 31, 0x2383B4u);
    ctx->pc = 0x2383B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383ACu;
    // 0x2383b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2383ACu, 0x2383B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383B4u;
label_2383b4:
    // 0x2383b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2383b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2383b8:
    // 0x2383b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2383b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2383bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2383bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2383c0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2383c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2383c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2383C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2383C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383C4u;
        // 0x2383c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2383C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2383CCu;
    // 0x2383cc: 0x0  nop
    ctx->pc = 0x2383ccu;
    // NOP
    ctx->pc = 0x2383d0u;
}
