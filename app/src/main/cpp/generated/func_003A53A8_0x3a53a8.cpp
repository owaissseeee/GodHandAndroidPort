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

// Function: func_003A53A8
// Address: 0x3a53a8 - 0x3a54d8
void func_003A53A8_0x3a53a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A53A8_0x3a53a8");
#endif

    switch (ctx->pc) {
        case 0x3a5434u: goto label_3a5434;
        case 0x3a5484u: goto label_3a5484;
        case 0x3a54a4u: goto label_3a54a4;
        case 0x3a54c4u: goto label_3a54c4;
        default: break;
    }

    ctx->pc = 0x3a53a8u;

    // 0x3a53a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a53a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a53ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a53acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a53b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a53b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a53b4: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x3a53b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x3a53b8: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3A53B8u;
    {
        const bool branch_taken_0x3a53b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A53B8u;
        // 0x3a53bc: 0x7fbf0010  sq          $ra, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a53b8) {
            ctx->pc = 0x3A54A4u;
            goto label_3a54a4;
        }
    }
    ctx->pc = 0x3A53C0u;
    // 0x3a53c0: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x3a53c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x3a53c4: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x3a53c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a53c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3a53c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3a53cc: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3a53ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3a53d0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3a53d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3a53d4: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3a53d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3a53d8: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x3a53d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x3a53dc: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x3a53dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x3a53e0: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3a53e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a53e4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a53e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a53e8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a53e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a53ec: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a53ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a53f0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a53f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a53f4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a53f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a53f8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a53f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a53fc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3A53FCu;
    {
        const bool branch_taken_0x3a53fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A53FCu;
        // 0x3a5400: 0xde060000  ld          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a53fc) {
            ctx->pc = 0x3A5460u;
            goto label_3a5460;
        }
    }
    ctx->pc = 0x3A5404u;
    // 0x3a5404: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3a5404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a5408: 0x70633b89  pcpyld      $a3, $v1, $v1
    ctx->pc = 0x3a5408u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x3a540c: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x3a540cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x3a5410: 0x70471a48  psubb       $v1, $v0, $a3
    ctx->pc = 0x3a5410u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x3a5414: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x3a5414u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3a5418: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x3a5418u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3a541c: 0x70681c89  pand        $v1, $v1, $t0
    ctx->pc = 0x3a541cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x3a5420: 0x706313a9  pcpyud      $v0, $v1, $v1
    ctx->pc = 0x3a5420u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x3a5424: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3a5424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a5428: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A5428u;
    {
        const bool branch_taken_0x3a5428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5428u;
        // 0x3a542c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5428) {
            ctx->pc = 0x3A54A4u;
            goto label_3a54a4;
        }
    }
    ctx->pc = 0x3A5430u;
    // 0x3a5430: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x3a5430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3a5434:
    // 0x3a5434: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3a5434u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a5438: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3a5438u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3a543c: 0x70471248  psubb       $v0, $v0, $a3
    ctx->pc = 0x3a543cu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x3a5440: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3a5440u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a5444: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x3a5444u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3a5448: 0x70421ba9  pcpyud      $v1, $v0, $v0
    ctx->pc = 0x3a5448u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x3a544c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a544cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a5450: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A5450u;
    {
        const bool branch_taken_0x3a5450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5450) {
            ctx->pc = 0x3A5454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5450u;
            // 0x3a5454: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5434;
        }
    }
    ctx->pc = 0x3A5458u;
    // 0x3a5458: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3A5458u;
    {
        const bool branch_taken_0x3a5458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5458u;
        // 0x3a545c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5458) {
            ctx->pc = 0x3A54A4u;
            goto label_3a54a4;
        }
    }
    ctx->pc = 0x3A5460u;
label_3a5460:
    // 0x3a5460: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3a5460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5464: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a5464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5468: 0xc3182f  dsubu       $v1, $a2, $v1
    ctx->pc = 0x3a5468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
    // 0x3a546c: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x3a546cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x3a5470: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a5470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a5474: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3a5474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3a5478: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A5478u;
    {
        const bool branch_taken_0x3a5478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5478u;
        // 0x3a547c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5478) {
            ctx->pc = 0x3A54A4u;
            goto label_3a54a4;
        }
    }
    ctx->pc = 0x3A5480u;
    // 0x3a5480: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x3a5480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3a5484:
    // 0x3a5484: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x3a5484u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a5488: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3a5488u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3a548c: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x3a548cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x3a5490: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a5490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a5494: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3a5494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3a5498: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A5498u;
    {
        const bool branch_taken_0x3a5498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5498) {
            ctx->pc = 0x3A549Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5498u;
            // 0x3a549c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5484u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5484;
        }
    }
    ctx->pc = 0x3A54A0u;
    // 0x3a54a0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3a54a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a54a4:
    // 0x3a54a4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a54a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a54a8: 0x0  nop
    ctx->pc = 0x3a54a8u;
    // NOP
    // 0x3a54ac: 0x0  nop
    ctx->pc = 0x3a54acu;
    // NOP
    // 0x3a54b0: 0x0  nop
    ctx->pc = 0x3a54b0u;
    // NOP
    // 0x3a54b4: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A54B4u;
    {
        const bool branch_taken_0x3a54b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a54b4) {
            ctx->pc = 0x3A54B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A54B4u;
            // 0x3a54b8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A54A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a54a4;
        }
    }
    ctx->pc = 0x3A54BCu;
    // 0x3a54bc: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x3A54BCu;
    SET_GPR_U32(ctx, 31, 0x3A54C4u);
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x3A54BCu, 0x3A54C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A54C4u;
label_3a54c4:
    // 0x3a54c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a54c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a54c8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3a54c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a54cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a54ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a54d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A54D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54D0u;
        // 0x3a54d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A54D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A54D8u;
}
