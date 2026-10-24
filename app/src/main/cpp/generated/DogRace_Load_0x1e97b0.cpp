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

// Function: DogRace_Load
// Address: 0x1e97b0 - 0x1e9e40
void DogRace_Load_0x1e97b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DogRace_Load_0x1e97b0");
#endif

    switch (ctx->pc) {
        case 0x1e97f8u: goto label_1e97f8;
        case 0x1e9818u: goto label_1e9818;
        case 0x1e982cu: goto label_1e982c;
        case 0x1e9848u: goto label_1e9848;
        case 0x1e9880u: goto label_1e9880;
        case 0x1e9888u: goto label_1e9888;
        case 0x1e991cu: goto label_1e991c;
        case 0x1e9944u: goto label_1e9944;
        case 0x1e9960u: goto label_1e9960;
        case 0x1e9980u: goto label_1e9980;
        case 0x1e99a0u: goto label_1e99a0;
        case 0x1e9a40u: goto label_1e9a40;
        case 0x1e9a80u: goto label_1e9a80;
        case 0x1e9aa8u: goto label_1e9aa8;
        case 0x1e9ae8u: goto label_1e9ae8;
        case 0x1e9b10u: goto label_1e9b10;
        case 0x1e9b50u: goto label_1e9b50;
        case 0x1e9b78u: goto label_1e9b78;
        case 0x1e9bb8u: goto label_1e9bb8;
        case 0x1e9be0u: goto label_1e9be0;
        case 0x1e9c20u: goto label_1e9c20;
        case 0x1e9c30u: goto label_1e9c30;
        case 0x1e9c40u: goto label_1e9c40;
        case 0x1e9c50u: goto label_1e9c50;
        case 0x1e9c60u: goto label_1e9c60;
        case 0x1e9c80u: goto label_1e9c80;
        case 0x1e9ca8u: goto label_1e9ca8;
        case 0x1e9cb8u: goto label_1e9cb8;
        case 0x1e9cd4u: goto label_1e9cd4;
        case 0x1e9cdcu: goto label_1e9cdc;
        case 0x1e9ce4u: goto label_1e9ce4;
        case 0x1e9cecu: goto label_1e9cec;
        case 0x1e9d20u: goto label_1e9d20;
        case 0x1e9d38u: goto label_1e9d38;
        case 0x1e9d48u: goto label_1e9d48;
        case 0x1e9d54u: goto label_1e9d54;
        case 0x1e9d60u: goto label_1e9d60;
        case 0x1e9d6cu: goto label_1e9d6c;
        case 0x1e9d7cu: goto label_1e9d7c;
        case 0x1e9d8cu: goto label_1e9d8c;
        case 0x1e9d9cu: goto label_1e9d9c;
        case 0x1e9dacu: goto label_1e9dac;
        case 0x1e9dbcu: goto label_1e9dbc;
        case 0x1e9dccu: goto label_1e9dcc;
        case 0x1e9ddcu: goto label_1e9ddc;
        case 0x1e9decu: goto label_1e9dec;
        case 0x1e9dfcu: goto label_1e9dfc;
        case 0x1e9e0cu: goto label_1e9e0c;
        default: break;
    }

    ctx->pc = 0x1e97b0u;

    // 0x1e97b0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1e97b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1e97b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e97b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e97b8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1e97b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x1e97bc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e97bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97c0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1e97c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1e97c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e97c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e97c8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1e97c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1e97cc: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1e97ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1e97d0: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1e97d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1e97d4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1e97d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x1e97d8: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1e97d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1e97dc: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1e97dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x1e97e0: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1e97e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x1e97e4: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1e97e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x1e97e8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1e97e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1e97ec: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e97ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e97f0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E97F0u;
    SET_GPR_U32(ctx, 31, 0x1E97F8u);
    ctx->pc = 0x1E97F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E97F0u;
    // 0x1e97f4: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E97F0u, 0x1E97F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E97F8u;
label_1e97f8:
    // 0x1e97f8: 0xaea00054  sw          $zero, 0x54($s5)
    ctx->pc = 0x1e97f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
    // 0x1e97fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e97fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9800: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1e9800u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x1e9804: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x1e9804u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x1e9808: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x1e9808u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
    // 0x1e980c: 0xaea001b4  sw          $zero, 0x1B4($s5)
    ctx->pc = 0x1e980cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 436), GPR_U32(ctx, 0));
    // 0x1e9810: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x1E9810u;
    SET_GPR_U32(ctx, 31, 0x1E9818u);
    ctx->pc = 0x1E9814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9810u;
    // 0x1e9814: 0xaea001b8  sw          $zero, 0x1B8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 440), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x1E9810u, 0x1E9818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9818u;
label_1e9818:
    // 0x1e9818: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E9818u;
    {
        const bool branch_taken_0x1e9818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9818u;
        // 0x1e981c: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9818) {
            ctx->pc = 0x1E9838u;
            goto label_1e9838;
        }
    }
    ctx->pc = 0x1E9820u;
    // 0x1e9820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9824: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x1E9824u;
    SET_GPR_U32(ctx, 31, 0x1E982Cu);
    ctx->pc = 0x1E9828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9824u;
    // 0x1e9828: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x1E9824u, 0x1E982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E982Cu;
label_1e982c:
    // 0x1e982c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E982Cu;
    {
        const bool branch_taken_0x1e982c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e982c) {
            ctx->pc = 0x1E9830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E982Cu;
            // 0x1e9830: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9838u;
            goto label_1e9838;
        }
    }
    ctx->pc = 0x1E9834u;
    // 0x1e9834: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x1e9834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_1e9838:
    // 0x1e9838: 0xaea201bc  sw          $v0, 0x1BC($s5)
    ctx->pc = 0x1e9838u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 444), GPR_U32(ctx, 2));
    // 0x1e983c: 0x26be2a0c  addiu       $fp, $s5, 0x2A0C
    ctx->pc = 0x1e983cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 10764));
    // 0x1e9840: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e9840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e9844: 0x26a201ac  addiu       $v0, $s5, 0x1AC
    ctx->pc = 0x1e9844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 428));
label_1e9848:
    // 0x1e9848: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e9848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e984c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e9850: 0x0  nop
    ctx->pc = 0x1e9850u;
    // NOP
    // 0x1e9854: 0x0  nop
    ctx->pc = 0x1e9854u;
    // NOP
    // 0x1e9858: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E9858u;
    {
        const bool branch_taken_0x1e9858 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1E985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9858u;
        // 0x1e985c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9858) {
            ctx->pc = 0x1E9848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9848;
        }
    }
    ctx->pc = 0x1E9860u;
    // 0x1e9860: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1e9860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1e9864: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e9864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9868: 0x2457e1a0  addiu       $s7, $v0, -0x1E60
    ctx->pc = 0x1e9868u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959520));
    // 0x1e986c: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x1e986cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e9870: 0x24160024  addiu       $s6, $zero, 0x24
    ctx->pc = 0x1e9870u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1e9874: 0x2414001e  addiu       $s4, $zero, 0x1E
    ctx->pc = 0x1e9874u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1e9878: 0x26b0005c  addiu       $s0, $s5, 0x5C
    ctx->pc = 0x1e9878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
    // 0x1e987c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e987cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9880:
    // 0x1e9880: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E9880u;
    SET_GPR_U32(ctx, 31, 0x1E9888u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E9880u, 0x1E9888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9888u;
label_1e9888:
    // 0x1e9888: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x1e9888u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e988c: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E988Cu;
    {
        const bool branch_taken_0x1e988c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e988c) {
            ctx->pc = 0x1E9890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E988Cu;
            // 0x1e9890: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9894u;
            goto label_1e9894;
        }
    }
    ctx->pc = 0x1E9894u;
label_1e9894:
    // 0x1e9894: 0x1810  mfhi        $v1
    ctx->pc = 0x1e9894u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1e9898: 0x762018  mult        $a0, $v1, $s6
    ctx->pc = 0x1e9898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e989c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1e989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1e98a0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1e98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1e98a4: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1e98a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e98a8: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1e98a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e98ac: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x1e98acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1e98b0: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x1e98b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1e98b4: 0x68430017  ldl         $v1, 0x17($v0)
    ctx->pc = 0x1e98b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1e98b8: 0x6c430010  ldr         $v1, 0x10($v0)
    ctx->pc = 0x1e98b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1e98bc: 0x6844001f  ldl         $a0, 0x1F($v0)
    ctx->pc = 0x1e98bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e98c0: 0x6c440018  ldr         $a0, 0x18($v0)
    ctx->pc = 0x1e98c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e98c4: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x1e98c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e98c8: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x1e98c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e98cc: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x1e98ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e98d0: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x1e98d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e98d4: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1e98d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e98d8: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1e98d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e98dc: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1e98dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e98e0: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1e98e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e98e4: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x1e98e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e98e8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e98e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e98ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e98ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e98f0: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x1e98f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e98f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E98F4u;
    {
        const bool branch_taken_0x1e98f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E98F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98F4u;
        // 0x1e98f8: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e98f4) {
            ctx->pc = 0x1E992Cu;
            goto label_1e992c;
        }
    }
    ctx->pc = 0x1E98FCu;
    // 0x1e98fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e98fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e9900: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1e9900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e9904: 0x0  nop
    ctx->pc = 0x1e9904u;
    // NOP
    // 0x1e9908: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1e9908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1e990c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1e990cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1e9910: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1e9910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e9914: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x1E9914u;
    SET_GPR_U32(ctx, 31, 0x1E991Cu);
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x1E9914u, 0x1E991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E991Cu;
label_1e991c:
    // 0x1e991c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1e991cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9920: 0x0  nop
    ctx->pc = 0x1e9920u;
    // NOP
    // 0x1e9924: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9924u;
    {
        const bool branch_taken_0x1e9924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9924u;
        // 0x1e9928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9924) {
            ctx->pc = 0x1E9934u;
            goto label_1e9934;
        }
    }
    ctx->pc = 0x1E992Cu;
label_1e992c:
    // 0x1e992c: 0xafb40004  sw          $s4, 0x4($sp)
    ctx->pc = 0x1e992cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 20));
    // 0x1e9930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9934:
    // 0x1e9934: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x1e9934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1e9938: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e9938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e993c: 0xc07b9e0  jal         func_1EE780
    ctx->pc = 0x1E993Cu;
    SET_GPR_U32(ctx, 31, 0x1E9944u);
    ctx->pc = 0x1E9940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E993Cu;
    // 0x1e9940: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE780u, 0x1E993Cu, 0x1E9944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9944u;
label_1e9944:
    // 0x1e9944: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x1e9944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1e9948: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x1e9948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e994c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1E994Cu;
    {
        const bool branch_taken_0x1e994c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E994Cu;
        // 0x1e9950: 0x265200b4  addiu       $s2, $s2, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e994c) {
            ctx->pc = 0x1E9880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9880;
        }
    }
    ctx->pc = 0x1E9954u;
    // 0x1e9954: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e9954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e9958: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1e9958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e995c: 0x26a2015c  addiu       $v0, $s5, 0x15C
    ctx->pc = 0x1e995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 348));
label_1e9960:
    // 0x1e9960: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e9960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9964: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1e9964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1e9968: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1e9968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1e996c: 0x0  nop
    ctx->pc = 0x1e996cu;
    // NOP
    // 0x1e9970: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E9970u;
    {
        const bool branch_taken_0x1e9970 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1E9974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9970u;
        // 0x1e9974: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9970) {
            ctx->pc = 0x1E9960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9960;
        }
    }
    ctx->pc = 0x1E9978u;
    // 0x1e9978: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e9978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e997c: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x1e997cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e9980:
    // 0x1e9980: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x1e9980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e9984: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E9984u;
    {
        const bool branch_taken_0x1e9984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9984u;
        // 0x1e9988: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9984) {
            ctx->pc = 0x1E99D0u;
            goto label_1e99d0;
        }
    }
    ctx->pc = 0x1E998Cu;
    // 0x1e998c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e998cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e9990: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1e9990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1e9994: 0x3a24021  addu        $t0, $sp, $v0
    ctx->pc = 0x1e9994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1e9998: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x1e9998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e999c: 0x0  nop
    ctx->pc = 0x1e999cu;
    // NOP
label_1e99a0:
    // 0x1e99a0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1e99a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e99a4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1e99a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e99a8: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x1e99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1e99ac: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1e99acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1e99b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1e99b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e99b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E99B4u;
    {
        const bool branch_taken_0x1e99b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99B4u;
        // 0x1e99b8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99b4) {
            ctx->pc = 0x1E99C4u;
            goto label_1e99c4;
        }
    }
    ctx->pc = 0x1E99BCu;
    // 0x1e99bc: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x1e99bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x1e99c0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1e99c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_1e99c4:
    // 0x1e99c4: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x1e99c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e99c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1E99C8u;
    {
        const bool branch_taken_0x1e99c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99C8u;
        // 0x1e99cc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99c8) {
            ctx->pc = 0x1E99A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e99a0;
        }
    }
    ctx->pc = 0x1E99D0u;
label_1e99d0:
    // 0x1e99d0: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x1e99d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e99d4: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1e99d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e99d8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1E99D8u;
    {
        const bool branch_taken_0x1e99d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99D8u;
        // 0x1e99dc: 0x24670001  addiu       $a3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99d8) {
            ctx->pc = 0x1E9980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9980;
        }
    }
    ctx->pc = 0x1E99E0u;
    // 0x1e99e0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1e99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1e99e4: 0x2444bc88  addiu       $a0, $v0, -0x4378
    ctx->pc = 0x1e99e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950024));
    // 0x1e99e8: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x1e99e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e99ec: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x1e99ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e99f0: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x1e99f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1e99f4: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x1e99f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1e99f8: 0x68830017  ldl         $v1, 0x17($a0)
    ctx->pc = 0x1e99f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1e99fc: 0x6c830010  ldr         $v1, 0x10($a0)
    ctx->pc = 0x1e99fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1e9a00: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x1e9a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9a04: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x1e9a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9a08: 0xb3a6003f  sdl         $a2, 0x3F($sp)
    ctx->pc = 0x1e9a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9a0c: 0xb7a60038  sdr         $a2, 0x38($sp)
    ctx->pc = 0x1e9a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9a10: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x1e9a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9a14: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x1e9a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9a18: 0x6885001f  ldl         $a1, 0x1F($a0)
    ctx->pc = 0x1e9a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e9a1c: 0x6c850018  ldr         $a1, 0x18($a0)
    ctx->pc = 0x1e9a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e9a20: 0x68860027  ldl         $a2, 0x27($a0)
    ctx->pc = 0x1e9a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1e9a24: 0x6c860020  ldr         $a2, 0x20($a0)
    ctx->pc = 0x1e9a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1e9a28: 0xb3a5004f  sdl         $a1, 0x4F($sp)
    ctx->pc = 0x1e9a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9a2c: 0xb7a50048  sdr         $a1, 0x48($sp)
    ctx->pc = 0x1e9a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9a30: 0xb3a60057  sdl         $a2, 0x57($sp)
    ctx->pc = 0x1e9a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9a34: 0xb7a60050  sdr         $a2, 0x50($sp)
    ctx->pc = 0x1e9a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9a38: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E9A38u;
    SET_GPR_U32(ctx, 31, 0x1E9A40u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E9A38u, 0x1E9A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A40u;
label_1e9a40:
    // 0x1e9a40: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1e9a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9a44: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1e9a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1e9a48: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1e9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e9a4c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e9a4cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e9a50: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E9A50u;
    {
        const bool branch_taken_0x1e9a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a50) {
            ctx->pc = 0x1E9A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9A50u;
            // 0x1e9a54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9A58u;
            goto label_1e9a58;
        }
    }
    ctx->pc = 0x1E9A58u;
label_1e9a58:
    // 0x1e9a58: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1e9a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9a5c: 0x2810  mfhi        $a1
    ctx->pc = 0x1e9a5cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1e9a60: 0xa68021  addu        $s0, $a1, $a2
    ctx->pc = 0x1e9a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e9a64: 0xac90002c  sw          $s0, 0x2C($a0)
    ctx->pc = 0x1e9a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 16));
    // 0x1e9a68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1e9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e9a6c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1e9a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e9a70: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E9A70u;
    {
        const bool branch_taken_0x1e9a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a70) {
            ctx->pc = 0x1E9AA0u;
            goto label_1e9aa0;
        }
    }
    ctx->pc = 0x1E9A78u;
    // 0x1e9a78: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E9A78u;
    SET_GPR_U32(ctx, 31, 0x1E9A80u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E9A78u, 0x1E9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A80u;
label_1e9a80:
    // 0x1e9a80: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1e9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1e9a84: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1e9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e9a88: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e9a88u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e9a8c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E9A8Cu;
    {
        const bool branch_taken_0x1e9a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a8c) {
            ctx->pc = 0x1E9A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9A8Cu;
            // 0x1e9a90: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9A94u;
            goto label_1e9a94;
        }
    }
    ctx->pc = 0x1E9A94u;
label_1e9a94:
    // 0x1e9a94: 0x2010  mfhi        $a0
    ctx->pc = 0x1e9a94u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1e9a98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E9A98u;
    {
        const bool branch_taken_0x1e9a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A98u;
        // 0x1e9a9c: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a98) {
            ctx->pc = 0x1E9AC8u;
            goto label_1e9ac8;
        }
    }
    ctx->pc = 0x1E9AA0u;
label_1e9aa0:
    // 0x1e9aa0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E9AA0u;
    SET_GPR_U32(ctx, 31, 0x1E9AA8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E9AA0u, 0x1E9AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9AA8u;
label_1e9aa8:
    // 0x1e9aa8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1e9aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e9aac: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1e9aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1e9ab0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1e9ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e9ab4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e9ab4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e9ab8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E9AB8u;
    {
        const bool branch_taken_0x1e9ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ab8) {
            ctx->pc = 0x1E9ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9AB8u;
            // 0x1e9abc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9AC0u;
            goto label_1e9ac0;
        }
    }
    ctx->pc = 0x1E9AC0u;
label_1e9ac0:
    // 0x1e9ac0: 0x2010  mfhi        $a0
    ctx->pc = 0x1e9ac0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1e9ac4: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1e9ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e9ac8:
    // 0x1e9ac8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e9ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e9acc: 0xac70002c  sw          $s0, 0x2C($v1)
    ctx->pc = 0x1e9accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 16));
    // 0x1e9ad0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e9ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9ad4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1e9ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e9ad8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E9AD8u;
    {
        const bool branch_taken_0x1e9ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ad8) {
            ctx->pc = 0x1E9B08u;
            goto label_1e9b08;
        }
    }
    ctx->pc = 0x1E9AE0u;
    // 0x1e9ae0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E9AE0u;
    SET_GPR_U32(ctx, 31, 0x1E9AE8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E9AE0u, 0x1E9AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9AE8u;
label_1e9ae8:
    // 0x1e9ae8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1e9ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1e9aec: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1e9aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e9af0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e9af0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e9af4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E9AF4u;
    {
        const bool branch_taken_0x1e9af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9af4) {
            ctx->pc = 0x1E9AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9AF4u;
            // 0x1e9af8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9AFCu;
            goto label_1e9afc;
        }
    }
    ctx->pc = 0x1E9AFCu;
label_1e9afc:
    // 0x1e9afc: 0x2010  mfhi        $a0
    ctx->pc = 0x1e9afcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1e9b00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E9B00u;
    {
        const bool branch_taken_0x1e9b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B00u;
        // 0x1e9b04: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b00) {
            ctx->pc = 0x1E9B30u;
            goto label_1e9b30;
        }
    }
    ctx->pc = 0x1E9B08u;
label_1e9b08:
    // 0x1e9b08: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E9B08u;
    SET_GPR_U32(ctx, 31, 0x1E9B10u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E9B08u, 0x1E9B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B10u;
label_1e9b10:
    // 0x1e9b10: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e9b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9b14: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1e9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1e9b18: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1e9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e9b1c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e9b1cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e9b20: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E9B20u;
    {
        const bool branch_taken_0x1e9b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b20) {
            ctx->pc = 0x1E9B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9B20u;
            // 0x1e9b24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9B28u;
            goto label_1e9b28;
        }
    }
    ctx->pc = 0x1E9B28u;
label_1e9b28:
    // 0x1e9b28: 0x2010  mfhi        $a0
    ctx->pc = 0x1e9b28u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1e9b2c: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1e9b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e9b30:
    // 0x1e9b30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1e9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9b34: 0xac70002c  sw          $s0, 0x2C($v1)
    ctx->pc = 0x1e9b34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 16));
    // 0x1e9b38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1e9b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e9b3c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1e9b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e9b40: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E9B40u;
    {
        const bool branch_taken_0x1e9b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b40) {
            ctx->pc = 0x1E9B70u;
            goto label_1e9b70;
        }
    }
    ctx->pc = 0x1E9B48u;
    // 0x1e9b48: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E9B48u;
    SET_GPR_U32(ctx, 31, 0x1E9B50u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E9B48u, 0x1E9B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B50u;
label_1e9b50:
    // 0x1e9b50: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1e9b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1e9b54: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1e9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e9b58: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e9b58u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e9b5c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E9B5Cu;
    {
        const bool branch_taken_0x1e9b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b5c) {
            ctx->pc = 0x1E9B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9B5Cu;
            // 0x1e9b60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9B64u;
            goto label_1e9b64;
        }
    }
    ctx->pc = 0x1E9B64u;
label_1e9b64:
    // 0x1e9b64: 0x2010  mfhi        $a0
    ctx->pc = 0x1e9b64u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1e9b68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E9B68u;
    {
        const bool branch_taken_0x1e9b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B68u;
        // 0x1e9b6c: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b68) {
            ctx->pc = 0x1E9B98u;
            goto label_1e9b98;
        }
    }
    ctx->pc = 0x1E9B70u;
label_1e9b70:
    // 0x1e9b70: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E9B70u;
    SET_GPR_U32(ctx, 31, 0x1E9B78u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E9B70u, 0x1E9B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B78u;
label_1e9b78:
    // 0x1e9b78: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e9b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e9b7c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1e9b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1e9b80: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1e9b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e9b84: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e9b84u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e9b88: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E9B88u;
    {
        const bool branch_taken_0x1e9b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b88) {
            ctx->pc = 0x1E9B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9B88u;
            // 0x1e9b8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9B90u;
            goto label_1e9b90;
        }
    }
    ctx->pc = 0x1E9B90u;
label_1e9b90:
    // 0x1e9b90: 0x2010  mfhi        $a0
    ctx->pc = 0x1e9b90u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1e9b94: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1e9b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e9b98:
    // 0x1e9b98: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1e9b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1e9b9c: 0xac70002c  sw          $s0, 0x2C($v1)
    ctx->pc = 0x1e9b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 16));
    // 0x1e9ba0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9ba4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1e9ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e9ba8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E9BA8u;
    {
        const bool branch_taken_0x1e9ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ba8) {
            ctx->pc = 0x1E9BD8u;
            goto label_1e9bd8;
        }
    }
    ctx->pc = 0x1E9BB0u;
    // 0x1e9bb0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E9BB0u;
    SET_GPR_U32(ctx, 31, 0x1E9BB8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E9BB0u, 0x1E9BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BB8u;
label_1e9bb8:
    // 0x1e9bb8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1e9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1e9bbc: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1e9bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1e9bc0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e9bc0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e9bc4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E9BC4u;
    {
        const bool branch_taken_0x1e9bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9bc4) {
            ctx->pc = 0x1E9BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9BC4u;
            // 0x1e9bc8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9BCCu;
            goto label_1e9bcc;
        }
    }
    ctx->pc = 0x1E9BCCu;
label_1e9bcc:
    // 0x1e9bcc: 0x2010  mfhi        $a0
    ctx->pc = 0x1e9bccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1e9bd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E9BD0u;
    {
        const bool branch_taken_0x1e9bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BD0u;
        // 0x1e9bd4: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bd0) {
            ctx->pc = 0x1E9C00u;
            goto label_1e9c00;
        }
    }
    ctx->pc = 0x1E9BD8u;
label_1e9bd8:
    // 0x1e9bd8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1E9BD8u;
    SET_GPR_U32(ctx, 31, 0x1E9BE0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1E9BD8u, 0x1E9BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BE0u;
label_1e9be0:
    // 0x1e9be0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1e9be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9be4: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1e9be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1e9be8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1e9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e9bec: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e9becu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e9bf0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E9BF0u;
    {
        const bool branch_taken_0x1e9bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9bf0) {
            ctx->pc = 0x1E9BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9BF0u;
            // 0x1e9bf4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9BF8u;
            goto label_1e9bf8;
        }
    }
    ctx->pc = 0x1E9BF8u;
label_1e9bf8:
    // 0x1e9bf8: 0x2010  mfhi        $a0
    ctx->pc = 0x1e9bf8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1e9bfc: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1e9bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e9c00:
    // 0x1e9c00: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e9c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9c04: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1e9c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x1e9c08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e9c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c10: 0xac70002c  sw          $s0, 0x2C($v1)
    ctx->pc = 0x1e9c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 16));
    // 0x1e9c14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e9c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c18: 0xc07afd4  jal         func_1EBF50
    ctx->pc = 0x1E9C18u;
    SET_GPR_U32(ctx, 31, 0x1E9C20u);
    ctx->pc = 0x1E9C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C18u;
    // 0x1e9c1c: 0x24503f20  addiu       $s0, $v0, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBF50u, 0x1E9C18u, 0x1E9C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C20u;
label_1e9c20:
    // 0x1e9c20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e9c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e9c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9c28: 0xc07afd4  jal         func_1EBF50
    ctx->pc = 0x1E9C28u;
    SET_GPR_U32(ctx, 31, 0x1E9C30u);
    ctx->pc = 0x1E9C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C28u;
    // 0x1e9c2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBF50u, 0x1E9C28u, 0x1E9C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C30u;
label_1e9c30:
    // 0x1e9c30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e9c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e9c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e9c38: 0xc07afd4  jal         func_1EBF50
    ctx->pc = 0x1E9C38u;
    SET_GPR_U32(ctx, 31, 0x1E9C40u);
    ctx->pc = 0x1E9C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C38u;
    // 0x1e9c3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBF50u, 0x1E9C38u, 0x1E9C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C40u;
label_1e9c40:
    // 0x1e9c40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e9c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e9c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e9c48: 0xc07afd4  jal         func_1EBF50
    ctx->pc = 0x1E9C48u;
    SET_GPR_U32(ctx, 31, 0x1E9C50u);
    ctx->pc = 0x1E9C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C48u;
    // 0x1e9c4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBF50u, 0x1E9C48u, 0x1E9C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C50u;
label_1e9c50:
    // 0x1e9c50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e9c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e9c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c58: 0xc07afd4  jal         func_1EBF50
    ctx->pc = 0x1E9C58u;
    SET_GPR_U32(ctx, 31, 0x1E9C60u);
    ctx->pc = 0x1E9C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C58u;
    // 0x1e9c5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBF50u, 0x1E9C58u, 0x1E9C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C60u;
label_1e9c60:
    // 0x1e9c60: 0xaea02a0c  sw          $zero, 0x2A0C($s5)
    ctx->pc = 0x1e9c60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 10764), GPR_U32(ctx, 0));
    // 0x1e9c64: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1e9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1e9c68: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x1e9c68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x1e9c6c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e9c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9c70: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x1e9c70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x1e9c74: 0x24c6bcb0  addiu       $a2, $a2, -0x4350
    ctx->pc = 0x1e9c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950064));
    // 0x1e9c78: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x1E9C78u;
    SET_GPR_U32(ctx, 31, 0x1E9C80u);
    ctx->pc = 0x1E9C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C78u;
    // 0x1e9c7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x1E9C78u, 0x1E9C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C80u;
label_1e9c80:
    // 0x1e9c80: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x1e9c80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x1e9c84: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1e9c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c88: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x1e9c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x1e9c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e9c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e9c94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e9c98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e9c9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ca0: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x1E9CA0u;
    SET_GPR_U32(ctx, 31, 0x1E9CA8u);
    ctx->pc = 0x1E9CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CA0u;
    // 0x1e9ca4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x1E9CA0u, 0x1E9CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CA8u;
label_1e9ca8:
    // 0x1e9ca8: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1E9CA8u;
    {
        const bool branch_taken_0x1e9ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CA8u;
        // 0x1e9cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ca8) {
            ctx->pc = 0x1E9E0Cu;
            goto label_1e9e0c;
        }
    }
    ctx->pc = 0x1E9CB0u;
    // 0x1e9cb0: 0xc080458  jal         func_201160
    ctx->pc = 0x1E9CB0u;
    SET_GPR_U32(ctx, 31, 0x1E9CB8u);
    ctx->pc = 0x1E9CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CB0u;
    // 0x1e9cb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x1E9CB0u, 0x1E9CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CB8u;
label_1e9cb8:
    // 0x1e9cb8: 0x26b00210  addiu       $s0, $s5, 0x210
    ctx->pc = 0x1e9cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 528));
    // 0x1e9cbc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1e9cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1e9cc0: 0x8ea62a0c  lw          $a2, 0x2A0C($s5)
    ctx->pc = 0x1e9cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10764)));
    // 0x1e9cc4: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1e9cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1e9cc8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1e9cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e9ccc: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x1E9CCCu;
    SET_GPR_U32(ctx, 31, 0x1E9CD4u);
    ctx->pc = 0x1E9CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CCCu;
    // 0x1e9cd0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x1E9CCCu, 0x1E9CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CD4u;
label_1e9cd4:
    // 0x1e9cd4: 0xc07b2bc  jal         func_1ECAF0
    ctx->pc = 0x1E9CD4u;
    SET_GPR_U32(ctx, 31, 0x1E9CDCu);
    ctx->pc = 0x1E9CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CD4u;
    // 0x1e9cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECAF0u, 0x1E9CD4u, 0x1E9CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CDCu;
label_1e9cdc:
    // 0x1e9cdc: 0xc07b56e  jal         func_1ED5B8
    ctx->pc = 0x1E9CDCu;
    SET_GPR_U32(ctx, 31, 0x1E9CE4u);
    ctx->pc = 0x1E9CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CDCu;
    // 0x1e9ce0: 0x26a41840  addiu       $a0, $s5, 0x1840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED5B8u, 0x1E9CDCu, 0x1E9CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CE4u;
label_1e9ce4:
    // 0x1e9ce4: 0xc07b7aa  jal         func_1EDEA8
    ctx->pc = 0x1E9CE4u;
    SET_GPR_U32(ctx, 31, 0x1E9CECu);
    ctx->pc = 0x1E9CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CE4u;
    // 0x1e9ce8: 0x26a41b90  addiu       $a0, $s5, 0x1B90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 7056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDEA8u, 0x1E9CE4u, 0x1E9CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CECu;
label_1e9cec:
    // 0x1e9cec: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1e9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1e9cf0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1e9cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e9cf4: 0x24428200  addiu       $v0, $v0, -0x7E00
    ctx->pc = 0x1e9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935040));
    // 0x1e9cf8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1e9cf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x568200u));
    // 0x1e9cfc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1e9cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e9d00: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1e9d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1e9d04: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e9d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e9d08: 0x24638210  addiu       $v1, $v1, -0x7DF0
    ctx->pc = 0x1e9d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935056));
    // 0x1e9d0c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1e9d0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x568210u));
    // 0x1e9d10: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1e9d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e9d14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e9d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d18: 0xc07adc6  jal         func_1EB718
    ctx->pc = 0x1E9D18u;
    SET_GPR_U32(ctx, 31, 0x1E9D20u);
    ctx->pc = 0x1E9D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D18u;
    // 0x1e9d1c: 0x26b1005c  addiu       $s1, $s5, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB718u, 0x1E9D18u, 0x1E9D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D20u;
label_1e9d20:
    // 0x1e9d20: 0x26b2009c  addiu       $s2, $s5, 0x9C
    ctx->pc = 0x1e9d20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 156));
    // 0x1e9d24: 0x8ea501bc  lw          $a1, 0x1BC($s5)
    ctx->pc = 0x1e9d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 444)));
    // 0x1e9d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d2c: 0x26b300dc  addiu       $s3, $s5, 0xDC
    ctx->pc = 0x1e9d2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 220));
    // 0x1e9d30: 0xc07b522  jal         func_1ED488
    ctx->pc = 0x1E9D30u;
    SET_GPR_U32(ctx, 31, 0x1E9D38u);
    ctx->pc = 0x1E9D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D30u;
    // 0x1e9d34: 0x26b4011c  addiu       $s4, $s5, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED488u, 0x1E9D30u, 0x1E9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D38u;
label_1e9d38:
    // 0x1e9d38: 0x26b5015c  addiu       $s5, $s5, 0x15C
    ctx->pc = 0x1e9d38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 348));
    // 0x1e9d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d40: 0xc07b4f0  jal         func_1ED3C0
    ctx->pc = 0x1E9D40u;
    SET_GPR_U32(ctx, 31, 0x1E9D48u);
    ctx->pc = 0x1E9D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D40u;
    // 0x1e9d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED3C0u, 0x1E9D40u, 0x1E9D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D48u;
label_1e9d48:
    // 0x1e9d48: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1e9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1e9d4c: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1E9D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E9D54u);
    ctx->pc = 0x1E9D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D4Cu;
    // 0x1e9d50: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1E9D4Cu, 0x1E9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D54u;
label_1e9d54:
    // 0x1e9d54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e9d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d58: 0xc07b524  jal         func_1ED490
    ctx->pc = 0x1E9D58u;
    SET_GPR_U32(ctx, 31, 0x1E9D60u);
    ctx->pc = 0x1E9D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D58u;
    // 0x1e9d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED490u, 0x1E9D58u, 0x1E9D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D60u;
label_1e9d60:
    // 0x1e9d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d64: 0xc07b45e  jal         func_1ED178
    ctx->pc = 0x1E9D64u;
    SET_GPR_U32(ctx, 31, 0x1E9D6Cu);
    ctx->pc = 0x1E9D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D64u;
    // 0x1e9d68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED178u, 0x1E9D64u, 0x1E9D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D6Cu;
label_1e9d6c:
    // 0x1e9d6c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1e9d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e9d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d74: 0xc07b3fa  jal         func_1ECFE8
    ctx->pc = 0x1E9D74u;
    SET_GPR_U32(ctx, 31, 0x1E9D7Cu);
    ctx->pc = 0x1E9D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D74u;
    // 0x1e9d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECFE8u, 0x1E9D74u, 0x1E9D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D7Cu;
label_1e9d7c:
    // 0x1e9d7c: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1e9d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e9d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d84: 0xc07b3fa  jal         func_1ECFE8
    ctx->pc = 0x1E9D84u;
    SET_GPR_U32(ctx, 31, 0x1E9D8Cu);
    ctx->pc = 0x1E9D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D84u;
    // 0x1e9d88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECFE8u, 0x1E9D84u, 0x1E9D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D8Cu;
label_1e9d8c:
    // 0x1e9d8c: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x1e9d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e9d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d94: 0xc07b3fa  jal         func_1ECFE8
    ctx->pc = 0x1E9D94u;
    SET_GPR_U32(ctx, 31, 0x1E9D9Cu);
    ctx->pc = 0x1E9D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D94u;
    // 0x1e9d98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECFE8u, 0x1E9D94u, 0x1E9D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D9Cu;
label_1e9d9c:
    // 0x1e9d9c: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1e9d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e9da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9da4: 0xc07b3fa  jal         func_1ECFE8
    ctx->pc = 0x1E9DA4u;
    SET_GPR_U32(ctx, 31, 0x1E9DACu);
    ctx->pc = 0x1E9DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9DA4u;
    // 0x1e9da8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECFE8u, 0x1E9DA4u, 0x1E9DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DACu;
label_1e9dac:
    // 0x1e9dac: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x1e9dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1e9db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9db4: 0xc07b3fa  jal         func_1ECFE8
    ctx->pc = 0x1E9DB4u;
    SET_GPR_U32(ctx, 31, 0x1E9DBCu);
    ctx->pc = 0x1E9DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9DB4u;
    // 0x1e9db8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECFE8u, 0x1E9DB4u, 0x1E9DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DBCu;
label_1e9dbc:
    // 0x1e9dbc: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1e9dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e9dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9dc4: 0xc07b414  jal         func_1ED050
    ctx->pc = 0x1E9DC4u;
    SET_GPR_U32(ctx, 31, 0x1E9DCCu);
    ctx->pc = 0x1E9DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9DC4u;
    // 0x1e9dc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED050u, 0x1E9DC4u, 0x1E9DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DCCu;
label_1e9dcc:
    // 0x1e9dcc: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x1e9dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1e9dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9dd4: 0xc07b414  jal         func_1ED050
    ctx->pc = 0x1E9DD4u;
    SET_GPR_U32(ctx, 31, 0x1E9DDCu);
    ctx->pc = 0x1E9DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9DD4u;
    // 0x1e9dd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED050u, 0x1E9DD4u, 0x1E9DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DDCu;
label_1e9ddc:
    // 0x1e9ddc: 0x8e66002c  lw          $a2, 0x2C($s3)
    ctx->pc = 0x1e9ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1e9de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9de4: 0xc07b414  jal         func_1ED050
    ctx->pc = 0x1E9DE4u;
    SET_GPR_U32(ctx, 31, 0x1E9DECu);
    ctx->pc = 0x1E9DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9DE4u;
    // 0x1e9de8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED050u, 0x1E9DE4u, 0x1E9DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DECu;
label_1e9dec:
    // 0x1e9dec: 0x8e86002c  lw          $a2, 0x2C($s4)
    ctx->pc = 0x1e9decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1e9df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9df4: 0xc07b414  jal         func_1ED050
    ctx->pc = 0x1E9DF4u;
    SET_GPR_U32(ctx, 31, 0x1E9DFCu);
    ctx->pc = 0x1E9DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9DF4u;
    // 0x1e9df8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED050u, 0x1E9DF4u, 0x1E9DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DFCu;
label_1e9dfc:
    // 0x1e9dfc: 0x8ea6002c  lw          $a2, 0x2C($s5)
    ctx->pc = 0x1e9dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x1e9e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e04: 0xc07b414  jal         func_1ED050
    ctx->pc = 0x1E9E04u;
    SET_GPR_U32(ctx, 31, 0x1E9E0Cu);
    ctx->pc = 0x1E9E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9E04u;
    // 0x1e9e08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED050u, 0x1E9E04u, 0x1E9E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E0Cu;
label_1e9e0c:
    // 0x1e9e0c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1e9e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1e9e10: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1e9e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e9e14: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1e9e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e9e18: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1e9e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e9e1c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1e9e1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1e9e20: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1e9e20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e9e24: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1e9e24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e9e28: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1e9e28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e9e2c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1e9e2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e9e30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e9e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e9e34: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1e9e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e9e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E38u;
        // 0x1e9e3c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9E40u;
}
