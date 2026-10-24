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

// Function: func_00244FC8
// Address: 0x244fc8 - 0x245538
void func_00244FC8_0x244fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00244FC8_0x244fc8");
#endif

    switch (ctx->pc) {
        case 0x244ff8u: goto label_244ff8;
        case 0x2450d0u: goto label_2450d0;
        case 0x2450f0u: goto label_2450f0;
        case 0x2450f8u: goto label_2450f8;
        case 0x245128u: goto label_245128;
        case 0x24513cu: goto label_24513c;
        case 0x245148u: goto label_245148;
        case 0x245170u: goto label_245170;
        case 0x24517cu: goto label_24517c;
        case 0x24518cu: goto label_24518c;
        case 0x24520cu: goto label_24520c;
        case 0x245214u: goto label_245214;
        case 0x24527cu: goto label_24527c;
        case 0x245290u: goto label_245290;
        case 0x2452acu: goto label_2452ac;
        case 0x2452b4u: goto label_2452b4;
        case 0x2452c0u: goto label_2452c0;
        case 0x2452dcu: goto label_2452dc;
        case 0x2452e8u: goto label_2452e8;
        case 0x245338u: goto label_245338;
        case 0x2453b8u: goto label_2453b8;
        case 0x2453d8u: goto label_2453d8;
        case 0x245430u: goto label_245430;
        case 0x24543cu: goto label_24543c;
        case 0x245454u: goto label_245454;
        case 0x2454d4u: goto label_2454d4;
        case 0x2454e8u: goto label_2454e8;
        case 0x2454f8u: goto label_2454f8;
        case 0x24550cu: goto label_24550c;
        case 0x245518u: goto label_245518;
        default: break;
    }

    ctx->pc = 0x244fc8u;

    // 0x244fc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x244fcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x244fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x244fd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x244fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244fd8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x244fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x244fdc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x244fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x244fe0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x244fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x244fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244fe8: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x244fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x244fec: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x244fecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x244ff0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x244FF0u;
    SET_GPR_U32(ctx, 31, 0x244FF8u);
    ctx->pc = 0x244FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244FF0u;
    // 0x244ff4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x244FF0u, 0x244FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244FF8u;
label_244ff8:
    // 0x244ff8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x244ff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x244ffc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x244ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x245000: 0x10400145  beqz        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x245000u;
    {
        const bool branch_taken_0x245000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245000u;
        // 0x245004: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245000) {
            ctx->pc = 0x245518u;
            goto label_245518;
        }
    }
    ctx->pc = 0x245008u;
    // 0x245008: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24500c: 0x2442c950  addiu       $v0, $v0, -0x36B0
    ctx->pc = 0x24500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953296));
    // 0x245010: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245014: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245018: 0x800008  jr          $a0
    ctx->pc = 0x245018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245020u: goto label_245020;
            case 0x245104u: goto label_245104;
            case 0x245184u: goto label_245184;
            case 0x24524Cu: goto label_24524c;
            case 0x245330u: goto label_245330;
            case 0x2453C4u: goto label_2453c4;
            case 0x24544Cu: goto label_24544c;
            case 0x2454E0u: goto label_2454e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245018u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245020u;
label_245020:
    // 0x245020: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x245020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x245024: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x245024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x245028: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x245028u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x24502c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24502Cu;
    {
        const bool branch_taken_0x24502c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x245030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24502Cu;
        // 0x245030: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24502c) {
            ctx->pc = 0x24504Cu;
            goto label_24504c;
        }
    }
    ctx->pc = 0x245034u;
    // 0x245034: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x245034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x245038: 0x2442c970  addiu       $v0, $v0, -0x3690
    ctx->pc = 0x245038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953328));
    // 0x24503c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24503cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245040: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245044: 0x800008  jr          $a0
    ctx->pc = 0x245044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24504Cu: goto label_24504c;
            case 0x245074u: goto label_245074;
            case 0x24509Cu: goto label_24509c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245044u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24504Cu;
label_24504c:
    // 0x24504c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x24504cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x245050: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x245050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x245054: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245054u;
    {
        const bool branch_taken_0x245054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245054u;
        // 0x245058: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245054) {
            ctx->pc = 0x245068u;
            goto label_245068;
        }
    }
    ctx->pc = 0x24505Cu;
    // 0x24505c: 0x8c430d80  lw          $v1, 0xD80($v0)
    ctx->pc = 0x24505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3456)));
    // 0x245060: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x245060u;
    {
        const bool branch_taken_0x245060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245060u;
        // 0x245064: 0x8c440d84  lw          $a0, 0xD84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245060) {
            ctx->pc = 0x2450C0u;
            goto label_2450c0;
        }
    }
    ctx->pc = 0x245068u;
label_245068:
    // 0x245068: 0x8c430d88  lw          $v1, 0xD88($v0)
    ctx->pc = 0x245068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3464)));
    // 0x24506c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24506Cu;
    {
        const bool branch_taken_0x24506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24506Cu;
        // 0x245070: 0x8c440d8c  lw          $a0, 0xD8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24506c) {
            ctx->pc = 0x2450C0u;
            goto label_2450c0;
        }
    }
    ctx->pc = 0x245074u;
label_245074:
    // 0x245074: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x245074u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x245078: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x245078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x24507c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24507Cu;
    {
        const bool branch_taken_0x24507c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24507Cu;
        // 0x245080: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24507c) {
            ctx->pc = 0x245090u;
            goto label_245090;
        }
    }
    ctx->pc = 0x245084u;
    // 0x245084: 0x8c4308a4  lw          $v1, 0x8A4($v0)
    ctx->pc = 0x245084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2212)));
    // 0x245088: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x245088u;
    {
        const bool branch_taken_0x245088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245088u;
        // 0x24508c: 0x8c4408a8  lw          $a0, 0x8A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245088) {
            ctx->pc = 0x2450C0u;
            goto label_2450c0;
        }
    }
    ctx->pc = 0x245090u;
label_245090:
    // 0x245090: 0x8c4308ac  lw          $v1, 0x8AC($v0)
    ctx->pc = 0x245090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2220)));
    // 0x245094: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x245094u;
    {
        const bool branch_taken_0x245094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245094u;
        // 0x245098: 0x8c4408b0  lw          $a0, 0x8B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245094) {
            ctx->pc = 0x2450C0u;
            goto label_2450c0;
        }
    }
    ctx->pc = 0x24509Cu;
label_24509c:
    // 0x24509c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x24509cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2450a0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2450a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2450a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2450A4u;
    {
        const bool branch_taken_0x2450a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450A4u;
        // 0x2450a8: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450a4) {
            ctx->pc = 0x2450B8u;
            goto label_2450b8;
        }
    }
    ctx->pc = 0x2450ACu;
    // 0x2450ac: 0x8c43189c  lw          $v1, 0x189C($v0)
    ctx->pc = 0x2450acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6300)));
    // 0x2450b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2450B0u;
    {
        const bool branch_taken_0x2450b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2450B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450B0u;
        // 0x2450b4: 0x8c4418a0  lw          $a0, 0x18A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450b0) {
            ctx->pc = 0x2450C0u;
            goto label_2450c0;
        }
    }
    ctx->pc = 0x2450B8u;
label_2450b8:
    // 0x2450b8: 0x8c4318a4  lw          $v1, 0x18A4($v0)
    ctx->pc = 0x2450b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6308)));
    // 0x2450bc: 0x8c4418a8  lw          $a0, 0x18A8($v0)
    ctx->pc = 0x2450bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6312)));
label_2450c0:
    // 0x2450c0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2450c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2450c4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2450c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2450c8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2450C8u;
    SET_GPR_U32(ctx, 31, 0x2450D0u);
    ctx->pc = 0x2450CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2450C8u;
    // 0x2450cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2450C8u, 0x2450D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450D0u;
label_2450d0:
    // 0x2450d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2450d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2450d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2450d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2450d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450dc: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2450dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2450e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2450e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450e4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2450e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2450e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2450E8u;
    SET_GPR_U32(ctx, 31, 0x2450F0u);
    ctx->pc = 0x2450ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2450E8u;
    // 0x2450ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2450E8u, 0x2450F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450F0u;
label_2450f0:
    // 0x2450f0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2450F0u;
    SET_GPR_U32(ctx, 31, 0x2450F8u);
    ctx->pc = 0x2450F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2450F0u;
    // 0x2450f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2450F0u, 0x2450F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450F8u;
label_2450f8:
    // 0x2450f8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x2450f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2450fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2450fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x245100: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x245100u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_245104:
    // 0x245104: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x245104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245108: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x245108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x24510c: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x24510cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x245110: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x245110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x245114: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x245114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x245118: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x245118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24511c: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x24511cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x245120: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x245120u;
    SET_GPR_U32(ctx, 31, 0x245128u);
    ctx->pc = 0x245124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245120u;
    // 0x245124: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x245120u, 0x245128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245128u;
label_245128:
    // 0x245128: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x245128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24512c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24512cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x245130: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x245130u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x245134: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x245134u;
    SET_GPR_U32(ctx, 31, 0x24513Cu);
    ctx->pc = 0x245138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245134u;
    // 0x245138: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x245134u, 0x24513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24513Cu;
label_24513c:
    // 0x24513c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x24513cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x245140: 0xc055f06  jal         func_157C18
    ctx->pc = 0x245140u;
    SET_GPR_U32(ctx, 31, 0x245148u);
    ctx->pc = 0x245144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245140u;
    // 0x245144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x245140u, 0x245148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245148u;
label_245148:
    // 0x245148: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245148u;
    {
        const bool branch_taken_0x245148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245148) {
            ctx->pc = 0x24515Cu;
            goto label_24515c;
        }
    }
    ctx->pc = 0x245150u;
    // 0x245150: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x245150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x245154: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245158: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x245158u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_24515c:
    // 0x24515c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24515cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x245160: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x245160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x245164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245168: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x245168u;
    SET_GPR_U32(ctx, 31, 0x245170u);
    ctx->pc = 0x24516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245168u;
    // 0x24516c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x245168u, 0x245170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245170u;
label_245170:
    // 0x245170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245174: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x245174u;
    SET_GPR_U32(ctx, 31, 0x24517Cu);
    ctx->pc = 0x245178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245174u;
    // 0x245178: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x245174u, 0x24517Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24517Cu;
label_24517c:
    // 0x24517c: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x24517Cu;
    {
        const bool branch_taken_0x24517c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24517Cu;
        // 0x245180: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24517c) {
            ctx->pc = 0x24551Cu;
            goto label_24551c;
        }
    }
    ctx->pc = 0x245184u;
label_245184:
    // 0x245184: 0xc09d91a  jal         func_276468
    ctx->pc = 0x245184u;
    SET_GPR_U32(ctx, 31, 0x24518Cu);
    ctx->pc = 0x245188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245184u;
    // 0x245188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x245184u, 0x24518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24518Cu;
label_24518c:
    // 0x24518c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x24518cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x245190: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x245190u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x245194: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x245194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x245198: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x245198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x24519c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24519Cu;
    {
        const bool branch_taken_0x24519c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24519Cu;
        // 0x2451a0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24519c) {
            ctx->pc = 0x2451BCu;
            goto label_2451bc;
        }
    }
    ctx->pc = 0x2451A4u;
    // 0x2451a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2451a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2451a8: 0x2442cb50  addiu       $v0, $v0, -0x34B0
    ctx->pc = 0x2451a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953808));
    // 0x2451ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2451acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2451b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2451b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2451b4: 0x800008  jr          $a0
    ctx->pc = 0x2451B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2451BCu: goto label_2451bc;
            case 0x2451CCu: goto label_2451cc;
            case 0x2451DCu: goto label_2451dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2451B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2451BCu;
label_2451bc:
    // 0x2451bc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2451bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2451c0: 0x8c430d90  lw          $v1, 0xD90($v0)
    ctx->pc = 0x2451c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3472)));
    // 0x2451c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2451C4u;
    {
        const bool branch_taken_0x2451c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451C4u;
        // 0x2451c8: 0x8c440d94  lw          $a0, 0xD94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451c4) {
            ctx->pc = 0x2451E8u;
            goto label_2451e8;
        }
    }
    ctx->pc = 0x2451CCu;
label_2451cc:
    // 0x2451cc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2451ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2451d0: 0x8c4308b4  lw          $v1, 0x8B4($v0)
    ctx->pc = 0x2451d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2228)));
    // 0x2451d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2451D4u;
    {
        const bool branch_taken_0x2451d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451D4u;
        // 0x2451d8: 0x8c4408b8  lw          $a0, 0x8B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451d4) {
            ctx->pc = 0x2451E8u;
            goto label_2451e8;
        }
    }
    ctx->pc = 0x2451DCu;
label_2451dc:
    // 0x2451dc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2451dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2451e0: 0x8c4318ac  lw          $v1, 0x18AC($v0)
    ctx->pc = 0x2451e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6316)));
    // 0x2451e4: 0x8c4418b0  lw          $a0, 0x18B0($v0)
    ctx->pc = 0x2451e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6320)));
label_2451e8:
    // 0x2451e8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2451e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2451ec: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2451ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2451f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2451f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2451f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2451f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2451f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2451fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245200: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x245200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x245204: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x245204u;
    SET_GPR_U32(ctx, 31, 0x24520Cu);
    ctx->pc = 0x245208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245204u;
    // 0x245208: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x245204u, 0x24520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24520Cu;
label_24520c:
    // 0x24520c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24520Cu;
    SET_GPR_U32(ctx, 31, 0x245214u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24520Cu, 0x245214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245214u;
label_245214:
    // 0x245214: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x245214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x245218: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x245218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x24521c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x24521cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x245220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245224: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x245224u;
    {
        const bool branch_taken_0x245224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245224) {
            ctx->pc = 0x245228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245224u;
            // 0x245228: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x245240u;
            goto label_245240;
        }
    }
    ctx->pc = 0x24522Cu;
    // 0x24522c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x24522cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x245230: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x245230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x245234: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245238: 0x0  nop
    ctx->pc = 0x245238u;
    // NOP
    // 0x24523c: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x24523cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
label_245240:
    // 0x245240: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x245240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x245244: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x245244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x245248: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x245248u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_24524c:
    // 0x24524c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x24524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245250: 0x26300580  addiu       $s0, $s1, 0x580
    ctx->pc = 0x245250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x245254: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x245254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x245258: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x245258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x24525c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x24525cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x245260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245264: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x245264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x245268: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x245268u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x24526c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24526cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x245270: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x245270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x245274: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x245274u;
    SET_GPR_U32(ctx, 31, 0x24527Cu);
    ctx->pc = 0x245278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245274u;
    // 0x245278: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x245274u, 0x24527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24527Cu;
label_24527c:
    // 0x24527c: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x24527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245280: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x245280u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x245284: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x245284u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x245288: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x245288u;
    SET_GPR_U32(ctx, 31, 0x245290u);
    ctx->pc = 0x24528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245288u;
    // 0x24528c: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x245288u, 0x245290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245290u;
label_245290:
    // 0x245290: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x245290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245298: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x245298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x24529c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x24529cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2452a0: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x2452a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x2452a4: 0xc0560a2  jal         func_158288
    ctx->pc = 0x2452A4u;
    SET_GPR_U32(ctx, 31, 0x2452ACu);
    ctx->pc = 0x2452A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2452A4u;
    // 0x2452a8: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x2452A4u, 0x2452ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2452ACu;
label_2452ac:
    // 0x2452ac: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2452ACu;
    SET_GPR_U32(ctx, 31, 0x2452B4u);
    ctx->pc = 0x2452B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2452ACu;
    // 0x2452b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2452ACu, 0x2452B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2452B4u;
label_2452b4:
    // 0x2452b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2452b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452b8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2452B8u;
    SET_GPR_U32(ctx, 31, 0x2452C0u);
    ctx->pc = 0x2452BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2452B8u;
    // 0x2452bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2452B8u, 0x2452C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2452C0u;
label_2452c0:
    // 0x2452c0: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x2452c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2452c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2452c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2452c8: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x2452c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2452cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2452ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2452d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2452d4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2452D4u;
    SET_GPR_U32(ctx, 31, 0x2452DCu);
    ctx->pc = 0x2452D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2452D4u;
    // 0x2452d8: 0xe6200338  swc1        $f0, 0x338($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2452D4u, 0x2452DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2452DCu;
label_2452dc:
    // 0x2452dc: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x2452dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2452e0: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x2452E0u;
    SET_GPR_U32(ctx, 31, 0x2452E8u);
    ctx->pc = 0x2452E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2452E0u;
    // 0x2452e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2452E0u, 0x2452E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2452E8u;
label_2452e8:
    // 0x2452e8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2452e8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2452ec: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2452ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2452f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2452f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2452f4: 0x0  nop
    ctx->pc = 0x2452f4u;
    // NOP
    // 0x2452f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2452f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2452fc: 0x0  nop
    ctx->pc = 0x2452fcu;
    // NOP
    // 0x245300: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x245300u;
    {
        const bool branch_taken_0x245300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245300u;
        // 0x245304: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245300) {
            ctx->pc = 0x245310u;
            goto label_245310;
        }
    }
    ctx->pc = 0x245308u;
    // 0x245308: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x245308u;
    {
        const bool branch_taken_0x245308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245308u;
        // 0x24530c: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245308) {
            ctx->pc = 0x245518u;
            goto label_245518;
        }
    }
    ctx->pc = 0x245310u;
label_245310:
    // 0x245310: 0xc6200598  lwc1        $f0, 0x598($s1)
    ctx->pc = 0x245310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245314: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x245314u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x245318: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x245318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24531c: 0x0  nop
    ctx->pc = 0x24531cu;
    // NOP
    // 0x245320: 0x4500007d  bc1f        . + 4 + (0x7D << 2)
    ctx->pc = 0x245320u;
    {
        const bool branch_taken_0x245320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245320u;
        // 0x245324: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245320) {
            ctx->pc = 0x245518u;
            goto label_245518;
        }
    }
    ctx->pc = 0x245328u;
    // 0x245328: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x245328u;
    {
        const bool branch_taken_0x245328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245328u;
        // 0x24532c: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245328) {
            ctx->pc = 0x245518u;
            goto label_245518;
        }
    }
    ctx->pc = 0x245330u;
label_245330:
    // 0x245330: 0xc09d91a  jal         func_276468
    ctx->pc = 0x245330u;
    SET_GPR_U32(ctx, 31, 0x245338u);
    ctx->pc = 0x245334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245330u;
    // 0x245334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x245330u, 0x245338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245338u;
label_245338:
    // 0x245338: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x245338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x24533c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24533cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x245340: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x245340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x245344: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x245344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x245348: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x245348u;
    {
        const bool branch_taken_0x245348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245348u;
        // 0x24534c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245348) {
            ctx->pc = 0x245368u;
            goto label_245368;
        }
    }
    ctx->pc = 0x245350u;
    // 0x245350: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x245354: 0x2442cd30  addiu       $v0, $v0, -0x32D0
    ctx->pc = 0x245354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954288));
    // 0x245358: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24535c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24535cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245360: 0x800008  jr          $a0
    ctx->pc = 0x245360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245368u: goto label_245368;
            case 0x245378u: goto label_245378;
            case 0x245388u: goto label_245388;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245360u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245368u;
label_245368:
    // 0x245368: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x245368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24536c: 0x8c430da0  lw          $v1, 0xDA0($v0)
    ctx->pc = 0x24536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
    // 0x245370: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x245370u;
    {
        const bool branch_taken_0x245370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245370u;
        // 0x245374: 0x8c440da4  lw          $a0, 0xDA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245370) {
            ctx->pc = 0x245394u;
            goto label_245394;
        }
    }
    ctx->pc = 0x245378u;
label_245378:
    // 0x245378: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x245378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24537c: 0x8c4308c4  lw          $v1, 0x8C4($v0)
    ctx->pc = 0x24537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2244)));
    // 0x245380: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x245380u;
    {
        const bool branch_taken_0x245380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245380u;
        // 0x245384: 0x8c4408c8  lw          $a0, 0x8C8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245380) {
            ctx->pc = 0x245394u;
            goto label_245394;
        }
    }
    ctx->pc = 0x245388u;
label_245388:
    // 0x245388: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x245388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x24538c: 0x8c4318bc  lw          $v1, 0x18BC($v0)
    ctx->pc = 0x24538cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6332)));
    // 0x245390: 0x8c4418c0  lw          $a0, 0x18C0($v0)
    ctx->pc = 0x245390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6336)));
label_245394:
    // 0x245394: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x245394u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245398: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x245398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24539c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24539cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2453a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2453a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2453a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2453a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2453a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2453a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2453ac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2453acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2453b0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2453B0u;
    SET_GPR_U32(ctx, 31, 0x2453B8u);
    ctx->pc = 0x2453B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2453B0u;
    // 0x2453b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2453B0u, 0x2453B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2453B8u;
label_2453b8:
    // 0x2453b8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2453b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2453bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2453bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2453c0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2453c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2453c4:
    // 0x2453c4: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x2453c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x2453c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2453c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2453cc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2453ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2453d0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2453D0u;
    SET_GPR_U32(ctx, 31, 0x2453D8u);
    ctx->pc = 0x2453D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2453D0u;
    // 0x2453d4: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2453D0u, 0x2453D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2453D8u;
label_2453d8:
    // 0x2453d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2453D8u;
    {
        const bool branch_taken_0x2453d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453D8u;
        // 0x2453dc: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453d8) {
            ctx->pc = 0x24541Cu;
            goto label_24541c;
        }
    }
    ctx->pc = 0x2453E0u;
    // 0x2453e0: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2453e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2453e4: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x2453e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2453e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2453e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2453ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2453ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2453f0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2453f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2453f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2453f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2453f8: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x2453f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
    // 0x2453fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2453fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245400: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x245400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245404: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x245404u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x245408: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x245408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x24540c: 0xa22502f5  sb          $a1, 0x2F5($s1)
    ctx->pc = 0x24540cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 5));
    // 0x245410: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x245410u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x245414: 0xa22502f4  sb          $a1, 0x2F4($s1)
    ctx->pc = 0x245414u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 5));
    // 0x245418: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x245418u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_24541c:
    // 0x24541c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24541cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x245420: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x245420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x245424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245428: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x245428u;
    SET_GPR_U32(ctx, 31, 0x245430u);
    ctx->pc = 0x24542Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245428u;
    // 0x24542c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x245428u, 0x245430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245430u;
label_245430:
    // 0x245430: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x245430u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x245434: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x245434u;
    SET_GPR_U32(ctx, 31, 0x24543Cu);
    ctx->pc = 0x245438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245434u;
    // 0x245438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x245434u, 0x24543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24543Cu;
label_24543c:
    // 0x24543c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x24543cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x245440: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x245440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x245444: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x245444u;
    {
        const bool branch_taken_0x245444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245444u;
        // 0x245448: 0xa62203ac  sh          $v0, 0x3AC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245444) {
            ctx->pc = 0x245518u;
            goto label_245518;
        }
    }
    ctx->pc = 0x24544Cu;
label_24544c:
    // 0x24544c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24544Cu;
    SET_GPR_U32(ctx, 31, 0x245454u);
    ctx->pc = 0x245450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24544Cu;
    // 0x245450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24544Cu, 0x245454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245454u;
label_245454:
    // 0x245454: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x245454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x245458: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x245458u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24545c: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x24545cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x245460: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x245460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x245464: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x245464u;
    {
        const bool branch_taken_0x245464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245464u;
        // 0x245468: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245464) {
            ctx->pc = 0x245484u;
            goto label_245484;
        }
    }
    ctx->pc = 0x24546Cu;
    // 0x24546c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24546cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x245470: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x245470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
    // 0x245474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245478: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24547c: 0x800008  jr          $a0
    ctx->pc = 0x24547Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245484u: goto label_245484;
            case 0x245494u: goto label_245494;
            case 0x2454A4u: goto label_2454a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24547Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245484u;
label_245484:
    // 0x245484: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x245484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x245488: 0x8c430d98  lw          $v1, 0xD98($v0)
    ctx->pc = 0x245488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3480)));
    // 0x24548c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24548Cu;
    {
        const bool branch_taken_0x24548c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24548Cu;
        // 0x245490: 0x8c440d9c  lw          $a0, 0xD9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24548c) {
            ctx->pc = 0x2454B0u;
            goto label_2454b0;
        }
    }
    ctx->pc = 0x245494u;
label_245494:
    // 0x245494: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x245494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x245498: 0x8c4308bc  lw          $v1, 0x8BC($v0)
    ctx->pc = 0x245498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2236)));
    // 0x24549c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24549Cu;
    {
        const bool branch_taken_0x24549c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2454A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24549Cu;
        // 0x2454a0: 0x8c4408c0  lw          $a0, 0x8C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24549c) {
            ctx->pc = 0x2454B0u;
            goto label_2454b0;
        }
    }
    ctx->pc = 0x2454A4u;
label_2454a4:
    // 0x2454a4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2454a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2454a8: 0x8c4318b4  lw          $v1, 0x18B4($v0)
    ctx->pc = 0x2454a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6324)));
    // 0x2454ac: 0x8c4418b8  lw          $a0, 0x18B8($v0)
    ctx->pc = 0x2454acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6328)));
label_2454b0:
    // 0x2454b0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2454b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2454b4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2454b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2454b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2454b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2454bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2454bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2454c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2454c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454c8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2454c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2454cc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2454CCu;
    SET_GPR_U32(ctx, 31, 0x2454D4u);
    ctx->pc = 0x2454D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454CCu;
    // 0x2454d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2454CCu, 0x2454D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454D4u;
label_2454d4:
    // 0x2454d4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2454d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2454d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2454d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2454dc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2454dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2454e0:
    // 0x2454e0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2454E0u;
    SET_GPR_U32(ctx, 31, 0x2454E8u);
    ctx->pc = 0x2454E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454E0u;
    // 0x2454e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2454E0u, 0x2454E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454E8u;
label_2454e8:
    // 0x2454e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2454E8u;
    {
        const bool branch_taken_0x2454e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2454e8) {
            ctx->pc = 0x2454F8u;
            goto label_2454f8;
        }
    }
    ctx->pc = 0x2454F0u;
    // 0x2454f0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2454F0u;
    SET_GPR_U32(ctx, 31, 0x2454F8u);
    ctx->pc = 0x2454F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454F0u;
    // 0x2454f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2454F0u, 0x2454F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454F8u;
label_2454f8:
    // 0x2454f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2454f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2454fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2454fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x245500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245504: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x245504u;
    SET_GPR_U32(ctx, 31, 0x24550Cu);
    ctx->pc = 0x245508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245504u;
    // 0x245508: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x245504u, 0x24550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24550Cu;
label_24550c:
    // 0x24550c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24550cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245510: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x245510u;
    SET_GPR_U32(ctx, 31, 0x245518u);
    ctx->pc = 0x245514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245510u;
    // 0x245514: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x245510u, 0x245518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245518u;
label_245518:
    // 0x245518: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x245518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24551c:
    // 0x24551c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24551cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245520: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x245520u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245528: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x245528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24552c: 0x3e00008  jr          $ra
    ctx->pc = 0x24552Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24552Cu;
        // 0x245530: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24552Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245534u;
    // 0x245534: 0x0  nop
    ctx->pc = 0x245534u;
    // NOP
    ctx->pc = 0x245538u;
}
