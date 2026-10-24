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

// Function: cSnd_BgmControl
// Address: 0x2d0938 - 0x2d0ab8
void cSnd_BgmControl_0x2d0938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmControl_0x2d0938");
#endif

    switch (ctx->pc) {
        case 0x2d0960u: goto label_2d0960;
        case 0x2d0968u: goto label_2d0968;
        case 0x2d0998u: goto label_2d0998;
        case 0x2d09c8u: goto label_2d09c8;
        case 0x2d0a00u: goto label_2d0a00;
        case 0x2d0a1cu: goto label_2d0a1c;
        case 0x2d0a34u: goto label_2d0a34;
        case 0x2d0a9cu: goto label_2d0a9c;
        default: break;
    }

    ctx->pc = 0x2d0938u;

    // 0x2d0938: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d0938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d093c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d093cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d0940: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d0940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2d0944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d0944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d0948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d094c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d094cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0950: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d0950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d0954: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x2d0954u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d0958: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0958u;
    {
        const bool branch_taken_0x2d0958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0958u;
        // 0x2d095c: 0x3c130074  lui         $s3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0958) {
            ctx->pc = 0x2D0978u;
            goto label_2d0978;
        }
    }
    ctx->pc = 0x2D0960u;
label_2d0960:
    // 0x2d0960: 0xc0b318a  jal         func_2CC628
    ctx->pc = 0x2D0960u;
    SET_GPR_U32(ctx, 31, 0x2D0968u);
    ctx->pc = 0x2D0964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0960u;
    // 0x2d0964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC628u, 0x2D0960u, 0x2D0968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0968u;
label_2d0968:
    // 0x2d0968: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d0968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2d096c: 0x0  nop
    ctx->pc = 0x2d096cu;
    // NOP
    // 0x2d0970: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D0970u;
    {
        const bool branch_taken_0x2d0970 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0970) {
            ctx->pc = 0x2D0960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0960;
        }
    }
    ctx->pc = 0x2D0978u;
label_2d0978:
    // 0x2d0978: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x2d0978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2d097c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2d097cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2d0980: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d0980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d0984: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D0984u;
    {
        const bool branch_taken_0x2d0984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0984u;
        // 0x2d0988: 0x8e637a84  lw          $v1, 0x7A84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0984) {
            ctx->pc = 0x2D09CCu;
            goto label_2d09cc;
        }
    }
    ctx->pc = 0x2D098Cu;
    // 0x2d098c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2d098cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d0990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0994: 0x0  nop
    ctx->pc = 0x2d0994u;
    // NOP
label_2d0998:
    // 0x2d0998: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0998u;
    {
        const bool branch_taken_0x2d0998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0998u;
        // 0x2d099c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0998) {
            ctx->pc = 0x2D09B4u;
            goto label_2d09b4;
        }
    }
    ctx->pc = 0x2D09A0u;
    // 0x2d09a0: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x2d09a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x2d09a4: 0x0  nop
    ctx->pc = 0x2d09a4u;
    // NOP
    // 0x2d09a8: 0x5462fffb  bnel        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D09A8u;
    {
        const bool branch_taken_0x2d09a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d09a8) {
            ctx->pc = 0x2D09ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D09A8u;
            // 0x2d09ac: 0x8c840088  lw          $a0, 0x88($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0998;
        }
    }
    ctx->pc = 0x2D09B0u;
    // 0x2d09b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d09b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d09b4:
    // 0x2d09b4: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D09B4u;
    {
        const bool branch_taken_0x2d09b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D09B4u;
        // 0x2d09b8: 0x8e637a84  lw          $v1, 0x7A84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09b4) {
            ctx->pc = 0x2D09CCu;
            goto label_2d09cc;
        }
    }
    ctx->pc = 0x2D09BCu;
    // 0x2d09bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d09bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d09c0: 0xc0b4600  jal         func_2D1800
    ctx->pc = 0x2D09C0u;
    SET_GPR_U32(ctx, 31, 0x2D09C8u);
    ctx->pc = 0x2D09C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D09C0u;
    // 0x2d09c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1800u, 0x2D09C0u, 0x2D09C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09C8u;
label_2d09c8:
    // 0x2d09c8: 0x8e637a84  lw          $v1, 0x7A84($s3)
    ctx->pc = 0x2d09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31364)));
label_2d09cc:
    // 0x2d09cc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2d09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2d09d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d09d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d09d4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D09D4u;
    {
        const bool branch_taken_0x2d09d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d09d4) {
            ctx->pc = 0x2D09D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D09D4u;
            // 0x2d09d8: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D09F0u;
            goto label_2d09f0;
        }
    }
    ctx->pc = 0x2D09DCu;
    // 0x2d09dc: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2d09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x2d09e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d09e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d09e4: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D09E4u;
    {
        const bool branch_taken_0x2d09e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d09e4) {
            ctx->pc = 0x2D09E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D09E4u;
            // 0x2d09e8: 0x8e2300ac  lw          $v1, 0xAC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0A54u;
            goto label_2d0a54;
        }
    }
    ctx->pc = 0x2D09ECu;
    // 0x2d09ec: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x2d09ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2d09f0:
    // 0x2d09f0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D09F0u;
    {
        const bool branch_taken_0x2d09f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D09F0u;
        // 0x2d09f4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d09f0) {
            ctx->pc = 0x2D0A44u;
            goto label_2d0a44;
        }
    }
    ctx->pc = 0x2D09F8u;
    // 0x2d09f8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2d09f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d09fc: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2d09fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2d0a00:
    // 0x2d0a00: 0x5052000d  beql        $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2D0A00u;
    {
        const bool branch_taken_0x2d0a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2d0a00) {
            ctx->pc = 0x2D0A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0A00u;
            // 0x2d0a04: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0A38u;
            goto label_2d0a38;
        }
    }
    ctx->pc = 0x2D0A08u;
    // 0x2d0a08: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x2d0a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d0a0c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0A0Cu;
    {
        const bool branch_taken_0x2d0a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0a0c) {
            ctx->pc = 0x2D0A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0A0Cu;
            // 0x2d0a10: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0A38u;
            goto label_2d0a38;
        }
    }
    ctx->pc = 0x2D0A14u;
    // 0x2d0a14: 0xc0dce9e  jal         func_373A78
    ctx->pc = 0x2D0A14u;
    SET_GPR_U32(ctx, 31, 0x2D0A1Cu);
    ctx->pc = 0x2D0A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A14u;
    // 0x2d0a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A78u, 0x2D0A14u, 0x2D0A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A1Cu;
label_2d0a1c:
    // 0x2d0a1c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0A1Cu;
    {
        const bool branch_taken_0x2d0a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0a1c) {
            ctx->pc = 0x2D0A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0A1Cu;
            // 0x2d0a20: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0A38u;
            goto label_2d0a38;
        }
    }
    ctx->pc = 0x2D0A24u;
    // 0x2d0a24: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2d0a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2d0a28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d0a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0a2c: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2D0A2Cu;
    SET_GPR_U32(ctx, 31, 0x2D0A34u);
    ctx->pc = 0x2D0A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A2Cu;
    // 0x2d0a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2D0A2Cu, 0x2D0A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A34u;
label_2d0a34:
    // 0x2d0a34: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d0a34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d0a38:
    // 0x2d0a38: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2D0A38u;
    {
        const bool branch_taken_0x2d0a38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0a38) {
            ctx->pc = 0x2D0A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0A38u;
            // 0x2d0a3c: 0x8e0200b0  lw          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0a00;
        }
    }
    ctx->pc = 0x2D0A40u;
    // 0x2d0a40: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2d0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2d0a44:
    // 0x2d0a44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d0a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d0a48: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x2d0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
    // 0x2d0a4c: 0xae230138  sw          $v1, 0x138($s1)
    ctx->pc = 0x2d0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 3));
    // 0x2d0a50: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x2d0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_2d0a54:
    // 0x2d0a54: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2d0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2d0a58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d0a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d0a5c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D0A5Cu;
    {
        const bool branch_taken_0x2d0a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A5Cu;
        // 0x2d0a60: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a5c) {
            ctx->pc = 0x2D0A9Cu;
            goto label_2d0a9c;
        }
    }
    ctx->pc = 0x2D0A64u;
    // 0x2d0a64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d0a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d0a68: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D0A68u;
    {
        const bool branch_taken_0x2d0a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0A68u;
        // 0x2d0a6c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0a68) {
            ctx->pc = 0x2D0AA0u;
            goto label_2d0aa0;
        }
    }
    ctx->pc = 0x2D0A70u;
    // 0x2d0a70: 0x8e637a84  lw          $v1, 0x7A84($s3)
    ctx->pc = 0x2d0a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 31364)));
    // 0x2d0a74: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2d0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2d0a78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d0a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d0a7c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0A7Cu;
    {
        const bool branch_taken_0x2d0a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0a7c) {
            ctx->pc = 0x2D0A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0A7Cu;
            // 0x2d0a80: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0AA4u;
            goto label_2d0aa4;
        }
    }
    ctx->pc = 0x2D0A84u;
    // 0x2d0a84: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2d0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x2d0a88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d0a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d0a8c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0A8Cu;
    {
        const bool branch_taken_0x2d0a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0a8c) {
            ctx->pc = 0x2D0A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0A8Cu;
            // 0x2d0a90: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0AA4u;
            goto label_2d0aa4;
        }
    }
    ctx->pc = 0x2D0A94u;
    // 0x2d0a94: 0xc0b43a8  jal         func_2D0EA0
    ctx->pc = 0x2D0A94u;
    SET_GPR_U32(ctx, 31, 0x2D0A9Cu);
    ctx->pc = 0x2D0A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0A94u;
    // 0x2d0a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EA0u, 0x2D0A94u, 0x2D0A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A9Cu;
label_2d0a9c:
    // 0x2d0a9c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d0a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d0aa0:
    // 0x2d0aa0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d0aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d0aa4:
    // 0x2d0aa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d0aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0aa8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d0aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0aac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0AB0u;
        // 0x2d0ab4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0AB8u;
}
