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

// Function: func_001DF528
// Address: 0x1df528 - 0x1df758
void func_001DF528_0x1df528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DF528_0x1df528");
#endif

    switch (ctx->pc) {
        case 0x1df598u: goto label_1df598;
        case 0x1df5acu: goto label_1df5ac;
        case 0x1df5f8u: goto label_1df5f8;
        case 0x1df620u: goto label_1df620;
        case 0x1df668u: goto label_1df668;
        case 0x1df678u: goto label_1df678;
        case 0x1df700u: goto label_1df700;
        case 0x1df718u: goto label_1df718;
        case 0x1df728u: goto label_1df728;
        default: break;
    }

    ctx->pc = 0x1df528u;

    // 0x1df528: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1df528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1df52c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1df52cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1df530: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1df530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1df534: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x1df534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1df538: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1df538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1df53c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1df53cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df540: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1df540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1df544: 0x30d5ffff  andi        $s5, $a2, 0xFFFF
    ctx->pc = 0x1df544u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1df548: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1df548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1df54c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1df54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1df550: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1df550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1df554: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1df554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1df558: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1df558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1df55c: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1DF55Cu;
    {
        const bool branch_taken_0x1df55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF55Cu;
        // 0x1df560: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df55c) {
            ctx->pc = 0x1DF728u;
            goto label_1df728;
        }
    }
    ctx->pc = 0x1DF564u;
    // 0x1df564: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1df564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1df568: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x1df568u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1df56c: 0x2446b6b8  addiu       $a2, $v0, -0x4948
    ctx->pc = 0x1df56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948536));
    // 0x1df570: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1df570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1df574: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1df574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1df578: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1df578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1df57c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1df57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df580: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1df580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1df584: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1df584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1df588: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1df588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df58c: 0x2eb40005  sltiu       $s4, $s5, 0x5
    ctx->pc = 0x1df58cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1df590: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1df590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df594: 0x0  nop
    ctx->pc = 0x1df594u;
    // NOP
label_1df598:
    // 0x1df598: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1df598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df59c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1df59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df5a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df5a4: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF5A4u;
    SET_GPR_U32(ctx, 31, 0x1DF5ACu);
    ctx->pc = 0x1DF5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF5A4u;
    // 0x1df5a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF5A4u, 0x1DF5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF5ACu;
label_1df5ac:
    // 0x1df5ac: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x1df5acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1df5b0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DF5B0u;
    {
        const bool branch_taken_0x1df5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5B0u;
        // 0x1df5b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5b0) {
            ctx->pc = 0x1DF598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df598;
        }
    }
    ctx->pc = 0x1DF5B8u;
    // 0x1df5b8: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF5B8u;
    {
        const bool branch_taken_0x1df5b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5B8u;
        // 0x1df5bc: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5b8) {
            ctx->pc = 0x1DF5D8u;
            goto label_1df5d8;
        }
    }
    ctx->pc = 0x1DF5C0u;
    // 0x1df5c0: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x1df5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1df5c4: 0x2442b6d0  addiu       $v0, $v0, -0x4930
    ctx->pc = 0x1df5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948560));
    // 0x1df5c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1df5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1df5cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1df5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df5d0: 0x800008  jr          $a0
    ctx->pc = 0x1DF5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF5D8u: goto label_1df5d8;
            case 0x1DF600u: goto label_1df600;
            case 0x1DF628u: goto label_1df628;
            case 0x1DF640u: goto label_1df640;
            case 0x1DF680u: goto label_1df680;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF5D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DF5D8u;
label_1df5d8:
    // 0x1df5d8: 0x3b21021  addu        $v0, $sp, $s2
    ctx->pc = 0x1df5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x1df5dc: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x1df5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1df5e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1df5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df5e4: 0x2405fe3e  addiu       $a1, $zero, -0x1C2
    ctx->pc = 0x1df5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    // 0x1df5e8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1df5e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1df5ec: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1df5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1df5f0: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DF5F0u;
    SET_GPR_U32(ctx, 31, 0x1DF5F8u);
    ctx->pc = 0x1DF5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF5F0u;
    // 0x1df5f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DF5F0u, 0x1DF5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF5F8u;
label_1df5f8:
    // 0x1df5f8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1DF5F8u;
    {
        const bool branch_taken_0x1df5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF5F8u;
        // 0x1df5fc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5f8) {
            ctx->pc = 0x1DF72Cu;
            goto label_1df72c;
        }
    }
    ctx->pc = 0x1DF600u;
label_1df600:
    // 0x1df600: 0x3b28021  addu        $s0, $sp, $s2
    ctx->pc = 0x1df600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x1df604: 0x2402007c  addiu       $v0, $zero, 0x7C
    ctx->pc = 0x1df604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1df608: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1df608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df60c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df610: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1df610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1df614: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1df614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1df618: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DF618u;
    SET_GPR_U32(ctx, 31, 0x1DF620u);
    ctx->pc = 0x1DF61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF618u;
    // 0x1df61c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DF618u, 0x1DF620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF620u;
label_1df620:
    // 0x1df620: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1DF620u;
    {
        const bool branch_taken_0x1df620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF620u;
        // 0x1df624: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df620) {
            ctx->pc = 0x1DF66Cu;
            goto label_1df66c;
        }
    }
    ctx->pc = 0x1DF628u;
label_1df628:
    // 0x1df628: 0x3b28021  addu        $s0, $sp, $s2
    ctx->pc = 0x1df628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x1df62c: 0x2402007c  addiu       $v0, $zero, 0x7C
    ctx->pc = 0x1df62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1df630: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1df630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df634: 0x2405fe3e  addiu       $a1, $zero, -0x1C2
    ctx->pc = 0x1df634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    // 0x1df638: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF638u;
    {
        const bool branch_taken_0x1df638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF638u;
        // 0x1df63c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df638) {
            ctx->pc = 0x1DF654u;
            goto label_1df654;
        }
    }
    ctx->pc = 0x1DF640u;
label_1df640:
    // 0x1df640: 0x3b28021  addu        $s0, $sp, $s2
    ctx->pc = 0x1df640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x1df644: 0x2402007c  addiu       $v0, $zero, 0x7C
    ctx->pc = 0x1df644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1df648: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1df648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df64c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df650: 0x240601c2  addiu       $a2, $zero, 0x1C2
    ctx->pc = 0x1df650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_1df654:
    // 0x1df654: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1df654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1df658: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1df658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1df65c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1df65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1df660: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1DF660u;
    SET_GPR_U32(ctx, 31, 0x1DF668u);
    ctx->pc = 0x1DF664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF660u;
    // 0x1df664: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1DF660u, 0x1DF668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF668u;
label_1df668:
    // 0x1df668: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1df668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1df66c:
    // 0x1df66c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1df66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df670: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF670u;
    SET_GPR_U32(ctx, 31, 0x1DF678u);
    ctx->pc = 0x1DF674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF670u;
    // 0x1df674: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF670u, 0x1DF678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF678u;
label_1df678:
    // 0x1df678: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1DF678u;
    {
        const bool branch_taken_0x1df678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF678u;
        // 0x1df67c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df678) {
            ctx->pc = 0x1DF72Cu;
            goto label_1df72c;
        }
    }
    ctx->pc = 0x1DF680u;
label_1df680:
    // 0x1df680: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1df680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1df684: 0x3b28021  addu        $s0, $sp, $s2
    ctx->pc = 0x1df684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x1df688: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1df688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1df68c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1df68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1df690: 0x2e53024  and         $a2, $s7, $a1
    ctx->pc = 0x1df690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x1df694: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1df694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df698: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1df698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1df69c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1df69cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1df6a0: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1df6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1df6a4: 0x2c52824  and         $a1, $s6, $a1
    ctx->pc = 0x1df6a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x1df6a8: 0x2411007c  addiu       $s1, $zero, 0x7C
    ctx->pc = 0x1df6a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1df6ac: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1df6acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1df6b0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1df6b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1df6b4: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x1df6b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1df6b8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1df6b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1df6bc: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1df6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1df6c0: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1df6c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1df6c4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1df6c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1df6c8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1df6c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1df6cc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1df6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1df6d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1df6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1df6d4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1df6d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1df6d8: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1df6d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1df6dc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1df6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1df6e0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1df6e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1df6e4: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1df6e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1df6e8: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1df6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1df6ec: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1df6ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1df6f0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1df6f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1df6f4: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x1df6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1df6f8: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1DF6F8u;
    SET_GPR_U32(ctx, 31, 0x1DF700u);
    ctx->pc = 0x1DF6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF6F8u;
    // 0x1df6fc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1DF6F8u, 0x1DF700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF700u;
label_1df700:
    // 0x1df700: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1df700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df708: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x1df708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1df70c: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1df70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1df710: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1DF710u;
    SET_GPR_U32(ctx, 31, 0x1DF718u);
    ctx->pc = 0x1DF714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF710u;
    // 0x1df714: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1DF710u, 0x1DF718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF718u;
label_1df718:
    // 0x1df718: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1df718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1df71c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1df71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df720: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DF720u;
    SET_GPR_U32(ctx, 31, 0x1DF728u);
    ctx->pc = 0x1DF724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF720u;
    // 0x1df724: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DF720u, 0x1DF728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF728u;
label_1df728:
    // 0x1df728: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1df728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1df72c:
    // 0x1df72c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1df72cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1df730: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1df730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1df734: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1df734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1df738: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1df738u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1df73c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1df73cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1df740: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1df740u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df744: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1df744u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df74c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF74Cu;
        // 0x1df750: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF754u;
    // 0x1df754: 0x0  nop
    ctx->pc = 0x1df754u;
    // NOP
    ctx->pc = 0x1df758u;
}
