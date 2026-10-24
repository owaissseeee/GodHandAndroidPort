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

// Function: func_002B0908
// Address: 0x2b0908 - 0x2b0a58
void func_002B0908_0x2b0908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B0908_0x2b0908");
#endif

    switch (ctx->pc) {
        case 0x2b0994u: goto label_2b0994;
        case 0x2b09a4u: goto label_2b09a4;
        case 0x2b09b4u: goto label_2b09b4;
        case 0x2b09c4u: goto label_2b09c4;
        case 0x2b09e0u: goto label_2b09e0;
        case 0x2b09f4u: goto label_2b09f4;
        case 0x2b0a24u: goto label_2b0a24;
        default: break;
    }

    ctx->pc = 0x2b0908u;

    // 0x2b0908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b0908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b090c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b090cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b0910: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b0910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b0914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b0914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0918: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b0918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b091c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b091cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0924: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2b0924u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b0928: 0x313c2  srl         $v0, $v1, 15
    ctx->pc = 0x2b0928u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2b092c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2B092Cu;
    {
        const bool branch_taken_0x2b092c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B092Cu;
        // 0x2b0930: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b092c) {
            ctx->pc = 0x2B09D8u;
            goto label_2b09d8;
        }
    }
    ctx->pc = 0x2B0934u;
    // 0x2b0934: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b0934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b0938: 0x34029400  ori         $v0, $zero, 0x9400
    ctx->pc = 0x2b0938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x2b093c: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B093Cu;
    {
        const bool branch_taken_0x2b093c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B093Cu;
        // 0x2b0940: 0x43102a  slt         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b093c) {
            ctx->pc = 0x2B09ACu;
            goto label_2b09ac;
        }
    }
    ctx->pc = 0x2B0944u;
    // 0x2b0944: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0944u;
    {
        const bool branch_taken_0x2b0944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0944u;
        // 0x2b0948: 0x3402a800  ori         $v0, $zero, 0xA800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0944) {
            ctx->pc = 0x2B0960u;
            goto label_2b0960;
        }
    }
    ctx->pc = 0x2B094Cu;
    // 0x2b094c: 0x34029300  ori         $v0, $zero, 0x9300
    ctx->pc = 0x2b094cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37632);
    // 0x2b0950: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B0950u;
    {
        const bool branch_taken_0x2b0950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0950u;
        // 0x2b0954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0950) {
            ctx->pc = 0x2B098Cu;
            goto label_2b098c;
        }
    }
    ctx->pc = 0x2B0958u;
    // 0x2b0958: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2B0958u;
    {
        const bool branch_taken_0x2b0958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0958) {
            ctx->pc = 0x2B09CCu;
            goto label_2b09cc;
        }
    }
    ctx->pc = 0x2B0960u;
label_2b0960:
    // 0x2b0960: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B0960u;
    {
        const bool branch_taken_0x2b0960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b0960) {
            ctx->pc = 0x2B09CCu;
            goto label_2b09cc;
        }
    }
    ctx->pc = 0x2B0968u;
    // 0x2b0968: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2b0968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b096c: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x2b096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0970: 0xc6030044  lwc1        $f3, 0x44($s0)
    ctx->pc = 0x2b0970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0974: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b0978: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2b0978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2b097c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b097cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0980: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b0980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2b0984: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2B0984u;
    {
        const bool branch_taken_0x2b0984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0984u;
        // 0x2b0988: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0984) {
            ctx->pc = 0x2B0A3Cu;
            goto label_2b0a3c;
        }
    }
    ctx->pc = 0x2B098Cu;
label_2b098c:
    // 0x2b098c: 0xc0ac49c  jal         func_2B1270
    ctx->pc = 0x2B098Cu;
    SET_GPR_U32(ctx, 31, 0x2B0994u);
    ctx->pc = 0x2B0990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B098Cu;
    // 0x2b0990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1270u, 0x2B098Cu, 0x2B0994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0994u;
label_2b0994:
    // 0x2b0994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0998: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b0998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b099c: 0xc0ac35a  jal         func_2B0D68
    ctx->pc = 0x2B099Cu;
    SET_GPR_U32(ctx, 31, 0x2B09A4u);
    ctx->pc = 0x2B09A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B099Cu;
    // 0x2b09a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0D68u, 0x2B099Cu, 0x2B09A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B09A4u;
label_2b09a4:
    // 0x2b09a4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2B09A4u;
    {
        const bool branch_taken_0x2b09a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09A4u;
        // 0x2b09a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09a4) {
            ctx->pc = 0x2B0A40u;
            goto label_2b0a40;
        }
    }
    ctx->pc = 0x2B09ACu;
label_2b09ac:
    // 0x2b09ac: 0xc0ac4a4  jal         func_2B1290
    ctx->pc = 0x2B09ACu;
    SET_GPR_U32(ctx, 31, 0x2B09B4u);
    ctx->pc = 0x2B09B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B09ACu;
    // 0x2b09b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1290u, 0x2B09ACu, 0x2B09B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B09B4u;
label_2b09b4:
    // 0x2b09b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b09b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b09b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b09b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b09bc: 0xc0ac424  jal         func_2B1090
    ctx->pc = 0x2B09BCu;
    SET_GPR_U32(ctx, 31, 0x2B09C4u);
    ctx->pc = 0x2B09C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B09BCu;
    // 0x2b09c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1090u, 0x2B09BCu, 0x2B09C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B09C4u;
label_2b09c4:
    // 0x2b09c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2B09C4u;
    {
        const bool branch_taken_0x2b09c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09C4u;
        // 0x2b09c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09c4) {
            ctx->pc = 0x2B0A40u;
            goto label_2b0a40;
        }
    }
    ctx->pc = 0x2B09CCu;
label_2b09cc:
    // 0x2b09cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b09ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b09d0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2B09D0u;
    {
        const bool branch_taken_0x2b09d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B09D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09D0u;
        // 0x2b09d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09d0) {
            ctx->pc = 0x2B0A40u;
            goto label_2b0a40;
        }
    }
    ctx->pc = 0x2B09D8u;
label_2b09d8:
    // 0x2b09d8: 0xc0ac4a8  jal         func_2B12A0
    ctx->pc = 0x2B09D8u;
    SET_GPR_U32(ctx, 31, 0x2B09E0u);
    ctx->pc = 0x2B09DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B09D8u;
    // 0x2b09dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B12A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B12A0u, 0x2B09D8u, 0x2B09E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B09E0u;
label_2b09e0:
    // 0x2b09e0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B09E0u;
    {
        const bool branch_taken_0x2b09e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09E0u;
        // 0x2b09e4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09e0) {
            ctx->pc = 0x2B0A1Cu;
            goto label_2b0a1c;
        }
    }
    ctx->pc = 0x2B09E8u;
    // 0x2b09e8: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x2b09e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b09ec: 0xc0a92c8  jal         func_2A4B20
    ctx->pc = 0x2B09ECu;
    SET_GPR_U32(ctx, 31, 0x2B09F4u);
    ctx->pc = 0x2B09F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B09ECu;
    // 0x2b09f0: 0x8c442380  lw          $a0, 0x2380($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B20u, 0x2B09ECu, 0x2B09F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B09F4u;
label_2b09f4:
    // 0x2b09f4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2b09f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b09f8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b09f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b09fc: 0x0  nop
    ctx->pc = 0x2b09fcu;
    // NOP
    // 0x2b0a00: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b0a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b0a04: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x2b0a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0a08: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x2b0a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0a0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b0a10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b0a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b0a14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B0A14u;
    {
        const bool branch_taken_0x2b0a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A14u;
        // 0x2b0a18: 0x46001802  mul.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a14) {
            ctx->pc = 0x2B0A3Cu;
            goto label_2b0a3c;
        }
    }
    ctx->pc = 0x2B0A1Cu;
label_2b0a1c:
    // 0x2b0a1c: 0xc0ac4b6  jal         func_2B12D8
    ctx->pc = 0x2B0A1Cu;
    SET_GPR_U32(ctx, 31, 0x2B0A24u);
    ctx->pc = 0x2B12D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B12D8u, 0x2B0A1Cu, 0x2B0A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0A24u;
label_2b0a24:
    // 0x2b0a24: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2b0a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0a28: 0xc602003c  lwc1        $f2, 0x3C($s0)
    ctx->pc = 0x2b0a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0a2c: 0xc6030044  lwc1        $f3, 0x44($s0)
    ctx->pc = 0x2b0a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0a30: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b0a30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b0a34: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2b0a34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2b0a38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b0a3c:
    // 0x2b0a3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b0a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b0a40:
    // 0x2b0a40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b0a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0a44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b0a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A4Cu;
        // 0x2b0a50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0A54u;
    // 0x2b0a54: 0x0  nop
    ctx->pc = 0x2b0a54u;
    // NOP
    ctx->pc = 0x2b0a58u;
}
