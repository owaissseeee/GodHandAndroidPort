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

// Function: ComboObj_startNext
// Address: 0x126918 - 0x1269e0
void ComboObj_startNext_0x126918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ComboObj_startNext_0x126918");
#endif

    switch (ctx->pc) {
        case 0x126948u: goto label_126948;
        case 0x12696cu: goto label_12696c;
        case 0x126980u: goto label_126980;
        case 0x1269b8u: goto label_1269b8;
        default: break;
    }

    ctx->pc = 0x126918u;

    // 0x126918: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x126918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12691c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x12691cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x126920: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x126920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x126924: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x126924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x126928: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12692c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12692cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x126930: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x126930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x126934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12693c: 0x962505e2  lhu         $a1, 0x5E2($s1)
    ctx->pc = 0x12693cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1506)));
    // 0x126940: 0xc07ee0c  jal         func_1FB830
    ctx->pc = 0x126940u;
    SET_GPR_U32(ctx, 31, 0x126948u);
    ctx->pc = 0x126944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126940u;
    // 0x126944: 0x963005e0  lhu         $s0, 0x5E0($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB830u, 0x126940u, 0x126948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126948u;
label_126948:
    // 0x126948: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x126948u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12694c: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12694Cu;
    {
        const bool branch_taken_0x12694c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12694c) {
            ctx->pc = 0x126950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12694Cu;
            // 0x126950: 0x962505e2  lhu         $a1, 0x5E2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1506)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126960u;
            goto label_126960;
        }
    }
    ctx->pc = 0x126954u;
    // 0x126954: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x126954u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x126958: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x126958u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x12695c: 0x962505e2  lhu         $a1, 0x5E2($s1)
    ctx->pc = 0x12695cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1506)));
label_126960:
    // 0x126960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x126960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126964: 0xc07edb2  jal         func_1FB6C8
    ctx->pc = 0x126964u;
    SET_GPR_U32(ctx, 31, 0x12696Cu);
    ctx->pc = 0x126968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126964u;
    // 0x126968: 0x962605e0  lhu         $a2, 0x5E0($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB6C8u, 0x126964u, 0x12696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12696Cu;
label_12696c:
    // 0x12696c: 0x962505e2  lhu         $a1, 0x5E2($s1)
    ctx->pc = 0x12696cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1506)));
    // 0x126970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126974: 0x962605e0  lhu         $a2, 0x5E0($s1)
    ctx->pc = 0x126974u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1504)));
    // 0x126978: 0xc07edd4  jal         func_1FB750
    ctx->pc = 0x126978u;
    SET_GPR_U32(ctx, 31, 0x126980u);
    ctx->pc = 0x12697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126978u;
    // 0x12697c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB750u, 0x126978u, 0x126980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126980u;
label_126980:
    // 0x126980: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x126980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x126984: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x126984u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x126988: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x126988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12698c: 0x24e7c7d0  addiu       $a3, $a3, -0x3830
    ctx->pc = 0x12698cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952912));
    // 0x126990: 0xa62005e4  sh          $zero, 0x5E4($s1)
    ctx->pc = 0x126990u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1508), (uint16_t)GPR_U32(ctx, 0));
    // 0x126994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126998: 0xa62005e6  sh          $zero, 0x5E6($s1)
    ctx->pc = 0x126998u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1510), (uint16_t)GPR_U32(ctx, 0));
    // 0x12699c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12699cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1269a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269a4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1269a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1269a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1269a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1269ac: 0xae221668  sw          $v0, 0x1668($s1)
    ctx->pc = 0x1269acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5736), GPR_U32(ctx, 2));
    // 0x1269b0: 0xc049a78  jal         func_1269E0
    ctx->pc = 0x1269B0u;
    SET_GPR_U32(ctx, 31, 0x1269B8u);
    ctx->pc = 0x1269B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1269B0u;
    // 0x1269b4: 0xae22166c  sw          $v0, 0x166C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1269E0u, 0x1269B0u, 0x1269B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269B8u;
label_1269b8:
    // 0x1269b8: 0x962305e0  lhu         $v1, 0x5E0($s1)
    ctx->pc = 0x1269b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1504)));
    // 0x1269bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1269bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1269c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1269c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1269c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1269c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1269c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1269cc: 0xa62305e0  sh          $v1, 0x5E0($s1)
    ctx->pc = 0x1269ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 3));
    // 0x1269d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1269d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1269d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1269d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1269d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1269D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1269DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269D8u;
        // 0x1269dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1269D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1269E0u;
}
