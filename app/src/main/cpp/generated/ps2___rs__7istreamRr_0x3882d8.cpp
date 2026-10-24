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

// Function: __rs__7istreamRr
// Address: 0x3882d8 - 0x388380
void ps2___rs__7istreamRr_0x3882d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamRr_0x3882d8");
#endif

    switch (ctx->pc) {
        case 0x388320u: goto label_388320;
        case 0x388344u: goto label_388344;
        case 0x388360u: goto label_388360;
        default: break;
    }

    ctx->pc = 0x3882d8u;

    // 0x3882d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3882d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3882dc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3882dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3882e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3882e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3882e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3882e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3882e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3882e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3882ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3882ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3882f0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x3882f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x3882f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3882F4u;
    {
        const bool branch_taken_0x3882f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3882F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882F4u;
        // 0x3882f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882f4) {
            ctx->pc = 0x38830Cu;
            goto label_38830c;
        }
    }
    ctx->pc = 0x3882FCu;
    // 0x3882fc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3882fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x388300: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x388300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388304: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x388304u;
    {
        const bool branch_taken_0x388304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388304u;
        // 0x388308: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388304) {
            ctx->pc = 0x388348u;
            goto label_388348;
        }
    }
    ctx->pc = 0x38830Cu;
label_38830c:
    // 0x38830c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x38830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x388310: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x388310u;
    {
        const bool branch_taken_0x388310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x388310) {
            ctx->pc = 0x388314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388310u;
            // 0x388314: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388328u;
            goto label_388328;
        }
    }
    ctx->pc = 0x388318u;
    // 0x388318: 0xc0e249a  jal         func_389268
    ctx->pc = 0x388318u;
    SET_GPR_U32(ctx, 31, 0x388320u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x388318u, 0x388320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388320u;
label_388320:
    // 0x388320: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x388320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388324: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x388324u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_388328:
    // 0x388328: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x388328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38832c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38832cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x388330: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x388330u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x388334: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x388334u;
    {
        const bool branch_taken_0x388334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388334u;
        // 0x388338: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388334) {
            ctx->pc = 0x388348u;
            goto label_388348;
        }
    }
    ctx->pc = 0x38833Cu;
    // 0x38833c: 0xc0e24e6  jal         func_389398
    ctx->pc = 0x38833Cu;
    SET_GPR_U32(ctx, 31, 0x388344u);
    ctx->pc = 0x388340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38833Cu;
    // 0x388340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389398u, 0x38833Cu, 0x388344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388344u;
label_388344:
    // 0x388344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x388344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388348:
    // 0x388348: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x388348u;
    {
        const bool branch_taken_0x388348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388348u;
        // 0x38834c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388348) {
            ctx->pc = 0x388368u;
            goto label_388368;
        }
    }
    ctx->pc = 0x388350u;
    // 0x388350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388354: 0x24a5d0e8  addiu       $a1, $a1, -0x2F18
    ctx->pc = 0x388354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955240));
    // 0x388358: 0xc0e2b72  jal         func_38ADC8
    ctx->pc = 0x388358u;
    SET_GPR_U32(ctx, 31, 0x388360u);
    ctx->pc = 0x38835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388358u;
    // 0x38835c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38ADC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38ADC8u, 0x388358u, 0x388360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388360u;
label_388360:
    // 0x388360: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x388360u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388364: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x388364u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
label_388368:
    // 0x388368: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x388368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38836c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38836cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x388370: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x388370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388374: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x388374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388378: 0x3e00008  jr          $ra
    ctx->pc = 0x388378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388378u;
        // 0x38837c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388380u;
}
