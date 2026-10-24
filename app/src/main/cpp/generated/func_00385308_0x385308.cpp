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

// Function: func_00385308
// Address: 0x385308 - 0x385410
void func_00385308_0x385308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00385308_0x385308");
#endif

    switch (ctx->pc) {
        case 0x385398u: goto label_385398;
        case 0x3853f0u: goto label_3853f0;
        default: break;
    }

    ctx->pc = 0x385308u;

    // 0x385308: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x385308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38530c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x38530cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x385310: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x385310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x385314: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x385314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x385318: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x385318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38531c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x385320: 0x24930484  addiu       $s3, $a0, 0x484
    ctx->pc = 0x385320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1156));
    // 0x385324: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x385324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x385328: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x385328u;
    {
        const bool branch_taken_0x385328 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385328u;
        // 0x38532c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385328) {
            ctx->pc = 0x38533Cu;
            goto label_38533c;
        }
    }
    ctx->pc = 0x385330u;
    // 0x385330: 0x2490047a  addiu       $s0, $a0, 0x47A
    ctx->pc = 0x385330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1146));
    // 0x385334: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x385334u;
    {
        const bool branch_taken_0x385334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385334u;
        // 0x385338: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385334) {
            ctx->pc = 0x385344u;
            goto label_385344;
        }
    }
    ctx->pc = 0x38533Cu;
label_38533c:
    // 0x38533c: 0x24900478  addiu       $s0, $a0, 0x478
    ctx->pc = 0x38533cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1144));
    // 0x385340: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x385340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385344:
    // 0x385344: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x385344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x385348: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x385348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x38534c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x38534Cu;
    {
        const bool branch_taken_0x38534c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38534Cu;
        // 0x385350: 0x2404ff80  addiu       $a0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38534c) {
            ctx->pc = 0x385398u;
            goto label_385398;
        }
    }
    ctx->pc = 0x385354u;
    // 0x385354: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x385354u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x385358: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385358u;
    {
        const bool branch_taken_0x385358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x38535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385358u;
        // 0x38535c: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385358) {
            ctx->pc = 0x38536Cu;
            goto label_38536c;
        }
    }
    ctx->pc = 0x385360u;
    // 0x385360: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x385360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x385364: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x385364u;
    {
        const bool branch_taken_0x385364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385364u;
        // 0x385368: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385364) {
            ctx->pc = 0x385380u;
            goto label_385380;
        }
    }
    ctx->pc = 0x38536Cu;
label_38536c:
    // 0x38536c: 0x2842fff2  slti        $v0, $v0, -0xE
    ctx->pc = 0x38536cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967282) ? 1 : 0);
    // 0x385370: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x385370u;
    {
        const bool branch_taken_0x385370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x385370) {
            ctx->pc = 0x385374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385370u;
            // 0x385374: 0xa6040000  sh          $a0, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x385380u;
            goto label_385380;
        }
    }
    ctx->pc = 0x385378u;
    // 0x385378: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x385378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x38537c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x38537cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_385380:
    // 0x385380: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x385380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x385384: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x385384u;
    {
        const bool branch_taken_0x385384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385384) {
            ctx->pc = 0x385388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x385384u;
            // 0x385388: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38539Cu;
            goto label_38539c;
        }
    }
    ctx->pc = 0x38538Cu;
    // 0x38538c: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x38538cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x385390: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x385390u;
    SET_GPR_U32(ctx, 31, 0x385398u);
    ctx->pc = 0x385394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385390u;
    // 0x385394: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x385390u, 0x385398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385398u;
label_385398:
    // 0x385398: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x385398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_38539c:
    // 0x38539c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x38539cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3853a0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3853A0u;
    {
        const bool branch_taken_0x3853a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3853A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853A0u;
        // 0x3853a4: 0x2404ff80  addiu       $a0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3853a0) {
            ctx->pc = 0x3853F0u;
            goto label_3853f0;
        }
    }
    ctx->pc = 0x3853A8u;
    // 0x3853a8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x3853a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3853ac: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3853ACu;
    {
        const bool branch_taken_0x3853ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3853B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853ACu;
        // 0x3853b0: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3853ac) {
            ctx->pc = 0x3853C0u;
            goto label_3853c0;
        }
    }
    ctx->pc = 0x3853B4u;
    // 0x3853b4: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x3853b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x3853b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3853B8u;
    {
        const bool branch_taken_0x3853b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3853BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853B8u;
        // 0x3853bc: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3853b8) {
            ctx->pc = 0x3853D8u;
            goto label_3853d8;
        }
    }
    ctx->pc = 0x3853C0u;
label_3853c0:
    // 0x3853c0: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x3853c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x3853c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3853C4u;
    {
        const bool branch_taken_0x3853c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3853C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853C4u;
        // 0x3853c8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3853c4) {
            ctx->pc = 0x3853D4u;
            goto label_3853d4;
        }
    }
    ctx->pc = 0x3853CCu;
    // 0x3853cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3853CCu;
    {
        const bool branch_taken_0x3853cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3853D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3853CCu;
        // 0x3853d0: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3853cc) {
            ctx->pc = 0x3853D8u;
            goto label_3853d8;
        }
    }
    ctx->pc = 0x3853D4u;
label_3853d4:
    // 0x3853d4: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x3853d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
label_3853d8:
    // 0x3853d8: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x3853d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x3853dc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3853DCu;
    {
        const bool branch_taken_0x3853dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3853dc) {
            ctx->pc = 0x3853E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3853DCu;
            // 0x3853e0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3853F4u;
            goto label_3853f4;
        }
    }
    ctx->pc = 0x3853E4u;
    // 0x3853e4: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x3853e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3853e8: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x3853E8u;
    SET_GPR_U32(ctx, 31, 0x3853F0u);
    ctx->pc = 0x3853ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3853E8u;
    // 0x3853ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x3853E8u, 0x3853F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3853F0u;
label_3853f0:
    // 0x3853f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3853f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3853f4:
    // 0x3853f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3853f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3853f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3853f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3853fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3853fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385404: 0x3e00008  jr          $ra
    ctx->pc = 0x385404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385404u;
        // 0x385408: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38540Cu;
    // 0x38540c: 0x0  nop
    ctx->pc = 0x38540cu;
    // NOP
    ctx->pc = 0x385410u;
}
