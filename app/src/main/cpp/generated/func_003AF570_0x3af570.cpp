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

// Function: func_003AF570
// Address: 0x3af570 - 0x3af6f0
void func_003AF570_0x3af570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AF570_0x3af570");
#endif

    switch (ctx->pc) {
        case 0x3af5a4u: goto label_3af5a4;
        case 0x3af60cu: goto label_3af60c;
        case 0x3af670u: goto label_3af670;
        case 0x3af6b8u: goto label_3af6b8;
        default: break;
    }

    ctx->pc = 0x3af570u;

    // 0x3af570: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3af570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3af574: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3af574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3af578: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3af578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af57c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3af57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3af580: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3af580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3af584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3af584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af588: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3af588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3af58c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3af58cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af590: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3af590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3af594: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3af594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3af598: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3af598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3af59c: 0xc0eba06  jal         func_3AE818
    ctx->pc = 0x3AF59Cu;
    SET_GPR_U32(ctx, 31, 0x3AF5A4u);
    ctx->pc = 0x3AF5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF59Cu;
    // 0x3af5a0: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE818u, 0x3AF59Cu, 0x3AF5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF5A4u;
label_3af5a4:
    // 0x3af5a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3af5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af5a8: 0x10283f  dsra32      $a1, $s0, 0
    ctx->pc = 0x3af5a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3af5ac: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3af5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3af5b0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x3af5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x3af5b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3af5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3af5b8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3af5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af5bc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3af5bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3af5c0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3af5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3af5c4: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x3af5c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x3af5c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3af5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3af5cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3af5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3af5d0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3af5d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3af5d4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x3af5d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3af5d8: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x3af5d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3af5dc: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x3af5dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x3af5e0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF5E0u;
    {
        const bool branch_taken_0x3af5e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5E0u;
        // 0x3af5e4: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af5e0) {
            ctx->pc = 0x3AF5F4u;
            goto label_3af5f4;
        }
    }
    ctx->pc = 0x3AF5E8u;
    // 0x3af5e8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3af5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3af5ec: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x3af5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3af5f0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3af5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3af5f4:
    // 0x3af5f4: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3af5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3af5f8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3af5f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3af5fc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3AF5FCu;
    {
        const bool branch_taken_0x3af5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF5FCu;
        // 0x3af600: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af5fc) {
            ctx->pc = 0x3AF664u;
            goto label_3af664;
        }
    }
    ctx->pc = 0x3AF604u;
    // 0x3af604: 0xc0ebaf0  jal         func_3AEBC0
    ctx->pc = 0x3AF604u;
    SET_GPR_U32(ctx, 31, 0x3AF60Cu);
    ctx->pc = 0x3AF608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF604u;
    // 0x3af608: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEBC0u, 0x3AF604u, 0x3AF60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF60Cu;
label_3af60c:
    // 0x3af60c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3af60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af610: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3AF610u;
    {
        const bool branch_taken_0x3af610 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF610u;
        // 0x3af614: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af610) {
            ctx->pc = 0x3AF63Cu;
            goto label_3af63c;
        }
    }
    ctx->pc = 0x3AF618u;
    // 0x3af618: 0x52023  negu        $a0, $a1
    ctx->pc = 0x3af618u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3af61c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3af61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af620: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x3af620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3af624: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af628: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3af628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x3af62c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3af62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3af630: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x3af630u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x3af634: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF634u;
    {
        const bool branch_taken_0x3af634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF634u;
        // 0x3af638: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af634) {
            ctx->pc = 0x3AF644u;
            goto label_3af644;
        }
    }
    ctx->pc = 0x3AF63Cu;
label_3af63c:
    // 0x3af63c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3af63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af640: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x3af640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_3af644:
    // 0x3af644: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3af644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3af648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3af648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af64c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3af64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3af650: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x3af650u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x3af654: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3af654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x3af658: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3af658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af65c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3AF65Cu;
    {
        const bool branch_taken_0x3af65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF65Cu;
        // 0x3af660: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af65c) {
            ctx->pc = 0x3AF684u;
            goto label_3af684;
        }
    }
    ctx->pc = 0x3AF664u;
label_3af664:
    // 0x3af664: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x3af664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x3af668: 0xc0ebaf0  jal         func_3AEBC0
    ctx->pc = 0x3AF668u;
    SET_GPR_U32(ctx, 31, 0x3AF670u);
    ctx->pc = 0x3AF66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF668u;
    // 0x3af66c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEBC0u, 0x3AF668u, 0x3AF670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF670u;
label_3af670:
    // 0x3af670: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3af670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3af674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3af674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3af678: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3af678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x3af67c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x3af67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3af680: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x3af680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_3af684:
    // 0x3af684: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AF684u;
    {
        const bool branch_taken_0x3af684 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF684u;
        // 0x3af688: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af684) {
            ctx->pc = 0x3AF6A0u;
            goto label_3af6a0;
        }
    }
    ctx->pc = 0x3AF68Cu;
    // 0x3af68c: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x3af68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x3af690: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3af690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3af694: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3af694u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3af698: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3AF698u;
    {
        const bool branch_taken_0x3af698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF698u;
        // 0x3af69c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af698) {
            ctx->pc = 0x3AF6C0u;
            goto label_3af6c0;
        }
    }
    ctx->pc = 0x3AF6A0u;
label_3af6a0:
    // 0x3af6a0: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x3af6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x3af6a4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3af6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3af6a8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3af6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3af6ac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3af6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3af6b0: 0xc0ebace  jal         func_3AEB38
    ctx->pc = 0x3AF6B0u;
    SET_GPR_U32(ctx, 31, 0x3AF6B8u);
    ctx->pc = 0x3AF6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF6B0u;
    // 0x3af6b4: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEB38u, 0x3AF6B0u, 0x3AF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF6B8u;
label_3af6b8:
    // 0x3af6b8: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x3af6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x3af6bc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3af6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3af6c0:
    // 0x3af6c0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x3af6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x3af6c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3af6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af6c8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3af6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3af6cc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3af6ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3af6d0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3af6d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3af6d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3af6d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3af6d8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3af6d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3af6dc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3af6dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3af6e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3af6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3af6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF6E4u;
        // 0x3af6e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF6ECu;
    // 0x3af6ec: 0x0  nop
    ctx->pc = 0x3af6ecu;
    // NOP
    ctx->pc = 0x3af6f0u;
}
