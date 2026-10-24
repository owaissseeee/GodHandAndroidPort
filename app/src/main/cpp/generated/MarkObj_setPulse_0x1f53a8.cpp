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

// Function: MarkObj_setPulse
// Address: 0x1f53a8 - 0x1f5478
void MarkObj_setPulse_0x1f53a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MarkObj_setPulse_0x1f53a8");
#endif

    switch (ctx->pc) {
        case 0x1f53d4u: goto label_1f53d4;
        case 0x1f5448u: goto label_1f5448;
        case 0x1f5458u: goto label_1f5458;
        case 0x1f5460u: goto label_1f5460;
        default: break;
    }

    ctx->pc = 0x1f53a8u;

    // 0x1f53a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f53a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f53ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f53acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f53b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f53b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f53b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f53b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f53b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1f53bc: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F53BCu;
    {
        const bool branch_taken_0x1f53bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F53C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53BCu;
        // 0x1f53c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f53bc) {
            ctx->pc = 0x1F5450u;
            goto label_1f5450;
        }
    }
    ctx->pc = 0x1F53C4u;
    // 0x1f53c4: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x1f53c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
    // 0x1f53c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f53c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f53cc: 0xc0b59ec  jal         func_2D67B0
    ctx->pc = 0x1F53CCu;
    SET_GPR_U32(ctx, 31, 0x1F53D4u);
    ctx->pc = 0x1F53D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F53CCu;
    // 0x1f53d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67B0u, 0x1F53CCu, 0x1F53D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F53D4u;
label_1f53d4:
    // 0x1f53d4: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1f53d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1f53d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f53dc: 0x2453024  and         $a2, $s2, $a1
    ctx->pc = 0x1f53dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
    // 0x1f53e0: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1f53e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1f53e4: 0x2252824  and         $a1, $s1, $a1
    ctx->pc = 0x1f53e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
    // 0x1f53e8: 0x34c600c0  ori         $a2, $a2, 0xC0
    ctx->pc = 0x1f53e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)192);
    // 0x1f53ec: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1f53ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1f53f0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f53f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f53f4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1f53f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f53f8: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1f53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1f53fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f53fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f5400: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1f5400u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1f5404: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x1f5404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
    // 0x1f5408: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1f5408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1f540c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1f540cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1f5410: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1f5410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1f5414: 0x3c0300c0  lui         $v1, 0xC0
    ctx->pc = 0x1f5414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)192 << 16));
    // 0x1f5418: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1f5418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1f541c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1f541cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1f5420: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1f5420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1f5424: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f5424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f5428: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1f5428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1f542c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f542cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f5430: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1f5430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f5434: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1f5434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1f5438: 0x260404bc  addiu       $a0, $s0, 0x4BC
    ctx->pc = 0x1f5438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1212));
    // 0x1f543c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1f543cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1f5440: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1F5440u;
    SET_GPR_U32(ctx, 31, 0x1F5448u);
    ctx->pc = 0x1F5444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5440u;
    // 0x1f5444: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1F5440u, 0x1F5448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5448u;
label_1f5448:
    // 0x1f5448: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5448u;
    {
        const bool branch_taken_0x1f5448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5448u;
        // 0x1f544c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5448) {
            ctx->pc = 0x1F5464u;
            goto label_1f5464;
        }
    }
    ctx->pc = 0x1F5450u;
label_1f5450:
    // 0x1f5450: 0xc0b5a1c  jal         func_2D6870
    ctx->pc = 0x1F5450u;
    SET_GPR_U32(ctx, 31, 0x1F5458u);
    ctx->pc = 0x1F5454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5450u;
    // 0x1f5454: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6870u, 0x1F5450u, 0x1F5458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5458u;
label_1f5458:
    // 0x1f5458: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1F5458u;
    SET_GPR_U32(ctx, 31, 0x1F5460u);
    ctx->pc = 0x1F545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5458u;
    // 0x1f545c: 0x260404bc  addiu       $a0, $s0, 0x4BC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1F5458u, 0x1F5460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5460u;
label_1f5460:
    // 0x1f5460: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f5460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5464:
    // 0x1f5464: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f5464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5468: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f5468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f546c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f546cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5470: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5470u;
        // 0x1f5474: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5478u;
}
