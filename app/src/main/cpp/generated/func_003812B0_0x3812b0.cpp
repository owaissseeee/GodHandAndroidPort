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

// Function: func_003812B0
// Address: 0x3812b0 - 0x3813c8
void func_003812B0_0x3812b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003812B0_0x3812b0");
#endif

    switch (ctx->pc) {
        case 0x381354u: goto label_381354;
        case 0x3813acu: goto label_3813ac;
        default: break;
    }

    ctx->pc = 0x3812b0u;

    // 0x3812b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3812b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3812b4: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x3812b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3812b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3812b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3812bc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3812bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3812c0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3812c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3812c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3812c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3812c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3812c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3812cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3812ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3812d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3812d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3812d4: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x3812d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x3812d8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3812d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3812dc: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x3812dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x3812e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3812e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3812e4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3812E4u;
    {
        const bool branch_taken_0x3812e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3812E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3812E4u;
        // 0x3812e8: 0x24930010  addiu       $s3, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3812e4) {
            ctx->pc = 0x3812F8u;
            goto label_3812f8;
        }
    }
    ctx->pc = 0x3812ECu;
    // 0x3812ec: 0x2490000a  addiu       $s0, $a0, 0xA
    ctx->pc = 0x3812ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x3812f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3812F0u;
    {
        const bool branch_taken_0x3812f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3812F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3812F0u;
        // 0x3812f4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3812f0) {
            ctx->pc = 0x381300u;
            goto label_381300;
        }
    }
    ctx->pc = 0x3812F8u;
label_3812f8:
    // 0x3812f8: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x3812f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3812fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3812fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381300:
    // 0x381300: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x381300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x381304: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x381304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x381308: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x381308u;
    {
        const bool branch_taken_0x381308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381308u;
        // 0x38130c: 0x2404ff80  addiu       $a0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381308) {
            ctx->pc = 0x381354u;
            goto label_381354;
        }
    }
    ctx->pc = 0x381310u;
    // 0x381310: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x381310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x381314: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381314u;
    {
        const bool branch_taken_0x381314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x381318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381314u;
        // 0x381318: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381314) {
            ctx->pc = 0x381328u;
            goto label_381328;
        }
    }
    ctx->pc = 0x38131Cu;
    // 0x38131c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x38131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x381320: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x381320u;
    {
        const bool branch_taken_0x381320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381320u;
        // 0x381324: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381320) {
            ctx->pc = 0x38133Cu;
            goto label_38133c;
        }
    }
    ctx->pc = 0x381328u;
label_381328:
    // 0x381328: 0x2842fff2  slti        $v0, $v0, -0xE
    ctx->pc = 0x381328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967282) ? 1 : 0);
    // 0x38132c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x38132Cu;
    {
        const bool branch_taken_0x38132c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38132c) {
            ctx->pc = 0x381330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38132Cu;
            // 0x381330: 0xa6040000  sh          $a0, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38133Cu;
            goto label_38133c;
        }
    }
    ctx->pc = 0x381334u;
    // 0x381334: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x381334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x381338: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x381338u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_38133c:
    // 0x38133c: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x38133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x381340: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x381340u;
    {
        const bool branch_taken_0x381340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x381340) {
            ctx->pc = 0x381344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381340u;
            // 0x381344: 0x8e420038  lw          $v0, 0x38($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381358u;
            goto label_381358;
        }
    }
    ctx->pc = 0x381348u;
    // 0x381348: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x381348u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38134c: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x38134Cu;
    SET_GPR_U32(ctx, 31, 0x381354u);
    ctx->pc = 0x381350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38134Cu;
    // 0x381350: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x38134Cu, 0x381354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381354u;
label_381354:
    // 0x381354: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x381354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_381358:
    // 0x381358: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x381358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x38135c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38135Cu;
    {
        const bool branch_taken_0x38135c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38135Cu;
        // 0x381360: 0x2404ff80  addiu       $a0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38135c) {
            ctx->pc = 0x3813ACu;
            goto label_3813ac;
        }
    }
    ctx->pc = 0x381364u;
    // 0x381364: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x381364u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x381368: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381368u;
    {
        const bool branch_taken_0x381368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x38136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381368u;
        // 0x38136c: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381368) {
            ctx->pc = 0x38137Cu;
            goto label_38137c;
        }
    }
    ctx->pc = 0x381370u;
    // 0x381370: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x381370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x381374: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x381374u;
    {
        const bool branch_taken_0x381374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381374u;
        // 0x381378: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381374) {
            ctx->pc = 0x381394u;
            goto label_381394;
        }
    }
    ctx->pc = 0x38137Cu;
label_38137c:
    // 0x38137c: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x38137cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x381380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x381380u;
    {
        const bool branch_taken_0x381380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381380u;
        // 0x381384: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381380) {
            ctx->pc = 0x381390u;
            goto label_381390;
        }
    }
    ctx->pc = 0x381388u;
    // 0x381388: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x381388u;
    {
        const bool branch_taken_0x381388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381388u;
        // 0x38138c: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381388) {
            ctx->pc = 0x381394u;
            goto label_381394;
        }
    }
    ctx->pc = 0x381390u;
label_381390:
    // 0x381390: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x381390u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
label_381394:
    // 0x381394: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x381394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x381398: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x381398u;
    {
        const bool branch_taken_0x381398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x381398) {
            ctx->pc = 0x38139Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381398u;
            // 0x38139c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3813B0u;
            goto label_3813b0;
        }
    }
    ctx->pc = 0x3813A0u;
    // 0x3813a0: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x3813a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3813a4: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x3813A4u;
    SET_GPR_U32(ctx, 31, 0x3813ACu);
    ctx->pc = 0x3813A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3813A4u;
    // 0x3813a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x3813A4u, 0x3813ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3813ACu;
label_3813ac:
    // 0x3813ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3813acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3813b0:
    // 0x3813b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3813b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3813b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3813b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3813b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3813b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3813bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3813bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3813c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3813C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3813C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3813C0u;
        // 0x3813c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3813C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3813C8u;
}
