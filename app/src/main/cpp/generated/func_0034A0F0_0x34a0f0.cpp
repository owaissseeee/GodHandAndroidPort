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

// Function: func_0034A0F0
// Address: 0x34a0f0 - 0x34a358
void func_0034A0F0_0x34a0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034A0F0_0x34a0f0");
#endif

    switch (ctx->pc) {
        case 0x34a144u: goto label_34a144;
        case 0x34a158u: goto label_34a158;
        case 0x34a16cu: goto label_34a16c;
        case 0x34a184u: goto label_34a184;
        case 0x34a1a4u: goto label_34a1a4;
        case 0x34a1c0u: goto label_34a1c0;
        case 0x34a23cu: goto label_34a23c;
        case 0x34a298u: goto label_34a298;
        case 0x34a2b4u: goto label_34a2b4;
        case 0x34a2f8u: goto label_34a2f8;
        default: break;
    }

    ctx->pc = 0x34a0f0u;

    // 0x34a0f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x34a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x34a0f4: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x34a0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x34a0f8: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x34a0f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a0fc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x34a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x34a100: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x34a100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x34a104: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x34a104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a108: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x34a108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x34a10c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x34a10cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a110: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x34a110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x34a114: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x34a114u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a118: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34a118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x34a11c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x34a11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x34a120: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x34a120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x34a124: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34a124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a128: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x34a128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x34a12c: 0x26910d30  addiu       $s1, $s4, 0xD30
    ctx->pc = 0x34a12cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 3376));
    // 0x34a130: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x34a130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x34a134: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x34a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x34a138: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x34a138u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x34a13c: 0xc0d29be  jal         func_34A6F8
    ctx->pc = 0x34A13Cu;
    SET_GPR_U32(ctx, 31, 0x34A144u);
    ctx->pc = 0x34A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A13Cu;
    // 0x34a140: 0x8e932004  lw          $s3, 0x2004($s4) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A6F8u, 0x34A13Cu, 0x34A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A144u;
label_34a144:
    // 0x34a144: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x34A144u;
    {
        const bool branch_taken_0x34a144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a144) {
            ctx->pc = 0x34A148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A144u;
            // 0x34a148: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A188u;
            goto label_34a188;
        }
    }
    ctx->pc = 0x34A14Cu;
    // 0x34a14c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x34a14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34a150: 0xc0d6a5a  jal         func_35A968
    ctx->pc = 0x34A150u;
    SET_GPR_U32(ctx, 31, 0x34A158u);
    ctx->pc = 0x34A154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A150u;
    // 0x34a154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A968u, 0x34A150u, 0x34A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A158u;
label_34a158:
    // 0x34a158: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x34a158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a15c: 0x6400072  bltz        $s2, . + 4 + (0x72 << 2)
    ctx->pc = 0x34A15Cu;
    {
        const bool branch_taken_0x34a15c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x34A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A15Cu;
        // 0x34a160: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a15c) {
            ctx->pc = 0x34A328u;
            goto label_34a328;
        }
    }
    ctx->pc = 0x34A164u;
    // 0x34a164: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34A164u;
    SET_GPR_U32(ctx, 31, 0x34A16Cu);
    ctx->pc = 0x34A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A164u;
    // 0x34a168: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34A164u, 0x34A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A16Cu;
label_34a16c:
    // 0x34a16c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x34A16Cu;
    {
        const bool branch_taken_0x34a16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a16c) {
            ctx->pc = 0x34A170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A16Cu;
            // 0x34a170: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A198u;
            goto label_34a198;
        }
    }
    ctx->pc = 0x34A174u;
    // 0x34a174: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x34a174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34a178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a17c: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x34A17Cu;
    SET_GPR_U32(ctx, 31, 0x34A184u);
    ctx->pc = 0x34A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A17Cu;
    // 0x34a180: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x34A17Cu, 0x34A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A184u;
label_34a184:
    // 0x34a184: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x34a184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_34a188:
    // 0x34a188: 0x2442a038  addiu       $v0, $v0, -0x5FC8
    ctx->pc = 0x34a188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942776));
    // 0x34a18c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x34A18Cu;
    {
        const bool branch_taken_0x34a18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A18Cu;
        // 0x34a190: 0xae62003c  sw          $v0, 0x3C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a18c) {
            ctx->pc = 0x34A328u;
            goto label_34a328;
        }
    }
    ctx->pc = 0x34A194u;
    // 0x34a194: 0x0  nop
    ctx->pc = 0x34a194u;
    // NOP
label_34a198:
    // 0x34a198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a19c: 0xc0d6a72  jal         func_35A9C8
    ctx->pc = 0x34A19Cu;
    SET_GPR_U32(ctx, 31, 0x34A1A4u);
    ctx->pc = 0x34A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A19Cu;
    // 0x34a1a0: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A9C8u, 0x34A19Cu, 0x34A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A1A4u;
label_34a1a4:
    // 0x34a1a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34a1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a1a8: 0x600005f  bltz        $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x34A1A8u;
    {
        const bool branch_taken_0x34a1a8 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x34A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1A8u;
        // 0x34a1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a1a8) {
            ctx->pc = 0x34A328u;
            goto label_34a328;
        }
    }
    ctx->pc = 0x34A1B0u;
    // 0x34a1b0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x34a1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34a1b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34a1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a1b8: 0xc0d6a90  jal         func_35AA40
    ctx->pc = 0x34A1B8u;
    SET_GPR_U32(ctx, 31, 0x34A1C0u);
    ctx->pc = 0x34A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A1B8u;
    // 0x34a1bc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA40u, 0x34A1B8u, 0x34A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A1C0u;
label_34a1c0:
    // 0x34a1c0: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x34a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x34a1c4: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x34a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x34a1c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x34a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34a1cc: 0x460003c  bltz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x34A1CCu;
    {
        const bool branch_taken_0x34a1cc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x34A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1CCu;
        // 0x34a1d0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a1cc) {
            ctx->pc = 0x34A2C0u;
            goto label_34a2c0;
        }
    }
    ctx->pc = 0x34A1D4u;
    // 0x34a1d4: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x34a1d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x34a1d8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x34a1d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34a1dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x34a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34a1e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34a1e4: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x34a1e4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34a1e8: 0x1a200022  blez        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x34A1E8u;
    {
        const bool branch_taken_0x34a1e8 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x34A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A1E8u;
        // 0x34a1ec: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a1e8) {
            ctx->pc = 0x34A274u;
            goto label_34a274;
        }
    }
    ctx->pc = 0x34A1F0u;
    // 0x34a1f0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34a1f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x34a1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a1f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34a1fc: 0x27a6000c  addiu       $a2, $sp, 0xC
    ctx->pc = 0x34a1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x34a200: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34a200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34a204: 0x2a2001a  div         $zero, $s5, $v0
    ctx->pc = 0x34a204u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34a208: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34A208u;
    {
        const bool branch_taken_0x34a208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a208) {
            ctx->pc = 0x34A20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A208u;
            // 0x34a20c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A210u;
            goto label_34a210;
        }
    }
    ctx->pc = 0x34A210u;
label_34a210:
    // 0x34a210: 0x1812  mflo        $v1
    ctx->pc = 0x34a210u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x34a214: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x34a214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34a218: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x34a218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34a21c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34a220: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34a220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34a224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34a224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a228: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x34a228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x34a22c: 0x222800a  movz        $s0, $s1, $v0
    ctx->pc = 0x34a22cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x34a230: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34a230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a234: 0xc0d28d6  jal         func_34A358
    ctx->pc = 0x34A234u;
    SET_GPR_U32(ctx, 31, 0x34A23Cu);
    ctx->pc = 0x34A238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A234u;
    // 0x34a238: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A358u, 0x34A234u, 0x34A23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A23Cu;
label_34a23c:
    // 0x34a23c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a240: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x34a240u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a244: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x34a244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34a248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34a24c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34a250: 0x2c2001a  div         $zero, $s6, $v0
    ctx->pc = 0x34a250u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 22);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34a254: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x34A254u;
    {
        const bool branch_taken_0x34a254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a254) {
            ctx->pc = 0x34A258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A254u;
            // 0x34a258: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A25Cu;
            goto label_34a25c;
        }
    }
    ctx->pc = 0x34A25Cu;
label_34a25c:
    // 0x34a25c: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x34a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x34a260: 0x2012  mflo        $a0
    ctx->pc = 0x34a260u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x34a264: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x34a264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x34a268: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34a268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34a26c: 0x1e00000b  bgtz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x34A26Cu;
    {
        const bool branch_taken_0x34a26c = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x34A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A26Cu;
        // 0x34a270: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a26c) {
            ctx->pc = 0x34A29Cu;
            goto label_34a29c;
        }
    }
    ctx->pc = 0x34A274u;
label_34a274:
    // 0x34a274: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x34a274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34a278: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34A278u;
    {
        const bool branch_taken_0x34a278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A278u;
        // 0x34a27c: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a278) {
            ctx->pc = 0x34A29Cu;
            goto label_34a29c;
        }
    }
    ctx->pc = 0x34A280u;
    // 0x34a280: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x34a280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a284: 0x2442a038  addiu       $v0, $v0, -0x5FC8
    ctx->pc = 0x34a284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942776));
    // 0x34a288: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x34a288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a28c: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x34a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x34a290: 0xc0cadfc  jal         func_32B7F0
    ctx->pc = 0x34A290u;
    SET_GPR_U32(ctx, 31, 0x34A298u);
    ctx->pc = 0x34A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A290u;
    // 0x34a294: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B7F0u, 0x34A290u, 0x34A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A298u;
label_34a298:
    // 0x34a298: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x34a298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_34a29c:
    // 0x34a29c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x34a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34a2a0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x34A2A0u;
    {
        const bool branch_taken_0x34a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A2A0u;
        // 0x34a2a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a2a0) {
            ctx->pc = 0x34A318u;
            goto label_34a318;
        }
    }
    ctx->pc = 0x34A2A8u;
    // 0x34a2a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34a2ac: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x34A2ACu;
    SET_GPR_U32(ctx, 31, 0x34A2B4u);
    ctx->pc = 0x34A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A2ACu;
    // 0x34a2b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x34A2ACu, 0x34A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A2B4u;
label_34a2b4:
    // 0x34a2b4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x34A2B4u;
    {
        const bool branch_taken_0x34a2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A2B4u;
        // 0x34a2b8: 0xde8209c8  ld          $v0, 0x9C8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 2504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a2b4) {
            ctx->pc = 0x34A31Cu;
            goto label_34a31c;
        }
    }
    ctx->pc = 0x34A2BCu;
    // 0x34a2bc: 0x0  nop
    ctx->pc = 0x34a2bcu;
    // NOP
label_34a2c0:
    // 0x34a2c0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x34a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34a2c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x34A2C4u;
    {
        const bool branch_taken_0x34a2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A2C4u;
        // 0x34a2c8: 0x32023  negu        $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a2c4) {
            ctx->pc = 0x34A318u;
            goto label_34a318;
        }
    }
    ctx->pc = 0x34A2CCu;
    // 0x34a2cc: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x34a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x34a2d0: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x34a2d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x34a2d4: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x34a2d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x34a2d8: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x34a2d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x34a2dc: 0x48140  sll         $s0, $a0, 5
    ctx->pc = 0x34a2dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x34a2e0: 0x5a00000b  blezl       $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x34A2E0u;
    {
        const bool branch_taken_0x34a2e0 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x34a2e0) {
            ctx->pc = 0x34A2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A2E0u;
            // 0x34a2e4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A310u;
            goto label_34a310;
        }
    }
    ctx->pc = 0x34A2E8u;
    // 0x34a2e8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x34a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a2ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x34a2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a2f0: 0xc0d28f8  jal         func_34A3E0
    ctx->pc = 0x34A2F0u;
    SET_GPR_U32(ctx, 31, 0x34A2F8u);
    ctx->pc = 0x34A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A2F0u;
    // 0x34a2f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A3E0u, 0x34A2F0u, 0x34A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A2F8u;
label_34a2f8:
    // 0x34a2f8: 0x8e630038  lw          $v1, 0x38($s3)
    ctx->pc = 0x34a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x34a2fc: 0x2022023  subu        $a0, $s0, $v0
    ctx->pc = 0x34a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34a300: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x34a300u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34a304: 0x1c800004  bgtz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A304u;
    {
        const bool branch_taken_0x34a304 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x34A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A304u;
        // 0x34a308: 0xae630038  sw          $v1, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a304) {
            ctx->pc = 0x34A318u;
            goto label_34a318;
        }
    }
    ctx->pc = 0x34A30Cu;
    // 0x34a30c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x34a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_34a310:
    // 0x34a310: 0x2442a038  addiu       $v0, $v0, -0x5FC8
    ctx->pc = 0x34a310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942776));
    // 0x34a314: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x34a314u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
label_34a318:
    // 0x34a318: 0xde8209c8  ld          $v0, 0x9C8($s4)
    ctx->pc = 0x34a318u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 2504)));
label_34a31c:
    // 0x34a31c: 0xafd60000  sw          $s6, 0x0($fp)
    ctx->pc = 0x34a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
    // 0x34a320: 0x2c2102d  daddu       $v0, $s6, $v0
    ctx->pc = 0x34a320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 2));
    // 0x34a324: 0xfe8209c8  sd          $v0, 0x9C8($s4)
    ctx->pc = 0x34a324u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 2504), GPR_U64(ctx, 2));
label_34a328:
    // 0x34a328: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34a328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a32c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34a32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a330: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x34a330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a334: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x34a334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a338: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x34a338u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34a33c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x34a33cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34a340: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x34a340u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34a344: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x34a344u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34a348: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x34a348u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34a34c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x34a34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34a350: 0x3e00008  jr          $ra
    ctx->pc = 0x34A350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A350u;
        // 0x34a354: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A358u;
}
