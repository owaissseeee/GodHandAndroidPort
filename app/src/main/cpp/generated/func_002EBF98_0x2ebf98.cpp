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

// Function: func_002EBF98
// Address: 0x2ebf98 - 0x2ec218
void func_002EBF98_0x2ebf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EBF98_0x2ebf98");
#endif

    switch (ctx->pc) {
        case 0x2ebfe8u: goto label_2ebfe8;
        case 0x2ec000u: goto label_2ec000;
        case 0x2ec040u: goto label_2ec040;
        case 0x2ec1b4u: goto label_2ec1b4;
        case 0x2ec1c0u: goto label_2ec1c0;
        case 0x2ec1d0u: goto label_2ec1d0;
        default: break;
    }

    ctx->pc = 0x2ebf98u;

    // 0x2ebf98: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ebf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ebf9c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2ebf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2ebfa0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2ebfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2ebfa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ebfa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebfa8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2ebfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2ebfac: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ebfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ebfb0: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2ebfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2ebfb4: 0x9043018d  lbu         $v1, 0x18D($v0)
    ctx->pc = 0x2ebfb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 397)));
    // 0x2ebfb8: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x2ebfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2ebfbc: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x2ebfbcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x2ebfc0: 0x28820079  slti        $v0, $a0, 0x79
    ctx->pc = 0x2ebfc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x2ebfc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBFC4u;
    {
        const bool branch_taken_0x2ebfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFC4u;
        // 0x2ebfc8: 0xa2030249  sb          $v1, 0x249($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 585), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebfc4) {
            ctx->pc = 0x2EBFD4u;
            goto label_2ebfd4;
        }
    }
    ctx->pc = 0x2EBFCCu;
    // 0x2ebfcc: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBFCCu;
    {
        const bool branch_taken_0x2ebfcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebfcc) {
            ctx->pc = 0x2EBFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBFCCu;
            // 0x2ebfd0: 0x82060249  lb          $a2, 0x249($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBFE0u;
            goto label_2ebfe0;
        }
    }
    ctx->pc = 0x2EBFD4u;
label_2ebfd4:
    // 0x2ebfd4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2ebfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ebfd8: 0xa2020249  sb          $v0, 0x249($s0)
    ctx->pc = 0x2ebfd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 585), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ebfdc: 0x82060249  lb          $a2, 0x249($s0)
    ctx->pc = 0x2ebfdcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
label_2ebfe0:
    // 0x2ebfe0: 0xc0baf44  jal         func_2EBD10
    ctx->pc = 0x2EBFE0u;
    SET_GPR_U32(ctx, 31, 0x2EBFE8u);
    ctx->pc = 0x2EBFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBFE0u;
    // 0x2ebfe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBD10u, 0x2EBFE0u, 0x2EBFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBFE8u;
label_2ebfe8:
    // 0x2ebfe8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBFE8u;
    {
        const bool branch_taken_0x2ebfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFE8u;
        // 0x2ebfec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebfe8) {
            ctx->pc = 0x2EBFF8u;
            goto label_2ebff8;
        }
    }
    ctx->pc = 0x2EBFF0u;
    // 0x2ebff0: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2EBFF0u;
    {
        const bool branch_taken_0x2ebff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBFF0u;
        // 0x2ebff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebff0) {
            ctx->pc = 0x2EC1FCu;
            goto label_2ec1fc;
        }
    }
    ctx->pc = 0x2EBFF8u;
label_2ebff8:
    // 0x2ebff8: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2EBFF8u;
    SET_GPR_U32(ctx, 31, 0x2EC000u);
    ctx->pc = 0x2EBFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBFF8u;
    // 0x2ebffc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2EBFF8u, 0x2EC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC000u;
label_2ec000:
    // 0x2ec000: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2ec000u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2ec004: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2ec004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ec008: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2ec008u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ec00c: 0x18400067  blez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2EC00Cu;
    {
        const bool branch_taken_0x2ec00c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2EC010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC00Cu;
        // 0x2ec010: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec00c) {
            ctx->pc = 0x2EC1ACu;
            goto label_2ec1ac;
        }
    }
    ctx->pc = 0x2EC014u;
    // 0x2ec014: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x2ec014u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2ec018: 0x94fb8  dsll        $t1, $t1, 30
    ctx->pc = 0x2ec018u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 30);
    // 0x2ec01c: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x2ec01cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x2ec020: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x2ec020u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x2ec024: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x2ec024u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x2ec028: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ec028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec02c: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x2ec02cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x2ec030: 0x3c0a0800  lui         $t2, 0x800
    ctx->pc = 0x2ec030u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)2048 << 16));
    // 0x2ec034: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ec034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec038: 0x8e0302bc  lw          $v1, 0x2BC($s0)
    ctx->pc = 0x2ec038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x2ec03c: 0x0  nop
    ctx->pc = 0x2ec03cu;
    // NOP
label_2ec040:
    // 0x2ec040: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2ec040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2ec044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec048: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC048u;
    {
        const bool branch_taken_0x2ec048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2EC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC048u;
        // 0x2ec04c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec048) {
            ctx->pc = 0x2EC064u;
            goto label_2ec064;
        }
    }
    ctx->pc = 0x2EC050u;
    // 0x2ec050: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ec050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2ec054: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2ec054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec058: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ec058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ec05c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ec05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec060: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ec060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ec064:
    // 0x2ec064: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x2ec064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2ec068: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ec068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ec06c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ec06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ec070: 0xfc690060  sd          $t1, 0x60($v1)
    ctx->pc = 0x2ec070u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 9));
    // 0x2ec074: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2ec074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2ec078: 0xfc480068  sd          $t0, 0x68($v0)
    ctx->pc = 0x2ec078u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 8));
    // 0x2ec07c: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2ec07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2ec080: 0xfc690060  sd          $t1, 0x60($v1)
    ctx->pc = 0x2ec080u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 9));
    // 0x2ec084: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2ec084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2ec088: 0xfc480068  sd          $t0, 0x68($v0)
    ctx->pc = 0x2ec088u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 8));
    // 0x2ec08c: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x2ec08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2ec090: 0x6b1024  and         $v0, $v1, $t3
    ctx->pc = 0x2ec090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x2ec094: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC094u;
    {
        const bool branch_taken_0x2ec094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC094u;
        // 0x2ec098: 0x6a1024  and         $v0, $v1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec094) {
            ctx->pc = 0x2EC0A4u;
            goto label_2ec0a4;
        }
    }
    ctx->pc = 0x2EC09Cu;
    // 0x2ec09c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ec09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ec0a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ec0a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2ec0a4:
    // 0x2ec0a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ec0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ec0a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ec0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec0ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC0ACu;
    {
        const bool branch_taken_0x2ec0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC0ACu;
        // 0x2ec0b0: 0x8e0202c4  lw          $v0, 0x2C4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec0ac) {
            ctx->pc = 0x2EC0BCu;
            goto label_2ec0bc;
        }
    }
    ctx->pc = 0x2EC0B4u;
    // 0x2ec0b4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ec0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ec0b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ec0b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ec0bc:
    // 0x2ec0bc: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x2ec0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2ec0c0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2ec0c0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec0c4: 0x0  nop
    ctx->pc = 0x2ec0c4u;
    // NOP
    // 0x2ec0c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ec0c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ec0cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ec0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ec0d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ec0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ec0d4: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x2ec0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x2ec0d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec0dc: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2ec0dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2ec0e0: 0xc60202d4  lwc1        $f2, 0x2D4($s0)
    ctx->pc = 0x2ec0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec0e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ec0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ec0e8: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x2ec0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2ec0ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec0f0: 0x0  nop
    ctx->pc = 0x2ec0f0u;
    // NOP
    // 0x2ec0f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ec0f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ec0f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ec0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ec0fc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ec0fcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2ec100: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ec100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ec104: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2ec104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2ec108: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2ec108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2ec10c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ec10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ec110: 0xfc4700a8  sd          $a3, 0xA8($v0)
    ctx->pc = 0x2ec110u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 7));
    // 0x2ec114: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x2ec114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2ec118: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ec118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ec11c: 0xe46300c0  swc1        $f3, 0xC0($v1)
    ctx->pc = 0x2ec11cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x2ec120: 0x8e0402c4  lw          $a0, 0x2C4($s0)
    ctx->pc = 0x2ec120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2ec124: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ec124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ec128: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x2ec128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec12c: 0xe48000c4  swc1        $f0, 0xC4($a0)
    ctx->pc = 0x2ec12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 196), bits); }
    // 0x2ec130: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2ec130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2ec134: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ec134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ec138: 0xfc4700c8  sd          $a3, 0xC8($v0)
    ctx->pc = 0x2ec138u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 200), GPR_U64(ctx, 7));
    // 0x2ec13c: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2ec13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2ec140: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ec140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ec144: 0xac6000a0  sw          $zero, 0xA0($v1)
    ctx->pc = 0x2ec144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
    // 0x2ec148: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2ec148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2ec14c: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2ec14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2ec150: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ec150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ec154: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x2ec154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec158: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ec158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ec15c: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2ec15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2ec160: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2ec160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2ec164: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ec164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ec168: 0xfc4700a8  sd          $a3, 0xA8($v0)
    ctx->pc = 0x2ec168u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 7));
    // 0x2ec16c: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2ec16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2ec170: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ec170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ec174: 0xe46300c0  swc1        $f3, 0xC0($v1)
    ctx->pc = 0x2ec174u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x2ec178: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2ec178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2ec17c: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x2ec17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2ec180: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ec180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ec184: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x2ec184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec188: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ec188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ec18c: 0xe46000c4  swc1        $f0, 0xC4($v1)
    ctx->pc = 0x2ec18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 196), bits); }
    // 0x2ec190: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x2ec190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x2ec194: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ec194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ec198: 0xfc4700c8  sd          $a3, 0xC8($v0)
    ctx->pc = 0x2ec198u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 200), GPR_U64(ctx, 7));
    // 0x2ec19c: 0x82030249  lb          $v1, 0x249($s0)
    ctx->pc = 0x2ec19cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2ec1a0: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2ec1a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec1a4: 0x5460ffa6  bnel        $v1, $zero, . + 4 + (-0x5A << 2)
    ctx->pc = 0x2EC1A4u;
    {
        const bool branch_taken_0x2ec1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec1a4) {
            ctx->pc = 0x2EC1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC1A4u;
            // 0x2ec1a8: 0x8e0302bc  lw          $v1, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec040;
        }
    }
    ctx->pc = 0x2EC1ACu;
label_2ec1ac:
    // 0x2ec1ac: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2EC1ACu;
    SET_GPR_U32(ctx, 31, 0x2EC1B4u);
    ctx->pc = 0x2EC1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1ACu;
    // 0x2ec1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2EC1ACu, 0x2EC1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC1B4u;
label_2ec1b4:
    // 0x2ec1b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ec1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1b8: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EC1B8u;
    SET_GPR_U32(ctx, 31, 0x2EC1C0u);
    ctx->pc = 0x2EC1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1B8u;
    // 0x2ec1bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EC1B8u, 0x2EC1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC1C0u;
label_2ec1c0:
    // 0x2ec1c0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2ec1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ec1c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1c8: 0xc051f10  jal         func_147C40
    ctx->pc = 0x2EC1C8u;
    SET_GPR_U32(ctx, 31, 0x2EC1D0u);
    ctx->pc = 0x2EC1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1C8u;
    // 0x2ec1cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x2EC1C8u, 0x2EC1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC1D0u;
label_2ec1d0:
    // 0x2ec1d0: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2ec1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2ec1d4: 0x9043018c  lbu         $v1, 0x18C($v0)
    ctx->pc = 0x2ec1d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x2ec1d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ec1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ec1dc: 0xae0302e4  sw          $v1, 0x2E4($s0)
    ctx->pc = 0x2ec1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 3));
    // 0x2ec1e0: 0x8044018e  lb          $a0, 0x18E($v0)
    ctx->pc = 0x2ec1e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 398)));
    // 0x2ec1e4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC1E4u;
    {
        const bool branch_taken_0x2ec1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC1E4u;
        // 0x2ec1e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec1e4) {
            ctx->pc = 0x2EC1FCu;
            goto label_2ec1fc;
        }
    }
    ctx->pc = 0x2EC1ECu;
    // 0x2ec1ec: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x2ec1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x2ec1f0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2ec1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2ec1f4: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x2ec1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x2ec1f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec1fc:
    // 0x2ec1fc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2ec1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ec200: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2ec200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ec204: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2ec204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ec208: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ec208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ec20c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC20Cu;
        // 0x2ec210: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC214u;
    // 0x2ec214: 0x0  nop
    ctx->pc = 0x2ec214u;
    // NOP
    ctx->pc = 0x2ec218u;
}
