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

// Function: func_002B4028
// Address: 0x2b4028 - 0x2b4188
void func_002B4028_0x2b4028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4028_0x2b4028");
#endif

    switch (ctx->pc) {
        case 0x2b40c8u: goto label_2b40c8;
        case 0x2b4130u: goto label_2b4130;
        case 0x2b415cu: goto label_2b415c;
        default: break;
    }

    ctx->pc = 0x2b4028u;

    // 0x2b4028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b402c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b402cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2b4030: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b4030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b4034: 0x244674a0  addiu       $a2, $v0, 0x74A0
    ctx->pc = 0x2b4034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2b4038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b4038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b403c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b403cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4044: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b4044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4048: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2b4048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b404c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x2b404cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x2b4050: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2b4050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2b4054: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x2b4054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x2b4058: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2b4058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b405c: 0x96050094  lhu         $a1, 0x94($s0)
    ctx->pc = 0x2b405cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2b4060: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x2b4060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x2b4064: 0x86070094  lh          $a3, 0x94($s0)
    ctx->pc = 0x2b4064u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2b4068: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2b4068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2b406c: 0xdcc201a0  ld          $v0, 0x1A0($a2)
    ctx->pc = 0x2b406cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 416)));
    // 0x2b4070: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b4070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b4074: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4074u;
    {
        const bool branch_taken_0x2b4074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4074u;
        // 0x2b4078: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4074) {
            ctx->pc = 0x2B4080u;
            goto label_2b4080;
        }
    }
    ctx->pc = 0x2B407Cu;
    // 0x2b407c: 0xa6020094  sh          $v0, 0x94($s0)
    ctx->pc = 0x2b407cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 2));
label_2b4080:
    // 0x2b4080: 0xdcc201a0  ld          $v0, 0x1A0($a2)
    ctx->pc = 0x2b4080u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 416)));
    // 0x2b4084: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2b4084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2b4088: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x2b4088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x2b408c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2b408cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2b4090: 0x31ab8  dsll        $v1, $v1, 10
    ctx->pc = 0x2b4090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 10);
    // 0x2b4094: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b4094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b4098: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4098u;
    {
        const bool branch_taken_0x2b4098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4098) {
            ctx->pc = 0x2B409Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4098u;
            // 0x2b409c: 0x86020094  lh          $v0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B40B0u;
            goto label_2b40b0;
        }
    }
    ctx->pc = 0x2B40A0u;
    // 0x2b40a0: 0x96020094  lhu         $v0, 0x94($s0)
    ctx->pc = 0x2b40a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2b40a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b40a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b40a8: 0xa6020094  sh          $v0, 0x94($s0)
    ctx->pc = 0x2b40a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b40ac: 0x86020094  lh          $v0, 0x94($s0)
    ctx->pc = 0x2b40acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
label_2b40b0:
    // 0x2b40b0: 0x10470005  beq         $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B40B0u;
    {
        const bool branch_taken_0x2b40b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40B0u;
        // 0x2b40b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40b0) {
            ctx->pc = 0x2B40C8u;
            goto label_2b40c8;
        }
    }
    ctx->pc = 0x2B40B8u;
    // 0x2b40b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b40b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b40bc: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x2b40bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x2b40c0: 0xc0ad1bc  jal         func_2B46F0
    ctx->pc = 0x2B40C0u;
    SET_GPR_U32(ctx, 31, 0x2B40C8u);
    ctx->pc = 0x2B40C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B40C0u;
    // 0x2b40c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B46F0u, 0x2B40C0u, 0x2B40C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B40C8u;
label_2b40c8:
    // 0x2b40c8: 0x86030094  lh          $v1, 0x94($s0)
    ctx->pc = 0x2b40c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2b40cc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B40CCu;
    {
        const bool branch_taken_0x2b40cc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2B40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40CCu;
        // 0x2b40d0: 0x96040094  lhu         $a0, 0x94($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40cc) {
            ctx->pc = 0x2B40E0u;
            goto label_2b40e0;
        }
    }
    ctx->pc = 0x2B40D4u;
    // 0x2b40d4: 0x96020096  lhu         $v0, 0x96($s0)
    ctx->pc = 0x2b40d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2b40d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B40D8u;
    {
        const bool branch_taken_0x2b40d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B40DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40D8u;
        // 0x2b40dc: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40d8) {
            ctx->pc = 0x2B40F8u;
            goto label_2b40f8;
        }
    }
    ctx->pc = 0x2B40E0u;
label_2b40e0:
    // 0x2b40e0: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x2b40e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x2b40e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b40e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2b40e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b40ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B40ECu;
    {
        const bool branch_taken_0x2b40ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B40ECu;
        // 0x2b40f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b40ec) {
            ctx->pc = 0x2B40F8u;
            goto label_2b40f8;
        }
    }
    ctx->pc = 0x2B40F4u;
    // 0x2b40f4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2b40f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b40f8:
    // 0x2b40f8: 0xa6080094  sh          $t0, 0x94($s0)
    ctx->pc = 0x2b40f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 8));
    // 0x2b40fc: 0x262274a0  addiu       $v0, $s1, 0x74A0
    ctx->pc = 0x2b40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x2b4100: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2b4100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2b4104: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x2b4104u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x2b4108: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b4108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b410c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B410Cu;
    {
        const bool branch_taken_0x2b410c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B410Cu;
        // 0x2b4110: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b410c) {
            ctx->pc = 0x2B4170u;
            goto label_2b4170;
        }
    }
    ctx->pc = 0x2B4114u;
    // 0x2b4114: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x2b4114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x2b4118: 0x8c4323a4  lw          $v1, 0x23A4($v0)
    ctx->pc = 0x2b4118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    // 0x2b411c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b411cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b4120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4124: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b4124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4128: 0xc0ad1bc  jal         func_2B46F0
    ctx->pc = 0x2B4128u;
    SET_GPR_U32(ctx, 31, 0x2B4130u);
    ctx->pc = 0x2B412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4128u;
    // 0x2b412c: 0xa4680bec  sh          $t0, 0xBEC($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 3052), (uint16_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B46F0u, 0x2B4128u, 0x2B4130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4130u;
label_2b4130:
    // 0x2b4130: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b4130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b4134: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2b4134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b4138: 0x2406ffdf  addiu       $a2, $zero, -0x21
    ctx->pc = 0x2b4138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x2b413c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b413cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4140: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b4140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b4144: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x2b4144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2b4148: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2b4148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2b414c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x2b414cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2b4150: 0x2606008c  addiu       $a2, $s0, 0x8C
    ctx->pc = 0x2b4150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x2b4154: 0xc0ad1da  jal         func_2B4768
    ctx->pc = 0x2B4154u;
    SET_GPR_U32(ctx, 31, 0x2B415Cu);
    ctx->pc = 0x2B4158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4154u;
    // 0x2b4158: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4768u, 0x2B4154u, 0x2B415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B415Cu;
label_2b415c:
    // 0x2b415c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4160: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x2b4160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4164: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2b4164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b4168: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x2b4168u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b416c: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x2b416cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
label_2b4170:
    // 0x2b4170: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b4170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b4174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b417c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B417Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B417Cu;
        // 0x2b4180: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B417Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4184u;
    // 0x2b4184: 0x0  nop
    ctx->pc = 0x2b4184u;
    // NOP
    ctx->pc = 0x2b4188u;
}
