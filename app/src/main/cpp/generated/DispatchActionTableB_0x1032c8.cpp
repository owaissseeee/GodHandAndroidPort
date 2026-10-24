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

// Function: DispatchActionTableB
// Address: 0x1032c8 - 0x103370
void DispatchActionTableB_0x1032c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DispatchActionTableB_0x1032c8");
#endif

    switch (ctx->pc) {
        case 0x1032c8u: goto label_1032c8;
        case 0x1032ccu: goto label_1032cc;
        case 0x1032d0u: goto label_1032d0;
        case 0x1032d4u: goto label_1032d4;
        case 0x1032d8u: goto label_1032d8;
        case 0x1032dcu: goto label_1032dc;
        case 0x1032e0u: goto label_1032e0;
        case 0x1032e4u: goto label_1032e4;
        case 0x1032e8u: goto label_1032e8;
        case 0x1032ecu: goto label_1032ec;
        case 0x1032f0u: goto label_1032f0;
        case 0x1032f4u: goto label_1032f4;
        case 0x1032f8u: goto label_1032f8;
        case 0x1032fcu: goto label_1032fc;
        case 0x103300u: goto label_103300;
        case 0x103304u: goto label_103304;
        case 0x103308u: goto label_103308;
        case 0x10330cu: goto label_10330c;
        case 0x103310u: goto label_103310;
        case 0x103314u: goto label_103314;
        case 0x103318u: goto label_103318;
        case 0x10331cu: goto label_10331c;
        case 0x103320u: goto label_103320;
        case 0x103324u: goto label_103324;
        case 0x103328u: goto label_103328;
        case 0x10332cu: goto label_10332c;
        case 0x103330u: goto label_103330;
        case 0x103334u: goto label_103334;
        case 0x103338u: goto label_103338;
        case 0x10333cu: goto label_10333c;
        case 0x103340u: goto label_103340;
        case 0x103344u: goto label_103344;
        case 0x103348u: goto label_103348;
        case 0x10334cu: goto label_10334c;
        case 0x103350u: goto label_103350;
        case 0x103354u: goto label_103354;
        case 0x103358u: goto label_103358;
        case 0x10335cu: goto label_10335c;
        case 0x103360u: goto label_103360;
        case 0x103364u: goto label_103364;
        case 0x103368u: goto label_103368;
        case 0x10336cu: goto label_10336c;
        default: break;
    }

    ctx->pc = 0x1032c8u;

label_1032c8:
    // 0x1032c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1032c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1032cc:
    // 0x1032cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1032ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1032d0:
    // 0x1032d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1032d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1032d4:
    // 0x1032d4: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x1032d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_1032d8:
    // 0x1032d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1032dc:
    if (ctx->pc == 0x1032DCu) {
        ctx->pc = 0x1032DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032D8u;
        // 0x1032dc: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032E0u;
        goto label_1032e0;
    }
    ctx->pc = 0x1032D8u;
    {
        const bool branch_taken_0x1032d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1032d8) {
            ctx->pc = 0x1032DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1032D8u;
            // 0x1032dc: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1032E0u;
            goto label_1032e0;
        }
    }
    ctx->pc = 0x1032E0u;
label_1032e0:
    // 0x1032e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1032e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1032e4:
    // 0x1032e4: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x1032e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_1032e8:
    // 0x1032e8: 0x2447c7b8  addiu       $a3, $v0, -0x3848
    ctx->pc = 0x1032e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952888));
label_1032ec:
    // 0x1032ec: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1032ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1032f0:
    // 0x1032f0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1032f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1032f4:
    // 0x1032f4: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x1032f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1032f8:
    // 0x1032f8: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1032f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1032fc:
    // 0x1032fc: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_103300:
    if (ctx->pc == 0x103300u) {
        ctx->pc = 0x103300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032FCu;
        // 0x103300: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103304u;
        goto label_103304;
    }
    ctx->pc = 0x1032FCu;
    {
        const bool branch_taken_0x1032fc = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x103300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032FCu;
        // 0x103300: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032fc) {
            ctx->pc = 0x103328u;
            goto label_103328;
        }
    }
    ctx->pc = 0x103304u;
label_103304:
    // 0x103304: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x103304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_103308:
    // 0x103308: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x103308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_10330c:
    // 0x10330c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x10330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_103310:
    // 0x103310: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x103310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_103314:
    // 0x103314: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x103314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_103318:
    // 0x103318: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x103318u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_10331c:
    // 0x10331c: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x10331cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_103320:
    // 0x103320: 0x10000004  b           . + 4 + (0x4 << 2)
label_103324:
    if (ctx->pc == 0x103324u) {
        ctx->pc = 0x103324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103320u;
        // 0x103324: 0x2543c7b8  addiu       $v1, $t2, -0x3848 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103328u;
        goto label_103328;
    }
    ctx->pc = 0x103320u;
    {
        const bool branch_taken_0x103320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103320u;
        // 0x103324: 0x2543c7b8  addiu       $v1, $t2, -0x3848 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103320) {
            ctx->pc = 0x103334u;
            goto label_103334;
        }
    }
    ctx->pc = 0x103328u;
label_103328:
    // 0x103328: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x103328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_10332c:
    // 0x10332c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x10332cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_103330:
    // 0x103330: 0x2543c7b8  addiu       $v1, $t2, -0x3848
    ctx->pc = 0x103330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952888));
label_103334:
    // 0x103334: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x103334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_103338:
    // 0x103338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x103338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10333c:
    // 0x10333c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_103340:
    if (ctx->pc == 0x103340u) {
        ctx->pc = 0x103340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10333Cu;
        // 0x103340: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103344u;
        goto label_103344;
    }
    ctx->pc = 0x10333Cu;
    {
        const bool branch_taken_0x10333c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x103340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10333Cu;
        // 0x103340: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10333c) {
            ctx->pc = 0x103358u;
            goto label_103358;
        }
    }
    ctx->pc = 0x103344u;
label_103344:
    // 0x103344: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x103344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_103348:
    // 0x103348: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x103348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_10334c:
    // 0x10334c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x10334cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_103350:
    // 0x103350: 0x10000002  b           . + 4 + (0x2 << 2)
label_103354:
    if (ctx->pc == 0x103354u) {
        ctx->pc = 0x103354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103350u;
        // 0x103354: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103358u;
        goto label_103358;
    }
    ctx->pc = 0x103350u;
    {
        const bool branch_taken_0x103350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103350u;
        // 0x103354: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103350) {
            ctx->pc = 0x10335Cu;
            goto label_10335c;
        }
    }
    ctx->pc = 0x103358u;
label_103358:
    // 0x103358: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x103358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10335c:
    // 0x10335c: 0xe0f809  jalr        $a3
label_103360:
    if (ctx->pc == 0x103360u) {
        ctx->pc = 0x103360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10335Cu;
        // 0x103360: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103364u;
        goto label_103364;
    }
    ctx->pc = 0x10335Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x103364u);
        ctx->pc = 0x103360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10335Cu;
        // 0x103360: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10335Cu, 0x103364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103364u;
label_103364:
    // 0x103364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103368:
    // 0x103368: 0x3e00008  jr          $ra
label_10336c:
    if (ctx->pc == 0x10336Cu) {
        ctx->pc = 0x10336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103368u;
        // 0x10336c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103370u;
        goto label_fallthrough_0x103368;
    }
    ctx->pc = 0x103368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103368u;
        // 0x10336c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x103368:
    ctx->pc = 0x103370u;
}
