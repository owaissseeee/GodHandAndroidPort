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

// Function: func_0010C930
// Address: 0x10c930 - 0x10cb10
void func_0010C930_0x10c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010C930_0x10c930");
#endif

    switch (ctx->pc) {
        case 0x10c96cu: goto label_10c96c;
        case 0x10c9e4u: goto label_10c9e4;
        case 0x10ca10u: goto label_10ca10;
        case 0x10cab0u: goto label_10cab0;
        case 0x10cac4u: goto label_10cac4;
        case 0x10cad0u: goto label_10cad0;
        case 0x10cadcu: goto label_10cadc;
        case 0x10cae8u: goto label_10cae8;
        case 0x10caf8u: goto label_10caf8;
        default: break;
    }

    ctx->pc = 0x10c930u;

    // 0x10c930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c934: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10c934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10c938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c93c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c940: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10c940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10c944: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x10c944u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x10c948: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C948u;
    {
        const bool branch_taken_0x10c948 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x10C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C948u;
        // 0x10c94c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c948) {
            ctx->pc = 0x10C954u;
            goto label_10c954;
        }
    }
    ctx->pc = 0x10C950u;
    // 0x10c950: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x10c950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_10c954:
    // 0x10c954: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x10c954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x10c958: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c960: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10c960u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10c964: 0xc0560a2  jal         func_158288
    ctx->pc = 0x10C964u;
    SET_GPR_U32(ctx, 31, 0x10C96Cu);
    ctx->pc = 0x10C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C964u;
    // 0x10c968: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x10C964u, 0x10C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C96Cu;
label_10c96c:
    // 0x10c96c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x10c96cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10c970: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C970u;
    {
        const bool branch_taken_0x10c970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C970u;
        // 0x10c974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c970) {
            ctx->pc = 0x10C988u;
            goto label_10c988;
        }
    }
    ctx->pc = 0x10C978u;
    // 0x10c978: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x10C978u;
    {
        const bool branch_taken_0x10c978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C978u;
        // 0x10c97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c978) {
            ctx->pc = 0x10CA1Cu;
            goto label_10ca1c;
        }
    }
    ctx->pc = 0x10C980u;
    // 0x10c980: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x10C980u;
    {
        const bool branch_taken_0x10c980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c980) {
            ctx->pc = 0x10CAE0u;
            goto label_10cae0;
        }
    }
    ctx->pc = 0x10C988u;
label_10c988:
    // 0x10c988: 0x82020648  lb          $v0, 0x648($s0)
    ctx->pc = 0x10c988u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1608)));
    // 0x10c98c: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x10c98cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x10c990: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x10c990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x10c994: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C994u;
    {
        const bool branch_taken_0x10c994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C994u;
        // 0x10c998: 0xa60005e2  sh          $zero, 0x5E2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c994) {
            ctx->pc = 0x10C9A4u;
            goto label_10c9a4;
        }
    }
    ctx->pc = 0x10C99Cu;
    // 0x10c99c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10c9a0: 0xa2020648  sb          $v0, 0x648($s0)
    ctx->pc = 0x10c9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10c9a4:
    // 0x10c9a4: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x10c9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10c9a8: 0x8e0406a0  lw          $a0, 0x6A0($s0)
    ctx->pc = 0x10c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x10c9ac: 0x8d020060  lw          $v0, 0x60($t0)
    ctx->pc = 0x10c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x10c9b0: 0x8d030064  lw          $v1, 0x64($t0)
    ctx->pc = 0x10c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 100)));
    // 0x10c9b4: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x10c9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10c9b8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x10C9B8u;
    {
        const bool branch_taken_0x10c9b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9B8u;
        // 0x10c9bc: 0x683021  addu        $a2, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9b8) {
            ctx->pc = 0x10C9F8u;
            goto label_10c9f8;
        }
    }
    ctx->pc = 0x10C9C0u;
    // 0x10c9c0: 0x8d050374  lw          $a1, 0x374($t0)
    ctx->pc = 0x10c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 884)));
    // 0x10c9c4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10c9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10c9c8: 0x8d060390  lw          $a2, 0x390($t0)
    ctx->pc = 0x10c9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 912)));
    // 0x10c9cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10c9ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9d0: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x10c9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10c9d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10c9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10c9d8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x10c9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x10c9dc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10C9DCu;
    SET_GPR_U32(ctx, 31, 0x10C9E4u);
    ctx->pc = 0x10C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9DCu;
    // 0x10c9e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10C9DCu, 0x10C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9E4u;
label_10c9e4:
    // 0x10c9e4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10c9e8: 0x8c430354  lw          $v1, 0x354($v0)
    ctx->pc = 0x10c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 852)));
    // 0x10c9ec: 0x8c440358  lw          $a0, 0x358($v0)
    ctx->pc = 0x10c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 856)));
    // 0x10c9f0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x10c9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10c9f4: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x10c9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10c9f8:
    // 0x10c9f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10c9f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10c9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca00: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10ca00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10ca04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10ca04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca08: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10CA08u;
    SET_GPR_U32(ctx, 31, 0x10CA10u);
    ctx->pc = 0x10CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CA08u;
    // 0x10ca0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10CA08u, 0x10CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA10u;
label_10ca10:
    // 0x10ca10: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x10ca10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10ca14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10ca18: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10ca18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_10ca1c:
    // 0x10ca1c: 0x9202061f  lbu         $v0, 0x61F($s0)
    ctx->pc = 0x10ca1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1567)));
    // 0x10ca20: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x10CA20u;
    {
        const bool branch_taken_0x10ca20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ca20) {
            ctx->pc = 0x10CAB4u;
            goto label_10cab4;
        }
    }
    ctx->pc = 0x10CA28u;
    // 0x10ca28: 0xc6000608  lwc1        $f0, 0x608($s0)
    ctx->pc = 0x10ca28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10ca2c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x10ca2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x10ca30: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10ca30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x10ca34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10ca34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10ca38: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x10ca38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x10ca3c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x10ca3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x10ca40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10ca40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10ca44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x10ca44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x10ca48: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10ca48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10ca4c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x10ca4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x10ca50: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x10ca50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ca54: 0x0  nop
    ctx->pc = 0x10ca54u;
    // NOP
    // 0x10ca58: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10CA58u;
    {
        const bool branch_taken_0x10ca58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ca58) {
            ctx->pc = 0x10CA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CA58u;
            // 0x10ca5c: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CA60u;
            goto label_10ca60;
        }
    }
    ctx->pc = 0x10CA60u;
label_10ca60:
    // 0x10ca60: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x10ca60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x10ca64: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10ca64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10ca68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10ca68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ca6c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x10ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x10ca70: 0xc442d478  lwc1        $f2, -0x2B88($v0)
    ctx->pc = 0x10ca70u;
    { uint32_t bits = FAST_READ32(0x3BD478u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10ca74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10ca74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10ca78: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x10ca78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ca7c: 0x0  nop
    ctx->pc = 0x10ca7cu;
    // NOP
    // 0x10ca80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10CA80u;
    {
        const bool branch_taken_0x10ca80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ca80) {
            ctx->pc = 0x10CA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CA80u;
            // 0x10ca84: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CA88u;
            goto label_10ca88;
        }
    }
    ctx->pc = 0x10CA88u;
label_10ca88:
    // 0x10ca88: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x10ca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10ca8c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x10ca8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ca90: 0x0  nop
    ctx->pc = 0x10ca90u;
    // NOP
    // 0x10ca94: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10CA94u;
    {
        const bool branch_taken_0x10ca94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ca94) {
            ctx->pc = 0x10CA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CA94u;
            // 0x10ca98: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CA9Cu;
            goto label_10ca9c;
        }
    }
    ctx->pc = 0x10CA9Cu;
label_10ca9c:
    // 0x10ca9c: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x10ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10caa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10caa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10caa4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10caa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10caa8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x10CAA8u;
    SET_GPR_U32(ctx, 31, 0x10CAB0u);
    ctx->pc = 0x10CAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAA8u;
    // 0x10caac: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x10CAA8u, 0x10CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAB0u;
label_10cab0:
    // 0x10cab0: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x10cab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_10cab4:
    // 0x10cab4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10cab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10cab8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10cab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10cabc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10CABCu;
    SET_GPR_U32(ctx, 31, 0x10CAC4u);
    ctx->pc = 0x10CAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CABCu;
    // 0x10cac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10CABCu, 0x10CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAC4u;
label_10cac4:
    // 0x10cac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cac8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x10CAC8u;
    SET_GPR_U32(ctx, 31, 0x10CAD0u);
    ctx->pc = 0x10CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAC8u;
    // 0x10cacc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10CAC8u, 0x10CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAD0u;
label_10cad0:
    // 0x10cad0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10cad0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10cad4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x10CAD4u;
    SET_GPR_U32(ctx, 31, 0x10CADCu);
    ctx->pc = 0x10CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAD4u;
    // 0x10cad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10CAD4u, 0x10CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CADCu;
label_10cadc:
    // 0x10cadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10cae0:
    // 0x10cae0: 0xc048e4e  jal         func_123938
    ctx->pc = 0x10CAE0u;
    SET_GPR_U32(ctx, 31, 0x10CAE8u);
    ctx->pc = 0x10CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAE0u;
    // 0x10cae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10CAE0u, 0x10CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAE8u;
label_10cae8:
    // 0x10cae8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CAE8u;
    {
        const bool branch_taken_0x10cae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cae8) {
            ctx->pc = 0x10CAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CAE8u;
            // 0x10caec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CAFCu;
            goto label_10cafc;
        }
    }
    ctx->pc = 0x10CAF0u;
    // 0x10caf0: 0xc04afee  jal         func_12BFB8
    ctx->pc = 0x10CAF0u;
    SET_GPR_U32(ctx, 31, 0x10CAF8u);
    ctx->pc = 0x10CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAF0u;
    // 0x10caf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BFB8u, 0x10CAF0u, 0x10CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAF8u;
label_10caf8:
    // 0x10caf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10caf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10cafc:
    // 0x10cafc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cb00: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10cb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10cb04: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB04u;
        // 0x10cb08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CB0Cu;
    // 0x10cb0c: 0x0  nop
    ctx->pc = 0x10cb0cu;
    // NOP
    ctx->pc = 0x10cb10u;
}
