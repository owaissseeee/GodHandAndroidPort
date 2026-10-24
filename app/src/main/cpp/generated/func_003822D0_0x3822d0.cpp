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

// Function: func_003822D0
// Address: 0x3822d0 - 0x3823e0
void func_003822D0_0x3822d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003822D0_0x3822d0");
#endif

    switch (ctx->pc) {
        case 0x38236cu: goto label_38236c;
        case 0x3823bcu: goto label_3823bc;
        default: break;
    }

    ctx->pc = 0x3822d0u;

    // 0x3822d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3822d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3822d4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3822d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3822d8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3822d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3822dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3822dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3822e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3822e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3822e4: 0x26710318  addiu       $s1, $s3, 0x318
    ctx->pc = 0x3822e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 792));
    // 0x3822e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3822e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3822ec: 0x30d200ff  andi        $s2, $a2, 0xFF
    ctx->pc = 0x3822ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3822f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3822f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3822f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3822f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3822f8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3822F8u;
    {
        const bool branch_taken_0x3822f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3822FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3822F8u;
        // 0x3822fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3822f8) {
            ctx->pc = 0x382310u;
            goto label_382310;
        }
    }
    ctx->pc = 0x382300u;
    // 0x382300: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x382300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x382304: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x382304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x382308: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x382308u;
    {
        const bool branch_taken_0x382308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382308u;
        // 0x38230c: 0x24420022  addiu       $v0, $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382308) {
            ctx->pc = 0x38231Cu;
            goto label_38231c;
        }
    }
    ctx->pc = 0x382310u;
label_382310:
    // 0x382310: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x382310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x382314: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x382314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x382318: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x382318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_38231c:
    // 0x38231c: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x38231cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x382320: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x382320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x382324: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x382324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x382328: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x382328u;
    {
        const bool branch_taken_0x382328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382328u;
        // 0x38232c: 0x2404ff80  addiu       $a0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382328) {
            ctx->pc = 0x38236Cu;
            goto label_38236c;
        }
    }
    ctx->pc = 0x382330u;
    // 0x382330: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x382330u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x382334: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x382334u;
    {
        const bool branch_taken_0x382334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x382338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382334u;
        // 0x382338: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382334) {
            ctx->pc = 0x382348u;
            goto label_382348;
        }
    }
    ctx->pc = 0x38233Cu;
    // 0x38233c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x38233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x382340: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x382340u;
    {
        const bool branch_taken_0x382340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382340u;
        // 0x382344: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382340) {
            ctx->pc = 0x38235Cu;
            goto label_38235c;
        }
    }
    ctx->pc = 0x382348u;
label_382348:
    // 0x382348: 0x2842fff2  slti        $v0, $v0, -0xE
    ctx->pc = 0x382348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967282) ? 1 : 0);
    // 0x38234c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x38234Cu;
    {
        const bool branch_taken_0x38234c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38234c) {
            ctx->pc = 0x382350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38234Cu;
            // 0x382350: 0xa6040000  sh          $a0, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38235Cu;
            goto label_38235c;
        }
    }
    ctx->pc = 0x382354u;
    // 0x382354: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x382354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x382358: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x382358u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_38235c:
    // 0x38235c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38235cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382360: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382364: 0xc0e08f8  jal         func_3823E0
    ctx->pc = 0x382364u;
    SET_GPR_U32(ctx, 31, 0x38236Cu);
    ctx->pc = 0x382368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382364u;
    // 0x382368: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3823E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3823E0u, 0x382364u, 0x38236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38236Cu;
label_38236c:
    // 0x38236c: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x38236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x382370: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x382370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x382374: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x382374u;
    {
        const bool branch_taken_0x382374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382374u;
        // 0x382378: 0x2404ff80  addiu       $a0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382374) {
            ctx->pc = 0x3823BCu;
            goto label_3823bc;
        }
    }
    ctx->pc = 0x38237Cu;
    // 0x38237c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x38237cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x382380: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x382380u;
    {
        const bool branch_taken_0x382380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x382384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382380u;
        // 0x382384: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382380) {
            ctx->pc = 0x382394u;
            goto label_382394;
        }
    }
    ctx->pc = 0x382388u;
    // 0x382388: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x382388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x38238c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38238Cu;
    {
        const bool branch_taken_0x38238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38238Cu;
        // 0x382390: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38238c) {
            ctx->pc = 0x3823ACu;
            goto label_3823ac;
        }
    }
    ctx->pc = 0x382394u;
label_382394:
    // 0x382394: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x382394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x382398: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x382398u;
    {
        const bool branch_taken_0x382398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382398u;
        // 0x38239c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382398) {
            ctx->pc = 0x3823A8u;
            goto label_3823a8;
        }
    }
    ctx->pc = 0x3823A0u;
    // 0x3823a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3823A0u;
    {
        const bool branch_taken_0x3823a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3823A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823A0u;
        // 0x3823a4: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3823a0) {
            ctx->pc = 0x3823ACu;
            goto label_3823ac;
        }
    }
    ctx->pc = 0x3823A8u;
label_3823a8:
    // 0x3823a8: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x3823a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
label_3823ac:
    // 0x3823ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3823acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3823b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3823b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3823b4: 0xc0e08f8  jal         func_3823E0
    ctx->pc = 0x3823B4u;
    SET_GPR_U32(ctx, 31, 0x3823BCu);
    ctx->pc = 0x3823B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3823B4u;
    // 0x3823b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3823E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3823E0u, 0x3823B4u, 0x3823BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3823BCu;
label_3823bc:
    // 0x3823bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3823bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3823c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3823c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3823c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3823c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3823c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3823c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3823cc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3823ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3823d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3823d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3823d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3823D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3823D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823D4u;
        // 0x3823d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3823D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3823DCu;
    // 0x3823dc: 0x0  nop
    ctx->pc = 0x3823dcu;
    // NOP
    ctx->pc = 0x3823e0u;
}
