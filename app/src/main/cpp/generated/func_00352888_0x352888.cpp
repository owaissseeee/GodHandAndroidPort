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

// Function: func_00352888
// Address: 0x352888 - 0x352aa0
void func_00352888_0x352888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00352888_0x352888");
#endif

    switch (ctx->pc) {
        case 0x3528e4u: goto label_3528e4;
        default: break;
    }

    ctx->pc = 0x352888u;

    // 0x352888: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x352888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35288c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35288cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x352890: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x352890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352894: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x352894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x352898: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x352898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35289c: 0x3c140046  lui         $s4, 0x46
    ctx->pc = 0x35289cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
    // 0x3528a0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x3528a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3528a4: 0x8e949920  lw          $s4, -0x66E0($s4)
    ctx->pc = 0x3528a4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294940960)));
    // 0x3528a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3528a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3528ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3528acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528b0: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x3528b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x3528b4: 0x3c06055d  lui         $a2, 0x55D
    ctx->pc = 0x3528b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1373 << 16));
    // 0x3528b8: 0x34c64a80  ori         $a2, $a2, 0x4A80
    ctx->pc = 0x3528b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19072);
    // 0x3528bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3528bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3528c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3528c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3528c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3528c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3528c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3528c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3528cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3528ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3528d0: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x3528d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x3528d4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3528d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3528d8: 0x8e7396c8  lw          $s3, -0x6938($s3)
    ctx->pc = 0x3528d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294940360)));
    // 0x3528dc: 0xc0db264  jal         func_36C990
    ctx->pc = 0x3528DCu;
    SET_GPR_U32(ctx, 31, 0x3528E4u);
    ctx->pc = 0x3528E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3528DCu;
    // 0x3528e0: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C990u, 0x3528DCu, 0x3528E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3528E4u;
label_3528e4:
    // 0x3528e4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x3528e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3528e8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3528e8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3528ec: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x3528ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x3528f0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3528f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3528f4: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x3528f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x3528f8: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x3528f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x3528fc: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x3528fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
    // 0x352900: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x352900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x352904: 0xa6a3001e  sh          $v1, 0x1E($s5)
    ctx->pc = 0x352904u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x352908: 0x12400045  beqz        $s2, . + 4 + (0x45 << 2)
    ctx->pc = 0x352908u;
    {
        const bool branch_taken_0x352908 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352908u;
        // 0x35290c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352908) {
            ctx->pc = 0x352A20u;
            goto label_352a20;
        }
    }
    ctx->pc = 0x352910u;
    // 0x352910: 0x24027512  addiu       $v0, $zero, 0x7512
    ctx->pc = 0x352910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29970));
    // 0x352914: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x352914u;
    {
        const bool branch_taken_0x352914 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x352918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352914u;
        // 0x352918: 0x3402ea24  ori         $v0, $zero, 0xEA24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352914) {
            ctx->pc = 0x352930u;
            goto label_352930;
        }
    }
    ctx->pc = 0x35291Cu;
    // 0x35291c: 0x56820041  bnel        $s4, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x35291Cu;
    {
        const bool branch_taken_0x35291c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x35291c) {
            ctx->pc = 0x352920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35291Cu;
            // 0x352920: 0xb3001a  div         $zero, $a1, $s3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x352A24u;
            goto label_352a24;
        }
    }
    ctx->pc = 0x352924u;
    // 0x352924: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x352924u;
    {
        const bool branch_taken_0x352924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352924u;
        // 0x352928: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352924) {
            ctx->pc = 0x352940u;
            goto label_352940;
        }
    }
    ctx->pc = 0x35292Cu;
    // 0x35292c: 0x0  nop
    ctx->pc = 0x35292cu;
    // NOP
label_352930:
    // 0x352930: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x352930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x352934: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x352934u;
    {
        const bool branch_taken_0x352934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352934u;
        // 0x352938: 0x244896f0  addiu       $t0, $v0, -0x6910 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352934) {
            ctx->pc = 0x352944u;
            goto label_352944;
        }
    }
    ctx->pc = 0x35293Cu;
    // 0x35293c: 0x0  nop
    ctx->pc = 0x35293cu;
    // NOP
label_352940:
    // 0x352940: 0x24489710  addiu       $t0, $v0, -0x68F0
    ctx->pc = 0x352940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940432));
label_352944:
    // 0x352944: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x352944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x352948: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x352948u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35294c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35294Cu;
    {
        const bool branch_taken_0x35294c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35294c) {
            ctx->pc = 0x352950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35294Cu;
            // 0x352950: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x352954u;
            goto label_352954;
        }
    }
    ctx->pc = 0x352954u;
label_352954:
    // 0x352954: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x352954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x352958: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x352958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x35295c: 0x2010  mfhi        $a0
    ctx->pc = 0x35295cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x352960: 0x2812  mflo        $a1
    ctx->pc = 0x352960u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x352964: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x352964u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x352968: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x352968u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35296c: 0x1010  mfhi        $v0
    ctx->pc = 0x35296cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x352970: 0x2012  mflo        $a0
    ctx->pc = 0x352970u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x352974: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x352974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352978: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x352978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x35297c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35297Cu;
    {
        const bool branch_taken_0x35297c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35297Cu;
        // 0x352980: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35297c) {
            ctx->pc = 0x3529A8u;
            goto label_3529a8;
        }
    }
    ctx->pc = 0x352984u;
    // 0x352984: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x352984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x352988: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x352988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35298c: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x35298cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x352990: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x352990u;
    {
        const bool branch_taken_0x352990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352990) {
            ctx->pc = 0x352994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352990u;
            // 0x352994: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x352998u;
            goto label_352998;
        }
    }
    ctx->pc = 0x352998u;
label_352998:
    // 0x352998: 0x2010  mfhi        $a0
    ctx->pc = 0x352998u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x35299c: 0x1812  mflo        $v1
    ctx->pc = 0x35299cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3529a0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3529A0u;
    {
        const bool branch_taken_0x3529a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3529A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3529A0u;
        // 0x3529a4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3529a0) {
            ctx->pc = 0x352A0Cu;
            goto label_352a0c;
        }
    }
    ctx->pc = 0x3529A8u;
label_3529a8:
    // 0x3529a8: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x3529a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x3529ac: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3529acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3529b0: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x3529b0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3529b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3529B4u;
    {
        const bool branch_taken_0x3529b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3529b4) {
            ctx->pc = 0x3529B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3529B4u;
            // 0x3529b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3529BCu;
            goto label_3529bc;
        }
    }
    ctx->pc = 0x3529BCu;
label_3529bc:
    // 0x3529bc: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x3529bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3529c0: 0x1810  mfhi        $v1
    ctx->pc = 0x3529c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3529c4: 0x2012  mflo        $a0
    ctx->pc = 0x3529c4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3529c8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3529c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3529cc: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x3529ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3529d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3529D0u;
    {
        const bool branch_taken_0x3529d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3529D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3529D0u;
        // 0x3529d4: 0x24890001  addiu       $t1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3529d0) {
            ctx->pc = 0x3529E8u;
            goto label_3529e8;
        }
    }
    ctx->pc = 0x3529D8u;
    // 0x3529d8: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x3529d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x3529dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3529dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3529e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3529E0u;
    {
        const bool branch_taken_0x3529e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3529E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3529E0u;
        // 0x3529e4: 0xa23821  addu        $a3, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3529e0) {
            ctx->pc = 0x352A0Cu;
            goto label_352a0c;
        }
    }
    ctx->pc = 0x3529E8u;
label_3529e8:
    // 0x3529e8: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x3529e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x3529ec: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3529ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3529f0: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x3529f0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3529f4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3529F4u;
    {
        const bool branch_taken_0x3529f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3529f4) {
            ctx->pc = 0x3529F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3529F4u;
            // 0x3529f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3529FCu;
            goto label_3529fc;
        }
    }
    ctx->pc = 0x3529FCu;
label_3529fc:
    // 0x3529fc: 0x1812  mflo        $v1
    ctx->pc = 0x3529fcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x352a00: 0x2010  mfhi        $a0
    ctx->pc = 0x352a00u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x352a04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x352a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x352a08: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x352a08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_352a0c:
    // 0x352a0c: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x352a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x352a10: 0x4b2018  mult        $a0, $v0, $t3
    ctx->pc = 0x352a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x352a14: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x352A14u;
    {
        const bool branch_taken_0x352a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352A14u;
        // 0x352a18: 0x894821  addu        $t1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352a14) {
            ctx->pc = 0x352A68u;
            goto label_352a68;
        }
    }
    ctx->pc = 0x352A1Cu;
    // 0x352a1c: 0x0  nop
    ctx->pc = 0x352a1cu;
    // NOP
label_352a20:
    // 0x352a20: 0xb3001a  div         $zero, $a1, $s3
    ctx->pc = 0x352a20u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_352a24:
    // 0x352a24: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x352a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x352a28: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x352a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x352a2c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x352a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x352a30: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x352A30u;
    {
        const bool branch_taken_0x352a30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x352a30) {
            ctx->pc = 0x352A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352A30u;
            // 0x352a34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x352A38u;
            goto label_352a38;
        }
    }
    ctx->pc = 0x352A38u;
label_352a38:
    // 0x352a38: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x352a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x352a3c: 0x1012  mflo        $v0
    ctx->pc = 0x352a3cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x352a40: 0x3810  mfhi        $a3
    ctx->pc = 0x352a40u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x352a44: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x352a44u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x352a48: 0x1012  mflo        $v0
    ctx->pc = 0x352a48u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x352a4c: 0x2010  mfhi        $a0
    ctx->pc = 0x352a4cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x352a50: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x352a50u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x352a54: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x352a54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352a58: 0x1012  mflo        $v0
    ctx->pc = 0x352a58u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x352a5c: 0x2810  mfhi        $a1
    ctx->pc = 0x352a5cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x352a60: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x352a60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352a64: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x352a64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_352a68:
    // 0x352a68: 0xaea70014  sw          $a3, 0x14($s5)
    ctx->pc = 0x352a68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 7));
    // 0x352a6c: 0xaeaa0008  sw          $t2, 0x8($s5)
    ctx->pc = 0x352a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 10));
    // 0x352a70: 0xaea9000c  sw          $t1, 0xC($s5)
    ctx->pc = 0x352a70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 9));
    // 0x352a74: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x352a74u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x352a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x352a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352a7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x352a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x352a80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x352a80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352a84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x352a84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352a88: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x352a88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352a8c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x352a8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x352a90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x352a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x352a94: 0x3e00008  jr          $ra
    ctx->pc = 0x352A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352A94u;
        // 0x352a98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352A9Cu;
    // 0x352a9c: 0x0  nop
    ctx->pc = 0x352a9cu;
    // NOP
    ctx->pc = 0x352aa0u;
}
