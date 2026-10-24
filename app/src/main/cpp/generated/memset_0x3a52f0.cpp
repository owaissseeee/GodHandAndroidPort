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

// Function: memset
// Address: 0x3a52f0 - 0x3a53a8
void memset_0x3a52f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memset_0x3a52f0");
#endif

    switch (ctx->pc) {
        case 0x3a532cu: goto label_3a532c;
        case 0x3a5350u: goto label_3a5350;
        case 0x3a5388u: goto label_3a5388;
        default: break;
    }

    ctx->pc = 0x3a52f0u;

    // 0x3a52f0: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3a52f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a52f4: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A52F4u;
    {
        const bool branch_taken_0x3a52f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A52F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52F4u;
        // 0x3a52f8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52f4) {
            ctx->pc = 0x3A536Cu;
            goto label_3a536c;
        }
    }
    ctx->pc = 0x3A52FCu;
    // 0x3a52fc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x3a52fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x3a5300: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A5300u;
    {
        const bool branch_taken_0x3a5300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5300u;
        // 0x3a5304: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5300) {
            ctx->pc = 0x3A536Cu;
            goto label_3a536c;
        }
    }
    ctx->pc = 0x3A5308u;
    // 0x3a5308: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x3a5308u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3a530c: 0x2cca0020  sltiu       $t2, $a2, 0x20
    ctx->pc = 0x3a530cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3a5310: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3a5310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5314: 0x81a38  dsll        $v1, $t0, 8
    ctx->pc = 0x3a5314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 8);
    // 0x3a5318: 0x694025  or          $t0, $v1, $t1
    ctx->pc = 0x3a5318u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x3a531c: 0x70081ee9  pcpyh       $v1, $t0
    ctx->pc = 0x3a531cu;
    { __m128i src = GPR_VEC(ctx, 8); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 3, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x3a5320: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x3A5320u;
    {
        const bool branch_taken_0x3a5320 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5320u;
        // 0x3a5324: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5320) {
            ctx->pc = 0x3A535Cu;
            goto label_3a535c;
        }
    }
    ctx->pc = 0x3A5328u;
    // 0x3a5328: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x3a5328u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_3a532c:
    // 0x3a532c: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x3a532cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x3a5330: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x3a5330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x3a5334: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3a5334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3a5338: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x3a5338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3a533c: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x3a533cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x3a5340: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A5340u;
    {
        const bool branch_taken_0x3a5340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5340u;
        // 0x3a5344: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5340) {
            ctx->pc = 0x3A532Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a532c;
        }
    }
    ctx->pc = 0x3A5348u;
    // 0x3a5348: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5348u;
    {
        const bool branch_taken_0x3a5348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5348u;
        // 0x3a534c: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5348) {
            ctx->pc = 0x3A535Cu;
            goto label_3a535c;
        }
    }
    ctx->pc = 0x3A5350u;
label_3a5350:
    // 0x3a5350: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3a5350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3a5354: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3a5354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3a5358: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3a5358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3a535c:
    // 0x3a535c: 0x0  nop
    ctx->pc = 0x3a535cu;
    // NOP
    // 0x3a5360: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A5360u;
    {
        const bool branch_taken_0x3a5360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5360) {
            ctx->pc = 0x3A5364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5360u;
            // 0x3a5364: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5350;
        }
    }
    ctx->pc = 0x3A5368u;
    // 0x3a5368: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3a5368u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a536c:
    // 0x3a536c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a536cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a5370: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a5370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a5374: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a5374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a5378: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A5378u;
    {
        const bool branch_taken_0x3a5378 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a5378) {
            ctx->pc = 0x3A53A0u;
            goto label_3a53a0;
        }
    }
    ctx->pc = 0x3A5380u;
    // 0x3a5380: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a5380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a5384: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a5384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3a5388:
    // 0x3a5388: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x3a5388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3a538c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a538cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a5390: 0x0  nop
    ctx->pc = 0x3a5390u;
    // NOP
    // 0x3a5394: 0x0  nop
    ctx->pc = 0x3a5394u;
    // NOP
    // 0x3a5398: 0x14c2fffb  bne         $a2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A5398u;
    {
        const bool branch_taken_0x3a5398 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5398u;
        // 0x3a539c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5398) {
            ctx->pc = 0x3A5388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5388;
        }
    }
    ctx->pc = 0x3A53A0u;
label_3a53a0:
    // 0x3a53a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A53A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A53A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A53A0u;
        // 0x3a53a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A53A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A53A8u;
}
