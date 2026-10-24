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

// Function: func_00382898
// Address: 0x382898 - 0x382d30
void func_00382898_0x382898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00382898_0x382898");
#endif

    switch (ctx->pc) {
        case 0x3828dcu: goto label_3828dc;
        case 0x382918u: goto label_382918;
        case 0x382984u: goto label_382984;
        case 0x3829a0u: goto label_3829a0;
        case 0x3829b8u: goto label_3829b8;
        case 0x3829dcu: goto label_3829dc;
        case 0x382a10u: goto label_382a10;
        case 0x382a30u: goto label_382a30;
        case 0x382a58u: goto label_382a58;
        case 0x382a84u: goto label_382a84;
        case 0x382aacu: goto label_382aac;
        case 0x382accu: goto label_382acc;
        case 0x382af4u: goto label_382af4;
        case 0x382b10u: goto label_382b10;
        case 0x382b2cu: goto label_382b2c;
        case 0x382b48u: goto label_382b48;
        case 0x382b64u: goto label_382b64;
        case 0x382b7cu: goto label_382b7c;
        case 0x382bb4u: goto label_382bb4;
        case 0x382bdcu: goto label_382bdc;
        case 0x382c04u: goto label_382c04;
        case 0x382c3cu: goto label_382c3c;
        case 0x382c74u: goto label_382c74;
        case 0x382ca0u: goto label_382ca0;
        case 0x382cccu: goto label_382ccc;
        case 0x382d08u: goto label_382d08;
        default: break;
    }

    ctx->pc = 0x382898u;

    // 0x382898: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x382898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x38289c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38289cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3828a0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3828a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3828a4: 0x24e7c808  addiu       $a3, $a3, -0x37F8
    ctx->pc = 0x3828a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952968));
    // 0x3828a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3828a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3828ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3828acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3828b0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3828b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3828b4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3828b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3828b8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3828b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3828bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3828bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3828c0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3828c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3828c4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x3828c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3828c8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3828c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3828cc: 0x26b30318  addiu       $s3, $s5, 0x318
    ctx->pc = 0x3828ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 792));
    // 0x3828d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3828d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3828d4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3828D4u;
    SET_GPR_U32(ctx, 31, 0x3828DCu);
    ctx->pc = 0x3828D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3828D4u;
    // 0x3828d8: 0x26b40348  addiu       $s4, $s5, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3828D4u, 0x3828DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3828DCu;
label_3828dc:
    // 0x3828dc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3828dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3828e0: 0x8ea3003c  lw          $v1, 0x3C($s5)
    ctx->pc = 0x3828e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x3828e4: 0x2447c820  addiu       $a3, $v0, -0x37E0
    ctx->pc = 0x3828e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952992));
    // 0x3828e8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3828e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3828ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3828ECu;
    {
        const bool branch_taken_0x3828ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3828F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828ECu;
        // 0x3828f0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3828ec) {
            ctx->pc = 0x382900u;
            goto label_382900;
        }
    }
    ctx->pc = 0x3828F4u;
    // 0x3828f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3828f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3828f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3828F8u;
    {
        const bool branch_taken_0x3828f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3828FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828F8u;
        // 0x3828fc: 0x2448c800  addiu       $t0, $v0, -0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3828f8) {
            ctx->pc = 0x382908u;
            goto label_382908;
        }
    }
    ctx->pc = 0x382900u;
label_382900:
    // 0x382900: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x382900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x382904: 0x8ea8003c  lw          $t0, 0x3C($s5)
    ctx->pc = 0x382904u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_382908:
    // 0x382908: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x382908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38290c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x38290cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x382910: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382910u;
    SET_GPR_U32(ctx, 31, 0x382918u);
    ctx->pc = 0x382914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382910u;
    // 0x382914: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382910u, 0x382918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382918u;
label_382918:
    // 0x382918: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x382918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x38291c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x38291Cu;
    {
        const bool branch_taken_0x38291c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38291Cu;
        // 0x382920: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38291c) {
            ctx->pc = 0x3829C4u;
            goto label_3829c4;
        }
    }
    ctx->pc = 0x382924u;
    // 0x382924: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x382924u;
    {
        const bool branch_taken_0x382924 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x382928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382924u;
        // 0x382928: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382924) {
            ctx->pc = 0x382940u;
            goto label_382940;
        }
    }
    ctx->pc = 0x38292Cu;
    // 0x38292c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x382930: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x382930u;
    {
        const bool branch_taken_0x382930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x382934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382930u;
        // 0x382934: 0x2410000d  addiu       $s0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382930) {
            ctx->pc = 0x382958u;
            goto label_382958;
        }
    }
    ctx->pc = 0x382938u;
    // 0x382938: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x382938u;
    {
        const bool branch_taken_0x382938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382938u;
        // 0x38293c: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382938) {
            ctx->pc = 0x3829C8u;
            goto label_3829c8;
        }
    }
    ctx->pc = 0x382940u;
label_382940:
    // 0x382940: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x382940u;
    {
        const bool branch_taken_0x382940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x382944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382940u;
        // 0x382944: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382940) {
            ctx->pc = 0x3829B8u;
            goto label_3829b8;
        }
    }
    ctx->pc = 0x382948u;
    // 0x382948: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x382948u;
    {
        const bool branch_taken_0x382948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382948u;
        // 0x38294c: 0x2410000d  addiu       $s0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382948) {
            ctx->pc = 0x3829C0u;
            goto label_3829c0;
        }
    }
    ctx->pc = 0x382950u;
    // 0x382950: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x382950u;
    {
        const bool branch_taken_0x382950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382950u;
        // 0x382954: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382950) {
            ctx->pc = 0x3829C8u;
            goto label_3829c8;
        }
    }
    ctx->pc = 0x382958u;
label_382958:
    // 0x382958: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x382958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x38295c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x38295Cu;
    {
        const bool branch_taken_0x38295c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38295Cu;
        // 0x382960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38295c) {
            ctx->pc = 0x3829B8u;
            goto label_3829b8;
        }
    }
    ctx->pc = 0x382964u;
    // 0x382964: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x382964u;
    {
        const bool branch_taken_0x382964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x382968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382964u;
        // 0x382968: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382964) {
            ctx->pc = 0x38298Cu;
            goto label_38298c;
        }
    }
    ctx->pc = 0x38296Cu;
    // 0x38296c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38296cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382970: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x382970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x382974: 0x24e7c830  addiu       $a3, $a3, -0x37D0
    ctx->pc = 0x382974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953008));
    // 0x382978: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x382978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x38297c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38297Cu;
    SET_GPR_U32(ctx, 31, 0x382984u);
    ctx->pc = 0x382980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38297Cu;
    // 0x382980: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38297Cu, 0x382984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382984u;
label_382984:
    // 0x382984: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x382984u;
    {
        const bool branch_taken_0x382984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382984u;
        // 0x382988: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382984) {
            ctx->pc = 0x3829A4u;
            goto label_3829a4;
        }
    }
    ctx->pc = 0x38298Cu;
label_38298c:
    // 0x38298c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x38298cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x382990: 0x24e7c850  addiu       $a3, $a3, -0x37B0
    ctx->pc = 0x382990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953040));
    // 0x382994: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x382994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x382998: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382998u;
    SET_GPR_U32(ctx, 31, 0x3829A0u);
    ctx->pc = 0x38299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382998u;
    // 0x38299c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382998u, 0x3829A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3829A0u;
label_3829a0:
    // 0x3829a0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3829a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_3829a4:
    // 0x3829a4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x3829a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3829a8: 0x24e7c870  addiu       $a3, $a3, -0x3790
    ctx->pc = 0x3829a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953072));
    // 0x3829ac: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3829acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3829b0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3829B0u;
    SET_GPR_U32(ctx, 31, 0x3829B8u);
    ctx->pc = 0x3829B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3829B0u;
    // 0x3829b4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3829B0u, 0x3829B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3829B8u;
label_3829b8:
    // 0x3829b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3829B8u;
    {
        const bool branch_taken_0x3829b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3829BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3829B8u;
        // 0x3829bc: 0x2410000f  addiu       $s0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3829b8) {
            ctx->pc = 0x3829C4u;
            goto label_3829c4;
        }
    }
    ctx->pc = 0x3829C0u;
label_3829c0:
    // 0x3829c0: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x3829c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3829c4:
    // 0x3829c4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3829c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_3829c8:
    // 0x3829c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3829c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3829cc: 0x24e7c888  addiu       $a3, $a3, -0x3778
    ctx->pc = 0x3829ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953096));
    // 0x3829d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3829d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3829d4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3829D4u;
    SET_GPR_U32(ctx, 31, 0x3829DCu);
    ctx->pc = 0x3829D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3829D4u;
    // 0x3829d8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3829D4u, 0x3829DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3829DCu;
label_3829dc:
    // 0x3829dc: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x3829dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x3829e0: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3829E0u;
    {
        const bool branch_taken_0x3829e0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3829E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3829E0u;
        // 0x3829e4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3829e0) {
            ctx->pc = 0x382A18u;
            goto label_382a18;
        }
    }
    ctx->pc = 0x3829E8u;
    // 0x3829e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3829e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3829ec: 0x24422858  addiu       $v0, $v0, 0x2858
    ctx->pc = 0x3829ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10328));
    // 0x3829f0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3829f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3829f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3829f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3829f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3829f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3829fc: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x3829fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x382a00: 0x24e7c898  addiu       $a3, $a3, -0x3768
    ctx->pc = 0x382a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953112));
    // 0x382a04: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x382a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x382a08: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382A08u;
    SET_GPR_U32(ctx, 31, 0x382A10u);
    ctx->pc = 0x382A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382A08u;
    // 0x382a0c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382A08u, 0x382A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382A10u;
label_382a10:
    // 0x382a10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x382A10u;
    {
        const bool branch_taken_0x382a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A10u;
        // 0x382a14: 0x92630000  lbu         $v1, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a10) {
            ctx->pc = 0x382A34u;
            goto label_382a34;
        }
    }
    ctx->pc = 0x382A18u;
label_382a18:
    // 0x382a18: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382a18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382a1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x382a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382a20: 0x24e7c8a0  addiu       $a3, $a3, -0x3760
    ctx->pc = 0x382a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953120));
    // 0x382a24: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x382a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x382a28: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382A28u;
    SET_GPR_U32(ctx, 31, 0x382A30u);
    ctx->pc = 0x382A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382A28u;
    // 0x382a2c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382A28u, 0x382A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382A30u;
label_382a30:
    // 0x382a30: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x382a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_382a34:
    // 0x382a34: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x382a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x382a38: 0x24422840  addiu       $v0, $v0, 0x2840
    ctx->pc = 0x382a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x382a3c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x382a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x382a40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x382a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x382a44: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x382a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x382a48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x382a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x382a4c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x382a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x382a50: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382A50u;
    SET_GPR_U32(ctx, 31, 0x382A58u);
    ctx->pc = 0x382A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382A50u;
    // 0x382a54: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382A50u, 0x382A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382A58u;
label_382a58:
    // 0x382a58: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x382a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x382a5c: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x382a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x382a60: 0x27b2000c  addiu       $s2, $sp, 0xC
    ctx->pc = 0x382a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x382a64: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x382a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x382a68: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x382a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x382a6c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x382a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382a70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x382a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382a74: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x382a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382a78: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x382a78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382a7c: 0xc0e01c8  jal         func_380720
    ctx->pc = 0x382A7Cu;
    SET_GPR_U32(ctx, 31, 0x382A84u);
    ctx->pc = 0x382A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382A7Cu;
    // 0x382a80: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380720u, 0x382A7Cu, 0x382A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382A84u;
label_382a84:
    // 0x382a84: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x382a84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x382a88: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382a88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382a8c: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x382a8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x382a90: 0x24e7c8a8  addiu       $a3, $a3, -0x3758
    ctx->pc = 0x382a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953128));
    // 0x382a94: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x382a94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x382a98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x382a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x382a9c: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x382a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382aa0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x382aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x382aa4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382AA4u;
    SET_GPR_U32(ctx, 31, 0x382AACu);
    ctx->pc = 0x382AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382AA4u;
    // 0x382aa8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382AA4u, 0x382AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382AACu;
label_382aac:
    // 0x382aac: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x382aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x382ab0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x382ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382ab4: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x382ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x382ab8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x382ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382abc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x382abcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382ac0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x382ac0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382ac4: 0xc0e01c8  jal         func_380720
    ctx->pc = 0x382AC4u;
    SET_GPR_U32(ctx, 31, 0x382ACCu);
    ctx->pc = 0x382AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382AC4u;
    // 0x382ac8: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380720u, 0x382AC4u, 0x382ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382ACCu;
label_382acc:
    // 0x382acc: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x382accu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382ad0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382ad4: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x382ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x382ad8: 0x24e7c8c8  addiu       $a3, $a3, -0x3738
    ctx->pc = 0x382ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953160));
    // 0x382adc: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x382adcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x382ae0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x382ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x382ae4: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x382ae4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x382ae8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x382ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x382aec: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382AECu;
    SET_GPR_U32(ctx, 31, 0x382AF4u);
    ctx->pc = 0x382AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382AECu;
    // 0x382af0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382AECu, 0x382AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382AF4u;
label_382af4:
    // 0x382af4: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x382af4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x382af8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382af8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382afc: 0x24e7c8e8  addiu       $a3, $a3, -0x3718
    ctx->pc = 0x382afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953192));
    // 0x382b00: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x382b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x382b04: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x382b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x382b08: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382B08u;
    SET_GPR_U32(ctx, 31, 0x382B10u);
    ctx->pc = 0x382B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382B08u;
    // 0x382b0c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382B08u, 0x382B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382B10u;
label_382b10:
    // 0x382b10: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x382b10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x382b14: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382b14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382b18: 0x24e7c8f8  addiu       $a3, $a3, -0x3708
    ctx->pc = 0x382b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953208));
    // 0x382b1c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x382b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x382b20: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x382b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x382b24: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382B24u;
    SET_GPR_U32(ctx, 31, 0x382B2Cu);
    ctx->pc = 0x382B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382B24u;
    // 0x382b28: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382B24u, 0x382B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382B2Cu;
label_382b2c:
    // 0x382b2c: 0x8e88000c  lw          $t0, 0xC($s4)
    ctx->pc = 0x382b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x382b30: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382b30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382b34: 0x24e7c908  addiu       $a3, $a3, -0x36F8
    ctx->pc = 0x382b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953224));
    // 0x382b38: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x382b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x382b3c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x382b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x382b40: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382B40u;
    SET_GPR_U32(ctx, 31, 0x382B48u);
    ctx->pc = 0x382B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382B40u;
    // 0x382b44: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382B40u, 0x382B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382B48u;
label_382b48:
    // 0x382b48: 0x8e880010  lw          $t0, 0x10($s4)
    ctx->pc = 0x382b48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x382b4c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382b50: 0x24e7c918  addiu       $a3, $a3, -0x36E8
    ctx->pc = 0x382b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953240));
    // 0x382b54: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x382b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x382b58: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x382b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x382b5c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382B5Cu;
    SET_GPR_U32(ctx, 31, 0x382B64u);
    ctx->pc = 0x382B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382B5Cu;
    // 0x382b60: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382B5Cu, 0x382B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382B64u;
label_382b64:
    // 0x382b64: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382b64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382b68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x382b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x382b6c: 0x24e7c928  addiu       $a3, $a3, -0x36D8
    ctx->pc = 0x382b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953256));
    // 0x382b70: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x382b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x382b74: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382B74u;
    SET_GPR_U32(ctx, 31, 0x382B7Cu);
    ctx->pc = 0x382B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382B74u;
    // 0x382b78: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382B74u, 0x382B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382B7Cu;
label_382b7c:
    // 0x382b7c: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x382b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x382b80: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x382B80u;
    {
        const bool branch_taken_0x382b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382b80) {
            ctx->pc = 0x382B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382B80u;
            // 0x382b84: 0x92680002  lbu         $t0, 0x2($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382C44u;
            goto label_382c44;
        }
    }
    ctx->pc = 0x382B88u;
    // 0x382b88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x382b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x382b8c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382b90: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x382b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x382b94: 0x24e7c948  addiu       $a3, $a3, -0x36B8
    ctx->pc = 0x382b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953288));
    // 0x382b98: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x382b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382b9c: 0x8469000e  lh          $t1, 0xE($v1)
    ctx->pc = 0x382b9cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x382ba0: 0x84480004  lh          $t0, 0x4($v0)
    ctx->pc = 0x382ba0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x382ba4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x382ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x382ba8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x382ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x382bac: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382BACu;
    SET_GPR_U32(ctx, 31, 0x382BB4u);
    ctx->pc = 0x382BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382BACu;
    // 0x382bb0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382BACu, 0x382BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382BB4u;
label_382bb4:
    // 0x382bb4: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x382bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x382bb8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382bbc: 0x24e7c960  addiu       $a3, $a3, -0x36A0
    ctx->pc = 0x382bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953312));
    // 0x382bc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x382bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x382bc4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x382bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x382bc8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x382bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x382bcc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x382bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x382bd0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x382bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x382bd4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382BD4u;
    SET_GPR_U32(ctx, 31, 0x382BDCu);
    ctx->pc = 0x382BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382BD4u;
    // 0x382bd8: 0x84480018  lh          $t0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382BD4u, 0x382BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382BDCu;
label_382bdc:
    // 0x382bdc: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x382bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x382be0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382be0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382be4: 0x24e7c970  addiu       $a3, $a3, -0x3690
    ctx->pc = 0x382be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953328));
    // 0x382be8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x382be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x382bec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x382becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x382bf0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x382bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x382bf4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x382bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x382bf8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x382bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x382bfc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382BFCu;
    SET_GPR_U32(ctx, 31, 0x382C04u);
    ctx->pc = 0x382C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382BFCu;
    // 0x382c00: 0x84480022  lh          $t0, 0x22($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382BFCu, 0x382C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382C04u;
label_382c04:
    // 0x382c04: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x382c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x382c08: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x382c08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x382c0c: 0x25082870  addiu       $t0, $t0, 0x2870
    ctx->pc = 0x382c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10352));
    // 0x382c10: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382c10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382c14: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x382c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x382c18: 0x24e7c980  addiu       $a3, $a3, -0x3680
    ctx->pc = 0x382c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953344));
    // 0x382c1c: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x382c1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x382c20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x382c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x382c24: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x382c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x382c28: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x382c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x382c2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x382c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x382c30: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x382c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x382c34: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382C34u;
    SET_GPR_U32(ctx, 31, 0x382C3Cu);
    ctx->pc = 0x382C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382C34u;
    // 0x382c38: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382C34u, 0x382C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382C3Cu;
label_382c3c:
    // 0x382c3c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x382C3Cu;
    {
        const bool branch_taken_0x382c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382C3Cu;
        // 0x382c40: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c3c) {
            ctx->pc = 0x382D0Cu;
            goto label_382d0c;
        }
    }
    ctx->pc = 0x382C44u;
label_382c44:
    // 0x382c44: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382c44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382c48: 0x24e7c990  addiu       $a3, $a3, -0x3670
    ctx->pc = 0x382c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953360));
    // 0x382c4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x382c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x382c50: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x382c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x382c54: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x382c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x382c58: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x382c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x382c5c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x382c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x382c60: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x382c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c64: 0x846a000e  lh          $t2, 0xE($v1)
    ctx->pc = 0x382c64u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x382c68: 0x84490004  lh          $t1, 0x4($v0)
    ctx->pc = 0x382c68u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x382c6c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382C6Cu;
    SET_GPR_U32(ctx, 31, 0x382C74u);
    ctx->pc = 0x382C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382C6Cu;
    // 0x382c70: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382C6Cu, 0x382C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382C74u;
label_382c74:
    // 0x382c74: 0x92680002  lbu         $t0, 0x2($s3)
    ctx->pc = 0x382c74u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x382c78: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382c78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382c7c: 0x24e7c9b0  addiu       $a3, $a3, -0x3650
    ctx->pc = 0x382c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953392));
    // 0x382c80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x382c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x382c84: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x382c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x382c88: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x382c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x382c8c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x382c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x382c90: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x382c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x382c94: 0x84490018  lh          $t1, 0x18($v0)
    ctx->pc = 0x382c94u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x382c98: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382C98u;
    SET_GPR_U32(ctx, 31, 0x382CA0u);
    ctx->pc = 0x382C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382C98u;
    // 0x382c9c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382C98u, 0x382CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382CA0u;
label_382ca0:
    // 0x382ca0: 0x92680002  lbu         $t0, 0x2($s3)
    ctx->pc = 0x382ca0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x382ca4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382ca8: 0x24e7c9c0  addiu       $a3, $a3, -0x3640
    ctx->pc = 0x382ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953408));
    // 0x382cac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x382cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x382cb0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x382cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x382cb4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x382cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x382cb8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x382cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x382cbc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x382cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x382cc0: 0x84490022  lh          $t1, 0x22($v0)
    ctx->pc = 0x382cc0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x382cc4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382CC4u;
    SET_GPR_U32(ctx, 31, 0x382CCCu);
    ctx->pc = 0x382CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382CC4u;
    // 0x382cc8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382CC4u, 0x382CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382CCCu;
label_382ccc:
    // 0x382ccc: 0x92680002  lbu         $t0, 0x2($s3)
    ctx->pc = 0x382cccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x382cd0: 0x3c09003f  lui         $t1, 0x3F
    ctx->pc = 0x382cd0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)63 << 16));
    // 0x382cd4: 0x25292870  addiu       $t1, $t1, 0x2870
    ctx->pc = 0x382cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10352));
    // 0x382cd8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x382cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x382cdc: 0x2881821  addu        $v1, $s4, $t0
    ctx->pc = 0x382cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x382ce0: 0x24e7c9d0  addiu       $a3, $a3, -0x3630
    ctx->pc = 0x382ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953424));
    // 0x382ce4: 0x90620018  lbu         $v0, 0x18($v1)
    ctx->pc = 0x382ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x382ce8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x382ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x382cec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x382cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x382cf0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x382cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x382cf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x382cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x382cf8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x382cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x382cfc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x382cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x382d00: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x382D00u;
    SET_GPR_U32(ctx, 31, 0x382D08u);
    ctx->pc = 0x382D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382D00u;
    // 0x382d04: 0x8c490000  lw          $t1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x382D00u, 0x382D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382D08u;
label_382d08:
    // 0x382d08: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x382d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_382d0c:
    // 0x382d0c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x382d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x382d10: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x382d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x382d14: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x382d14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x382d18: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x382d18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x382d1c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x382d1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x382d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x382d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382d24: 0x3e00008  jr          $ra
    ctx->pc = 0x382D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D24u;
        // 0x382d28: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382D2Cu;
    // 0x382d2c: 0x0  nop
    ctx->pc = 0x382d2cu;
    // NOP
    ctx->pc = 0x382d30u;
}
