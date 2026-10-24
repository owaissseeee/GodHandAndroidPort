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

// Function: sync__7istream
// Address: 0x387958 - 0x3879c0
void sync__7istream_0x387958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sync__7istream_0x387958");
#endif

    switch (ctx->pc) {
        case 0x387958u: goto label_387958;
        case 0x38795cu: goto label_38795c;
        case 0x387960u: goto label_387960;
        case 0x387964u: goto label_387964;
        case 0x387968u: goto label_387968;
        case 0x38796cu: goto label_38796c;
        case 0x387970u: goto label_387970;
        case 0x387974u: goto label_387974;
        case 0x387978u: goto label_387978;
        case 0x38797cu: goto label_38797c;
        case 0x387980u: goto label_387980;
        case 0x387984u: goto label_387984;
        case 0x387988u: goto label_387988;
        case 0x38798cu: goto label_38798c;
        case 0x387990u: goto label_387990;
        case 0x387994u: goto label_387994;
        case 0x387998u: goto label_387998;
        case 0x38799cu: goto label_38799c;
        case 0x3879a0u: goto label_3879a0;
        case 0x3879a4u: goto label_3879a4;
        case 0x3879a8u: goto label_3879a8;
        case 0x3879acu: goto label_3879ac;
        case 0x3879b0u: goto label_3879b0;
        case 0x3879b4u: goto label_3879b4;
        case 0x3879b8u: goto label_3879b8;
        case 0x3879bcu: goto label_3879bc;
        default: break;
    }

    ctx->pc = 0x387958u;

label_387958:
    // 0x387958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x387958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38795c:
    // 0x38795c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38795cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_387960:
    // 0x387960: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x387960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_387964:
    // 0x387964: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_387968:
    // 0x387968: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x387968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38796c:
    // 0x38796c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38796cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_387970:
    // 0x387970: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_387974:
    if (ctx->pc == 0x387974u) {
        ctx->pc = 0x387974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387970u;
        // 0x387974: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387978u;
        goto label_387978;
    }
    ctx->pc = 0x387970u;
    {
        const bool branch_taken_0x387970 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x387970) {
            ctx->pc = 0x387974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387970u;
            // 0x387974: 0x8ca30050  lw          $v1, 0x50($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387980u;
            goto label_387980;
        }
    }
    ctx->pc = 0x387978u;
label_387978:
    // 0x387978: 0x1000000d  b           . + 4 + (0xD << 2)
label_38797c:
    if (ctx->pc == 0x38797Cu) {
        ctx->pc = 0x38797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387978u;
        // 0x38797c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387980u;
        goto label_387980;
    }
    ctx->pc = 0x387978u;
    {
        const bool branch_taken_0x387978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387978u;
        // 0x38797c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387978) {
            ctx->pc = 0x3879B0u;
            goto label_3879b0;
        }
    }
    ctx->pc = 0x387980u;
label_387980:
    // 0x387980: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x387980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_387984:
    // 0x387984: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x387984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_387988:
    // 0x387988: 0x40f809  jalr        $v0
label_38798c:
    if (ctx->pc == 0x38798Cu) {
        ctx->pc = 0x38798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387988u;
        // 0x38798c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387990u;
        goto label_387990;
    }
    ctx->pc = 0x387988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x387990u);
        ctx->pc = 0x38798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387988u;
        // 0x38798c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387988u, 0x387990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387990u;
label_387990:
    // 0x387990: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_387994:
    if (ctx->pc == 0x387994u) {
        ctx->pc = 0x387994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387990u;
        // 0x387994: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387998u;
        goto label_387998;
    }
    ctx->pc = 0x387990u;
    {
        const bool branch_taken_0x387990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387990u;
        // 0x387994: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387990) {
            ctx->pc = 0x3879ACu;
            goto label_3879ac;
        }
    }
    ctx->pc = 0x387998u;
label_387998:
    // 0x387998: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x387998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38799c:
    // 0x38799c: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x38799cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
label_3879a0:
    // 0x3879a0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3879a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_3879a4:
    // 0x3879a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3879a8:
    if (ctx->pc == 0x3879A8u) {
        ctx->pc = 0x3879A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879A4u;
        // 0x3879a8: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3879ACu;
        goto label_3879ac;
    }
    ctx->pc = 0x3879A4u;
    {
        const bool branch_taken_0x3879a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3879A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879A4u;
        // 0x3879a8: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3879a4) {
            ctx->pc = 0x3879B0u;
            goto label_3879b0;
        }
    }
    ctx->pc = 0x3879ACu;
label_3879ac:
    // 0x3879ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3879acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3879b0:
    // 0x3879b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3879b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3879b4:
    // 0x3879b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3879b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3879b8:
    // 0x3879b8: 0x3e00008  jr          $ra
label_3879bc:
    if (ctx->pc == 0x3879BCu) {
        ctx->pc = 0x3879BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879B8u;
        // 0x3879bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3879C0u;
        goto label_fallthrough_0x3879b8;
    }
    ctx->pc = 0x3879B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3879BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879B8u;
        // 0x3879bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3879B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3879b8:
    ctx->pc = 0x3879C0u;
}
