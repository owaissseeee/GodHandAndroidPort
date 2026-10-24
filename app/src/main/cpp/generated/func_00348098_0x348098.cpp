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

// Function: func_00348098
// Address: 0x348098 - 0x348158
void func_00348098_0x348098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348098_0x348098");
#endif

    switch (ctx->pc) {
        case 0x3480b4u: goto label_3480b4;
        case 0x3480c0u: goto label_3480c0;
        case 0x3480d8u: goto label_3480d8;
        case 0x3480f0u: goto label_3480f0;
        default: break;
    }

    ctx->pc = 0x348098u;

    // 0x348098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34809c: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x34809cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x3480a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3480a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3480a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3480a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3480a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3480a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3480ac: 0xc0d19f0  jal         func_3467C0
    ctx->pc = 0x3480ACu;
    SET_GPR_U32(ctx, 31, 0x3480B4u);
    ctx->pc = 0x3480B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3480ACu;
    // 0x3480b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3467C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3467C0u, 0x3480ACu, 0x3480B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3480B4u;
label_3480b4:
    // 0x3480b4: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3480b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3480b8: 0xc0d6d7e  jal         func_35B5F8
    ctx->pc = 0x3480B8u;
    SET_GPR_U32(ctx, 31, 0x3480C0u);
    ctx->pc = 0x3480BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3480B8u;
    // 0x3480bc: 0x27a50004  addiu       $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B5F8u, 0x3480B8u, 0x3480C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3480C0u;
label_3480c0:
    // 0x3480c0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3480c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3480c4: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3480C4u;
    {
        const bool branch_taken_0x3480c4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3480C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480C4u;
        // 0x3480c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3480c4) {
            ctx->pc = 0x3480E8u;
            goto label_3480e8;
        }
    }
    ctx->pc = 0x3480CCu;
    // 0x3480cc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3480ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3480d0: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3480D0u;
    SET_GPR_U32(ctx, 31, 0x3480D8u);
    ctx->pc = 0x3480D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3480D0u;
    // 0x3480d4: 0x24849210  addiu       $a0, $a0, -0x6DF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3480D0u, 0x3480D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3480D8u;
label_3480d8:
    // 0x3480d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3480d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3480dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3480dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3480e0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3480E0u;
    {
        const bool branch_taken_0x3480e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3480E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3480E0u;
        // 0x3480e4: 0xae0302fc  sw          $v1, 0x2FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3480e0) {
            ctx->pc = 0x348144u;
            goto label_348144;
        }
    }
    ctx->pc = 0x3480E8u;
label_3480e8:
    // 0x3480e8: 0xc0d13c6  jal         func_344F18
    ctx->pc = 0x3480E8u;
    SET_GPR_U32(ctx, 31, 0x3480F0u);
    ctx->pc = 0x344F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344F18u, 0x3480E8u, 0x3480F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3480F0u;
label_3480f0:
    // 0x3480f0: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x3480f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3480f4: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3480f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3480f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3480f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3480fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3480fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x348100: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x348100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x348104: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x348104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x348108: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x348108u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34810c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34810Cu;
    {
        const bool branch_taken_0x34810c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34810c) {
            ctx->pc = 0x348110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34810Cu;
            // 0x348110: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x348114u;
            goto label_348114;
        }
    }
    ctx->pc = 0x348114u;
label_348114:
    // 0x348114: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x348114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348118: 0x2012  mflo        $a0
    ctx->pc = 0x348118u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x34811c: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x34811cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x348120: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x348120u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x348124: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x348124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x348128: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x348128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34812c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x34812cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x348130: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x348130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x348134: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x348134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x348138: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x348138u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x34813c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34813cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x348140: 0xae0202fc  sw          $v0, 0x2FC($s0)
    ctx->pc = 0x348140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 2));
label_348144:
    // 0x348144: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x348144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348148: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x348148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34814c: 0x3e00008  jr          $ra
    ctx->pc = 0x34814Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34814Cu;
        // 0x348150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34814Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348154u;
    // 0x348154: 0x0  nop
    ctx->pc = 0x348154u;
    // NOP
    ctx->pc = 0x348158u;
}
