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

// Function: memcmp
// Address: 0x3a50b4 - 0x3a5148
void memcmp_0x3a50b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memcmp_0x3a50b4");
#endif

    switch (ctx->pc) {
        case 0x3a50ccu: goto label_3a50cc;
        case 0x3a511cu: goto label_3a511c;
        default: break;
    }

    ctx->pc = 0x3a50b4u;

    // 0x3a50b4: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x3a50b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3a50b8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A50B8u;
    {
        const bool branch_taken_0x3a50b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50B8u;
        // 0x3a50bc: 0x851025  or          $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a50b8) {
            ctx->pc = 0x3A5100u;
            goto label_3a5100;
        }
    }
    ctx->pc = 0x3A50C0u;
    // 0x3a50c0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3a50c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3a50c4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A50C4u;
    {
        const bool branch_taken_0x3a50c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a50c4) {
            ctx->pc = 0x3A5100u;
            goto label_3a5100;
        }
    }
    ctx->pc = 0x3A50CCu;
label_3a50cc:
    // 0x3a50cc: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3a50ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a50d0: 0x2cc70020  sltiu       $a3, $a2, 0x20
    ctx->pc = 0x3a50d0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3a50d4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a50d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a50d8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3a50d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3a50dc: 0x704344c9  pxor        $t0, $v0, $v1
    ctx->pc = 0x3a50dcu;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a50e0: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x3a50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3a50e4: 0x710753a9  pcpyud      $t2, $t0, $a3
    ctx->pc = 0x3a50e4u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x3a50e8: 0x1484825  or          $t1, $t2, $t0
    ctx->pc = 0x3a50e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x3a50ec: 0x49280a  movz        $a1, $v0, $t1
    ctx->pc = 0x3a50ecu;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x3a50f0: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A50F0u;
    {
        const bool branch_taken_0x3a50f0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a50f0) {
            ctx->pc = 0x3A50F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A50F0u;
            // 0x3a50f4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5100u;
            goto label_3a5100;
        }
    }
    ctx->pc = 0x3A50F8u;
    // 0x3a50f8: 0x10e0fff4  beqz        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A50F8u;
    {
        const bool branch_taken_0x3a50f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50F8u;
        // 0x3a50fc: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a50f8) {
            ctx->pc = 0x3A50CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a50cc;
        }
    }
    ctx->pc = 0x3A5100u;
label_3a5100:
    // 0x3a5100: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a5100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a5104: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a5104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a5108: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a5108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a510c: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A510Cu;
    {
        const bool branch_taken_0x3a510c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a510c) {
            ctx->pc = 0x3A5140u;
            goto label_3a5140;
        }
    }
    ctx->pc = 0x3A5114u;
    // 0x3a5114: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x3a5114u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x3a5118: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x3a5118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_3a511c:
    // 0x3a511c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3a511cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5120: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3a5120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5124: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5124u;
    {
        const bool branch_taken_0x3a5124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5124u;
        // 0x3a5128: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5124) {
            ctx->pc = 0x3A5134u;
            goto label_3a5134;
        }
    }
    ctx->pc = 0x3A512Cu;
    // 0x3a512c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A512Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A512Cu;
        // 0x3a5130: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A512Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5134u;
label_3a5134:
    // 0x3a5134: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a5134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a5138: 0x14c7fff8  bne         $a2, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A5138u;
    {
        const bool branch_taken_0x3a5138 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x3A513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5138u;
        // 0x3a513c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5138) {
            ctx->pc = 0x3A511Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a511c;
        }
    }
    ctx->pc = 0x3A5140u;
label_3a5140:
    // 0x3a5140: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5140u;
        // 0x3a5144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5148u;
}
