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

// Function: quorem
// Address: 0x391340 - 0x391558
void quorem_0x391340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quorem_0x391340");
#endif

    switch (ctx->pc) {
        case 0x3913d0u: goto label_3913d0;
        case 0x391448u: goto label_391448;
        case 0x391474u: goto label_391474;
        case 0x391490u: goto label_391490;
        case 0x391508u: goto label_391508;
        default: break;
    }

    ctx->pc = 0x391340u;

    // 0x391340: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x391340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x391344: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x391344u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391348: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x391348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x39134c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x39134cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x391350: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x391350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391354: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x391354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x391358: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x391358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x39135c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x39135cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x391360: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x391360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x391364: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x391364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x391368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x391368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39136c: 0x8dd00010  lw          $s0, 0x10($t6)
    ctx->pc = 0x39136cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x391370: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x391370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x391374: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x391374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x391378: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x391378u;
    {
        const bool branch_taken_0x391378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391378u;
        // 0x39137c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391378) {
            ctx->pc = 0x39152Cu;
            goto label_39152c;
        }
    }
    ctx->pc = 0x391380u;
    // 0x391380: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x391380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x391384: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x391384u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x391388: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x391388u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x39138c: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x39138cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x391390: 0x1679821  addu        $s3, $t3, $a3
    ctx->pc = 0x391390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x391394: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x391394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x391398: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x391398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39139c: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x39139cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3913a0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3913a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3913a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3913a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3913a8: 0x1a2001b  divu        $zero, $t5, $v0
    ctx->pc = 0x3913a8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x3913ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3913ACu;
    {
        const bool branch_taken_0x3913ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3913ac) {
            ctx->pc = 0x3913B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3913ACu;
            // 0x3913b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3913B4u;
            goto label_3913b4;
        }
    }
    ctx->pc = 0x3913B4u;
label_3913b4:
    // 0x3913b4: 0xa812  mflo        $s5
    ctx->pc = 0x3913b4u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x3913b8: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x3913b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3913bc: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x3913BCu;
    {
        const bool branch_taken_0x3913bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3913C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3913BCu;
        // 0x3913c0: 0x160b02d  daddu       $s6, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3913bc) {
            ctx->pc = 0x391468u;
            goto label_391468;
        }
    }
    ctx->pc = 0x3913C4u;
    // 0x3913c4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3913c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3913c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3913c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3913cc: 0x0  nop
    ctx->pc = 0x3913ccu;
    // NOP
label_3913d0:
    // 0x3913d0: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x3913d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3913d4: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x3913d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3913d8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3913d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3913dc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x3913dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3913e0: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x3913e0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3913e4: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x3913e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3913e8: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x3913e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x3913ec: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x3913ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3913f0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x3913f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3913f4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3913f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3913f8: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x3913f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3913fc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x3913fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x391400: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x391400u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x391404: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x391404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x391408: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x391408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x39140c: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x39140cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x391410: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x391410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x391414: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x391414u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x391418: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x391418u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x39141c: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x39141cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x391420: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x391420u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x391424: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x391424u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x391428: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x391428u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x39142c: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x39142cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x391430: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x391430u;
    {
        const bool branch_taken_0x391430 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x391434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391430u;
        // 0x391434: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391430) {
            ctx->pc = 0x3913D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3913d0;
        }
    }
    ctx->pc = 0x391438u;
    // 0x391438: 0x15a0000c  bnez        $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x391438u;
    {
        const bool branch_taken_0x391438 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x39143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391438u;
        // 0x39143c: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391438) {
            ctx->pc = 0x39146Cu;
            goto label_39146c;
        }
    }
    ctx->pc = 0x391440u;
    // 0x391440: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x391440u;
    {
        const bool branch_taken_0x391440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391440u;
        // 0x391444: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391440) {
            ctx->pc = 0x39144Cu;
            goto label_39144c;
        }
    }
    ctx->pc = 0x391448u;
label_391448:
    // 0x391448: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x391448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_39144c:
    // 0x39144c: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x39144cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x391450: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x391450u;
    {
        const bool branch_taken_0x391450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x391450) {
            ctx->pc = 0x391454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391450u;
            // 0x391454: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391468u;
            goto label_391468;
        }
    }
    ctx->pc = 0x391458u;
    // 0x391458: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x391458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x39145c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39145Cu;
    {
        const bool branch_taken_0x39145c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39145Cu;
        // 0x391460: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39145c) {
            ctx->pc = 0x391448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391448;
        }
    }
    ctx->pc = 0x391464u;
    // 0x391464: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x391464u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_391468:
    // 0x391468: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x391468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_39146c:
    // 0x39146c: 0xc0e3f7a  jal         func_38FDE8
    ctx->pc = 0x39146Cu;
    SET_GPR_U32(ctx, 31, 0x391474u);
    ctx->pc = 0x391470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39146Cu;
    // 0x391470: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FDE8u, 0x39146Cu, 0x391474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391474u;
label_391474:
    // 0x391474: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x391474u;
    {
        const bool branch_taken_0x391474 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x391478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391474u;
        // 0x391478: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391474) {
            ctx->pc = 0x391528u;
            goto label_391528;
        }
    }
    ctx->pc = 0x39147Cu;
    // 0x39147c: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x39147cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x391480: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x391480u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391484: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x391484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391488: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x391488u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39148c: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x39148cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_391490:
    // 0x391490: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x391490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x391494: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x391494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x391498: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x391498u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x39149c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x39149cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3914a0: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x3914a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x3914a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3914a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3914a8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3914a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3914ac: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x3914acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3914b0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x3914b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3914b4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3914b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3914b8: 0xc24821  addu        $t1, $a2, $v0
    ctx->pc = 0x3914b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3914bc: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x3914bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3914c0: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x3914c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x3914c4: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x3914c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x3914c8: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x3914c8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3914cc: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x3914ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3914d0: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x3914d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x3914d4: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x3914d4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3914d8: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x3914d8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x3914dc: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x3914dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x3914e0: 0x56403  sra         $t4, $a1, 16
    ctx->pc = 0x3914e0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
    // 0x3914e4: 0x26b102b  sltu        $v0, $s3, $t3
    ctx->pc = 0x3914e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3914e8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3914E8u;
    {
        const bool branch_taken_0x3914e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3914ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3914E8u;
        // 0x3914ec: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3914e8) {
            ctx->pc = 0x391490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391490;
        }
    }
    ctx->pc = 0x3914F0u;
    // 0x3914f0: 0x2274021  addu        $t0, $s1, $a3
    ctx->pc = 0x3914f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x3914f4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3914f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3914f8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3914F8u;
    {
        const bool branch_taken_0x3914f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3914FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3914F8u;
        // 0x3914fc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3914f8) {
            ctx->pc = 0x39152Cu;
            goto label_39152c;
        }
    }
    ctx->pc = 0x391500u;
    // 0x391500: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x391500u;
    {
        const bool branch_taken_0x391500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391500u;
        // 0x391504: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391500) {
            ctx->pc = 0x39150Cu;
            goto label_39150c;
        }
    }
    ctx->pc = 0x391508u;
label_391508:
    // 0x391508: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x391508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_39150c:
    // 0x39150c: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x39150cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x391510: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x391510u;
    {
        const bool branch_taken_0x391510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x391510) {
            ctx->pc = 0x391514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391510u;
            // 0x391514: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391528u;
            goto label_391528;
        }
    }
    ctx->pc = 0x391518u;
    // 0x391518: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x391518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x39151c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39151Cu;
    {
        const bool branch_taken_0x39151c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39151c) {
            ctx->pc = 0x391520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39151Cu;
            // 0x391520: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391508;
        }
    }
    ctx->pc = 0x391524u;
    // 0x391524: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x391524u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_391528:
    // 0x391528: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x391528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39152c:
    // 0x39152c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x39152cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x391530: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x391530u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x391534: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x391534u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x391538: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x391538u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39153c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x39153cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x391540: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x391540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x391544: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x391544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x391548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39154c: 0x3e00008  jr          $ra
    ctx->pc = 0x39154Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39154Cu;
        // 0x391550: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39154Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391554u;
    // 0x391554: 0x0  nop
    ctx->pc = 0x391554u;
    // NOP
    ctx->pc = 0x391558u;
}
