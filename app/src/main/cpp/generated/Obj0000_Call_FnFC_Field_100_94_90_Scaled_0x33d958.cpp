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

// Function: Obj0000_Call_FnFC_Field_100_94_90_Scaled
// Address: 0x33d958 - 0x33d9c0
void Obj0000_Call_FnFC_Field_100_94_90_Scaled_0x33d958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Call_FnFC_Field_100_94_90_Scaled_0x33d958");
#endif

    switch (ctx->pc) {
        case 0x33d958u: goto label_33d958;
        case 0x33d95cu: goto label_33d95c;
        case 0x33d960u: goto label_33d960;
        case 0x33d964u: goto label_33d964;
        case 0x33d968u: goto label_33d968;
        case 0x33d96cu: goto label_33d96c;
        case 0x33d970u: goto label_33d970;
        case 0x33d974u: goto label_33d974;
        case 0x33d978u: goto label_33d978;
        case 0x33d97cu: goto label_33d97c;
        case 0x33d980u: goto label_33d980;
        case 0x33d984u: goto label_33d984;
        case 0x33d988u: goto label_33d988;
        case 0x33d98cu: goto label_33d98c;
        case 0x33d990u: goto label_33d990;
        case 0x33d994u: goto label_33d994;
        case 0x33d998u: goto label_33d998;
        case 0x33d99cu: goto label_33d99c;
        case 0x33d9a0u: goto label_33d9a0;
        case 0x33d9a4u: goto label_33d9a4;
        case 0x33d9a8u: goto label_33d9a8;
        case 0x33d9acu: goto label_33d9ac;
        case 0x33d9b0u: goto label_33d9b0;
        case 0x33d9b4u: goto label_33d9b4;
        case 0x33d9b8u: goto label_33d9b8;
        case 0x33d9bcu: goto label_33d9bc;
        default: break;
    }

    ctx->pc = 0x33d958u;

label_33d958:
    // 0x33d958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33d95c:
    // 0x33d95c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33d960:
    // 0x33d960: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33d960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33d964:
    // 0x33d964: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_33d968:
    // 0x33d968: 0x8202000e  lb          $v0, 0xE($s0)
    ctx->pc = 0x33d968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_33d96c:
    // 0x33d96c: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x33d96cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_33d970:
    // 0x33d970: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x33d970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_33d974:
    // 0x33d974: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x33d974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_33d978:
    // 0x33d978: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x33d978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_33d97c:
    // 0x33d97c: 0x8e0700fc  lw          $a3, 0xFC($s0)
    ctx->pc = 0x33d97cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_33d980:
    // 0x33d980: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x33d980u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_33d984:
    // 0x33d984: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x33d984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_33d988:
    // 0x33d988: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x33d988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_33d98c:
    // 0x33d98c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x33d98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_33d990:
    // 0x33d990: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33d990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_33d994:
    // 0x33d994: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x33d994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_33d998:
    // 0x33d998: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x33d998u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_33d99c:
    // 0x33d99c: 0xe0f809  jalr        $a3
label_33d9a0:
    if (ctx->pc == 0x33D9A0u) {
        ctx->pc = 0x33D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D99Cu;
        // 0x33d9a0: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D9A4u;
        goto label_33d9a4;
    }
    ctx->pc = 0x33D99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x33D9A4u);
        ctx->pc = 0x33D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D99Cu;
        // 0x33d9a0: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D99Cu, 0x33D9A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D9A4u;
label_33d9a4:
    // 0x33d9a4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x33d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_33d9a8:
    // 0x33d9a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33d9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33d9ac:
    // 0x33d9ac: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x33d9acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_33d9b0:
    // 0x33d9b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d9b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d9b4:
    // 0x33d9b4: 0x3e00008  jr          $ra
label_33d9b8:
    if (ctx->pc == 0x33D9B8u) {
        ctx->pc = 0x33D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D9B4u;
        // 0x33d9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D9BCu;
        goto label_33d9bc;
    }
    ctx->pc = 0x33D9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D9B4u;
        // 0x33d9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D9BCu;
label_33d9bc:
    // 0x33d9bc: 0x0  nop
    ctx->pc = 0x33d9bcu;
    // NOP
    ctx->pc = 0x33d9c0u;
}
