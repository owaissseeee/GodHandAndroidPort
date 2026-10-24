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

// Function: func_0037A1F0
// Address: 0x37a1f0 - 0x37a298
void func_0037A1F0_0x37a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037A1F0_0x37a1f0");
#endif

    switch (ctx->pc) {
        case 0x37a254u: goto label_37a254;
        case 0x37a268u: goto label_37a268;
        case 0x37a278u: goto label_37a278;
        default: break;
    }

    ctx->pc = 0x37a1f0u;

    // 0x37a1f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37a1f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a1f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37a1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37a1fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37a200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a204: 0x82060007  lb          $a2, 0x7($s0)
    ctx->pc = 0x37a204u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x37a208: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x37a208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x37a20c: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x37a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x37a210: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x37a210u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a214: 0x8485001c  lh          $a1, 0x1C($a0)
    ctx->pc = 0x37a214u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x37a218: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x37A218u;
    {
        const bool branch_taken_0x37a218 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A218u;
        // 0x37a21c: 0x84630016  lh          $v1, 0x16($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a218) {
            ctx->pc = 0x37A25Cu;
            goto label_37a25c;
        }
    }
    ctx->pc = 0x37A220u;
    // 0x37a220: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x37a220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x37a224: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37A224u;
    {
        const bool branch_taken_0x37a224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A224u;
        // 0x37a228: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a224) {
            ctx->pc = 0x37A23Cu;
            goto label_37a23c;
        }
    }
    ctx->pc = 0x37A22Cu;
    // 0x37a22c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x37A22Cu;
    {
        const bool branch_taken_0x37a22c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A22Cu;
        // 0x37a230: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a22c) {
            ctx->pc = 0x37A24Cu;
            goto label_37a24c;
        }
    }
    ctx->pc = 0x37A234u;
    // 0x37a234: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x37A234u;
    {
        const bool branch_taken_0x37a234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A234u;
        // 0x37a238: 0x82020007  lb          $v0, 0x7($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a234) {
            ctx->pc = 0x37A27Cu;
            goto label_37a27c;
        }
    }
    ctx->pc = 0x37A23Cu;
label_37a23c:
    // 0x37a23c: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37A23Cu;
    {
        const bool branch_taken_0x37a23c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A23Cu;
        // 0x37a240: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a23c) {
            ctx->pc = 0x37A270u;
            goto label_37a270;
        }
    }
    ctx->pc = 0x37A244u;
    // 0x37a244: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x37A244u;
    {
        const bool branch_taken_0x37a244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A244u;
        // 0x37a248: 0x82020007  lb          $v0, 0x7($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a244) {
            ctx->pc = 0x37A27Cu;
            goto label_37a27c;
        }
    }
    ctx->pc = 0x37A24Cu;
label_37a24c:
    // 0x37a24c: 0xc0dd32e  jal         func_374CB8
    ctx->pc = 0x37A24Cu;
    SET_GPR_U32(ctx, 31, 0x37A254u);
    ctx->pc = 0x37A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A24Cu;
    // 0x37a250: 0x2606009c  addiu       $a2, $s0, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374CB8u, 0x37A24Cu, 0x37A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A254u;
label_37a254:
    // 0x37a254: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x37A254u;
    {
        const bool branch_taken_0x37a254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A254u;
        // 0x37a258: 0x82020007  lb          $v0, 0x7($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a254) {
            ctx->pc = 0x37A27Cu;
            goto label_37a27c;
        }
    }
    ctx->pc = 0x37A25Cu;
label_37a25c:
    // 0x37a25c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x37a25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a260: 0xc0e1b78  jal         func_386DE0
    ctx->pc = 0x37A260u;
    SET_GPR_U32(ctx, 31, 0x37A268u);
    ctx->pc = 0x37A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A260u;
    // 0x37a264: 0x260600cc  addiu       $a2, $s0, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386DE0u, 0x37A260u, 0x37A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A268u;
label_37a268:
    // 0x37a268: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37A268u;
    {
        const bool branch_taken_0x37a268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A268u;
        // 0x37a26c: 0x82020007  lb          $v0, 0x7($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a268) {
            ctx->pc = 0x37A27Cu;
            goto label_37a27c;
        }
    }
    ctx->pc = 0x37A270u;
label_37a270:
    // 0x37a270: 0xc0dd6ac  jal         func_375AB0
    ctx->pc = 0x37A270u;
    SET_GPR_U32(ctx, 31, 0x37A278u);
    ctx->pc = 0x37A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A270u;
    // 0x37a274: 0x2606012c  addiu       $a2, $s0, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375AB0u, 0x37A270u, 0x37A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A278u;
label_37a278:
    // 0x37a278: 0x82020007  lb          $v0, 0x7($s0)
    ctx->pc = 0x37a278u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_37a27c:
    // 0x37a27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a280: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x37a280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37a284: 0x90430022  lbu         $v1, 0x22($v0)
    ctx->pc = 0x37a284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x37a288: 0xa2030025  sb          $v1, 0x25($s0)
    ctx->pc = 0x37a288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x37a28c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37a28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a290: 0x3e00008  jr          $ra
    ctx->pc = 0x37A290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A290u;
        // 0x37a294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A298u;
}
