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

// Function: sceMpegInit
// Address: 0x39a8e8 - 0x39a998
void sceMpegInit_0x39a8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMpegInit_0x39a8e8");
#endif

    switch (ctx->pc) {
        case 0x39a8f8u: goto label_39a8f8;
        case 0x39a96cu: goto label_39a96c;
        case 0x39a988u: goto label_39a988;
        default: break;
    }

    ctx->pc = 0x39a8e8u;

    // 0x39a8e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39a8ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a8f0: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39A8F0u;
    SET_GPR_U32(ctx, 31, 0x39A8F8u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39A8F0u, 0x39A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A8F8u;
label_39a8f8:
    // 0x39a8f8: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x39a8f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x39a8fc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x39a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x39a900: 0x3529f520  ori         $t1, $t1, 0xF520
    ctx->pc = 0x39a900u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)62752);
    // 0x39a904: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x39a904u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x39a908: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x39a908u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x39a90c: 0x354af590  ori         $t2, $t2, 0xF590
    ctx->pc = 0x39a90cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)62864);
    // 0x39a910: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x39a910u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x39a914: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x39a914u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x39a918: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x39a918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x39a91c: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x39a91cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x39a920: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x39a920u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x39a924: 0x3508feff  ori         $t0, $t0, 0xFEFF
    ctx->pc = 0x39a924u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65279);
    // 0x39a928: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x39a928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x39a92c: 0x3c07fffe  lui         $a3, 0xFFFE
    ctx->pc = 0x39a92cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65534 << 16));
    // 0x39a930: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x39a930u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x39a934: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x39a934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x39a938: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x39a938u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x39a93c: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x39a93cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x39a940: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x39a940u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x39a944: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39a944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39a948: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x39a948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x39a94c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x39a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x39a950: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x39a950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x39a954: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x39a954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x39a958: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x39a958u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x39a95c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A95Cu;
    {
        const bool branch_taken_0x39a95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A95Cu;
        // 0x39a960: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a95c) {
            ctx->pc = 0x39A970u;
            goto label_39a970;
        }
    }
    ctx->pc = 0x39A964u;
    // 0x39a964: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x39A964u;
    SET_GPR_U32(ctx, 31, 0x39A96Cu);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39A964u, 0x39A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A96Cu;
label_39a96c:
    // 0x39a96c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_39a970:
    // 0x39a970: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39a970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39a974: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x39a974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x39a978: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x39a978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x39a97c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x39a97cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x39a980: 0xc0eeb60  jal         func_3BAD80
    ctx->pc = 0x39A980u;
    SET_GPR_U32(ctx, 31, 0x39A988u);
    ctx->pc = 0x39A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A980u;
    // 0x39a984: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAD80u, 0x39A980u, 0x39A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A988u;
label_39a988:
    // 0x39a988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a98c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a990: 0x3e00008  jr          $ra
    ctx->pc = 0x39A990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A990u;
        // 0x39a994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A998u;
}
