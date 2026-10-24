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

// Function: _clearEach
// Address: 0x39a078 - 0x39a140
void _clearEach_0x39a078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_clearEach_0x39a078");
#endif

    switch (ctx->pc) {
        case 0x39a090u: goto label_39a090;
        case 0x39a0f8u: goto label_39a0f8;
        default: break;
    }

    ctx->pc = 0x39a078u;

    // 0x39a078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39a07c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a084: 0xac820828  sw          $v0, 0x828($a0)
    ctx->pc = 0x39a084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2088), GPR_U32(ctx, 2));
    // 0x39a088: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39A088u;
    SET_GPR_U32(ctx, 31, 0x39A090u);
    ctx->pc = 0x39A08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A088u;
    // 0x39a08c: 0xac8001c0  sw          $zero, 0x1C0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39A088u, 0x39A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A090u;
label_39a090:
    // 0x39a090: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x39a090u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x39a094: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x39a094u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x39a098: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x39a098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x39a09c: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x39a09cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x39a0a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x39a0a4: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x39a0a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x39a0a8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39a0ac: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x39a0b0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x39a0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x39a0b4: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x39a0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x39a0b8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x39a0b8u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x39a0bc: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x39a0bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x39a0c0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x39a0c0u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0));
    // 0x39a0c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39a0c8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x39a0c8u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 0));
    // 0x39a0cc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x39a0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x39a0d0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x39a0d0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 0));
    // 0x39a0d4: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x39a0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x39a0d8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x39a0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x39a0dc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x39a0e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x39a0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x39a0e4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x39a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x39a0e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A0E8u;
    {
        const bool branch_taken_0x39a0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0E8u;
        // 0x39a0ec: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a0e8) {
            ctx->pc = 0x39A0FCu;
            goto label_39a0fc;
        }
    }
    ctx->pc = 0x39A0F0u;
    // 0x39a0f0: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x39A0F0u;
    SET_GPR_U32(ctx, 31, 0x39A0F8u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39A0F0u, 0x39A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A0F8u;
label_39a0f8:
    // 0x39a0f8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_39a0fc:
    // 0x39a0fc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x39a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x39a100: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x39a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x39a104: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x39a104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x39a108: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x39a108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x39a10c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39a110: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x39a110u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x39a114: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x39a114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x39a118: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x39a118u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0));
    // 0x39a11c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39a120: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x39a120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x39a124: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x39a124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x39a128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a12c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39a12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a130: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39a130u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x39a134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39a134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a138: 0x80eeb28  j           func_3BACA0
    ctx->pc = 0x39A138u;
    ctx->pc = 0x39A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A138u;
    // 0x39a13c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BACA0u, 0x39A138u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39A140u;
}
