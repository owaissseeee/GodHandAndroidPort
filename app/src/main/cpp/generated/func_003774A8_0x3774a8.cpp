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

// Function: func_003774A8
// Address: 0x3774a8 - 0x377520
void func_003774A8_0x3774a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003774A8_0x3774a8");
#endif

    switch (ctx->pc) {
        case 0x3774a8u: goto label_3774a8;
        case 0x3774acu: goto label_3774ac;
        case 0x3774b0u: goto label_3774b0;
        case 0x3774b4u: goto label_3774b4;
        case 0x3774b8u: goto label_3774b8;
        case 0x3774bcu: goto label_3774bc;
        case 0x3774c0u: goto label_3774c0;
        case 0x3774c4u: goto label_3774c4;
        case 0x3774c8u: goto label_3774c8;
        case 0x3774ccu: goto label_3774cc;
        case 0x3774d0u: goto label_3774d0;
        case 0x3774d4u: goto label_3774d4;
        case 0x3774d8u: goto label_3774d8;
        case 0x3774dcu: goto label_3774dc;
        case 0x3774e0u: goto label_3774e0;
        case 0x3774e4u: goto label_3774e4;
        case 0x3774e8u: goto label_3774e8;
        case 0x3774ecu: goto label_3774ec;
        case 0x3774f0u: goto label_3774f0;
        case 0x3774f4u: goto label_3774f4;
        case 0x3774f8u: goto label_3774f8;
        case 0x3774fcu: goto label_3774fc;
        case 0x377500u: goto label_377500;
        case 0x377504u: goto label_377504;
        case 0x377508u: goto label_377508;
        case 0x37750cu: goto label_37750c;
        case 0x377510u: goto label_377510;
        case 0x377514u: goto label_377514;
        case 0x377518u: goto label_377518;
        case 0x37751cu: goto label_37751c;
        default: break;
    }

    ctx->pc = 0x3774a8u;

label_3774a8:
    // 0x3774a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3774a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3774ac:
    // 0x3774ac: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x3774acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
label_3774b0:
    // 0x3774b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3774b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3774b4:
    // 0x3774b4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3774b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_3774b8:
    // 0x3774b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3774b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3774bc:
    // 0x3774bc: 0x2450e910  addiu       $s0, $v0, -0x16F0
    ctx->pc = 0x3774bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961424));
label_3774c0:
    // 0x3774c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3774c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3774c4:
    // 0x3774c4: 0x26110140  addiu       $s1, $s0, 0x140
    ctx->pc = 0x3774c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_3774c8:
    // 0x3774c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3774c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3774cc:
    // 0x3774cc: 0x247221a8  addiu       $s2, $v1, 0x21A8
    ctx->pc = 0x3774ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 8616));
label_3774d0:
    // 0x3774d0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3774d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3774d4:
    // 0x3774d4: 0x0  nop
    ctx->pc = 0x3774d4u;
    // NOP
label_3774d8:
    // 0x3774d8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3774dc:
    if (ctx->pc == 0x3774DCu) {
        ctx->pc = 0x3774DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3774D8u;
        // 0x3774dc: 0x261000a0  addiu       $s0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3774E0u;
        goto label_3774e0;
    }
    ctx->pc = 0x3774D8u;
    {
        const bool branch_taken_0x3774d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3774d8) {
            ctx->pc = 0x3774DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3774D8u;
            // 0x3774dc: 0x261000a0  addiu       $s0, $s0, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3774FCu;
            goto label_3774fc;
        }
    }
    ctx->pc = 0x3774E0u;
label_3774e0:
    // 0x3774e0: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x3774e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_3774e4:
    // 0x3774e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3774e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3774e8:
    // 0x3774e8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3774e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3774ec:
    // 0x3774ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3774ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3774f0:
    // 0x3774f0: 0x60f809  jalr        $v1
label_3774f4:
    if (ctx->pc == 0x3774F4u) {
        ctx->pc = 0x3774F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3774F0u;
        // 0x3774f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3774F8u;
        goto label_3774f8;
    }
    ctx->pc = 0x3774F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3774F8u);
        ctx->pc = 0x3774F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3774F0u;
        // 0x3774f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3774F0u, 0x3774F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3774F8u;
label_3774f8:
    // 0x3774f8: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x3774f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3774fc:
    // 0x3774fc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x3774fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_377500:
    // 0x377500: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_377504:
    if (ctx->pc == 0x377504u) {
        ctx->pc = 0x377504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377500u;
        // 0x377504: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377508u;
        goto label_377508;
    }
    ctx->pc = 0x377500u;
    {
        const bool branch_taken_0x377500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x377500) {
            ctx->pc = 0x377504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377500u;
            // 0x377504: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3774D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3774d8;
        }
    }
    ctx->pc = 0x377508u;
label_377508:
    // 0x377508: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x377508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37750c:
    // 0x37750c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37750cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_377510:
    // 0x377510: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x377510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377514:
    // 0x377514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_377518:
    // 0x377518: 0x3e00008  jr          $ra
label_37751c:
    if (ctx->pc == 0x37751Cu) {
        ctx->pc = 0x37751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377518u;
        // 0x37751c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377520u;
        goto label_fallthrough_0x377518;
    }
    ctx->pc = 0x377518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377518u;
        // 0x37751c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x377518:
    ctx->pc = 0x377520u;
}
