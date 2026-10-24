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

// Function: func_0016BCE0
// Address: 0x16bce0 - 0x16c1e8
void func_0016BCE0_0x16bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016BCE0_0x16bce0");
#endif

    switch (ctx->pc) {
        case 0x16bd08u: goto label_16bd08;
        default: break;
    }

    ctx->pc = 0x16bce0u;

    // 0x16bce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16bce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16bce4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x16bce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x16bce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16bcec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16bcecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bcf0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16bcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16bcf4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16bcf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bcfc: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x16bcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x16bd00: 0xc0b2402  jal         func_2C9008
    ctx->pc = 0x16BD00u;
    SET_GPR_U32(ctx, 31, 0x16BD08u);
    ctx->pc = 0x16BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BD00u;
    // 0x16bd04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9008u, 0x16BD00u, 0x16BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BD08u;
label_16bd08:
    // 0x16bd08: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x16bd08u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd0c: 0x51800132  beql        $t4, $zero, . + 4 + (0x132 << 2)
    ctx->pc = 0x16BD0Cu;
    {
        const bool branch_taken_0x16bd0c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd0c) {
            ctx->pc = 0x16BD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BD0Cu;
            // 0x16bd10: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C1D8u;
            goto label_16c1d8;
        }
    }
    ctx->pc = 0x16BD14u;
    // 0x16bd14: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x16bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x16bd18: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x16bd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x16bd1c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16BD1Cu;
    {
        const bool branch_taken_0x16bd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD1Cu;
        // 0x16bd20: 0x240530c7  addiu       $a1, $zero, 0x30C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12487));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd1c) {
            ctx->pc = 0x16BD60u;
            goto label_16bd60;
        }
    }
    ctx->pc = 0x16BD24u;
    // 0x16bd24: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x16bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x16bd28: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x16bd28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x16bd2c: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x16bd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16bd30: 0xa4450090  sh          $a1, 0x90($v0)
    ctx->pc = 0x16bd30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x16bd34: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x16bd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x16bd38: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x16bd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x16bd3c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x16bd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bd40: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x16bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x16bd44: 0xa4650090  sh          $a1, 0x90($v1)
    ctx->pc = 0x16bd44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x16bd48: 0x8cc27a0c  lw          $v0, 0x7A0C($a2)
    ctx->pc = 0x16bd48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x16bd4c: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x16bd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x16bd50: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x16bd50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16bd54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16bd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16bd58: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x16bd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bd5c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x16bd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
label_16bd60:
    // 0x16bd60: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x16bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x16bd64: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x16bd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x16bd68: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x16BD68u;
    {
        const bool branch_taken_0x16bd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD68u;
        // 0x16bd6c: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd68) {
            ctx->pc = 0x16BDF8u;
            goto label_16bdf8;
        }
    }
    ctx->pc = 0x16BD70u;
    // 0x16bd70: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x16BD70u;
    {
        const bool branch_taken_0x16bd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD70u;
        // 0x16bd74: 0x2605000f  addiu       $a1, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd70) {
            ctx->pc = 0x16BDF8u;
            goto label_16bdf8;
        }
    }
    ctx->pc = 0x16BD78u;
    // 0x16bd78: 0x26280080  addiu       $t0, $s1, 0x80
    ctx->pc = 0x16bd78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16bd7c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16bd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16bd80: 0x240930c8  addiu       $t1, $zero, 0x30C8
    ctx->pc = 0x16bd80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12488));
    // 0x16bd84: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x16bd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x16bd88: 0x26020011  addiu       $v0, $s0, 0x11
    ctx->pc = 0x16bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x16bd8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16bd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bd90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16bd94: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x16bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x16bd98: 0x3c0a0074  lui         $t2, 0x74
    ctx->pc = 0x16bd98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)116 << 16));
    // 0x16bd9c: 0xa4690090  sh          $t1, 0x90($v1)
    ctx->pc = 0x16bd9cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16bda0: 0x240b0028  addiu       $t3, $zero, 0x28
    ctx->pc = 0x16bda0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16bda4: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x16bda4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x16bda8: 0x26030029  addiu       $v1, $s0, 0x29
    ctx->pc = 0x16bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 41));
    // 0x16bdac: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x16bdacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bdb0: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x16bdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x16bdb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16bdb8: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x16bdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x16bdbc: 0xa4e90090  sh          $t1, 0x90($a3)
    ctx->pc = 0x16bdbcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16bdc0: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x16bdc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x16bdc4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x16bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16bdc8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16bdc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x16bdcc: 0x8d427a0c  lw          $v0, 0x7A0C($t2)
    ctx->pc = 0x16bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 31244)));
    // 0x16bdd0: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x16bdd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16bdd4: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x16bdd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bdd8: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x16bdd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16bddc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16bddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16bde0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x16bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bde4: 0xe4e00040  swc1        $f0, 0x40($a3)
    ctx->pc = 0x16bde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 64), bits); }
    // 0x16bde8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x16bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16bdec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16bdf0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16bdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16bdf4: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_16bdf8:
    // 0x16bdf8: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x16bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x16bdfc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x16bdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x16be00: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16BE00u;
    {
        const bool branch_taken_0x16be00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE00u;
        // 0x16be04: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be00) {
            ctx->pc = 0x16BE6Cu;
            goto label_16be6c;
        }
    }
    ctx->pc = 0x16BE08u;
    // 0x16be08: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16BE08u;
    {
        const bool branch_taken_0x16be08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE08u;
        // 0x16be0c: 0x2605000f  addiu       $a1, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be08) {
            ctx->pc = 0x16BE6Cu;
            goto label_16be6c;
        }
    }
    ctx->pc = 0x16BE10u;
    // 0x16be10: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x16be10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16be14: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16be14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16be18: 0x240930c9  addiu       $t1, $zero, 0x30C9
    ctx->pc = 0x16be18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12489));
    // 0x16be1c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x16be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16be20: 0x26020011  addiu       $v0, $s0, 0x11
    ctx->pc = 0x16be20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x16be24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16be24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16be28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16be28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16be2c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16be30: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x16be30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x16be34: 0xa4690090  sh          $t1, 0x90($v1)
    ctx->pc = 0x16be34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16be38: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16be38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16be3c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16be3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16be40: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x16be40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16be44: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x16be44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16be48: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16be48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16be4c: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16be4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16be50: 0xa4c90090  sh          $t1, 0x90($a2)
    ctx->pc = 0x16be50u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16be54: 0x8ce27a0c  lw          $v0, 0x7A0C($a3)
    ctx->pc = 0x16be54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x16be58: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16be58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16be5c: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x16be5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16be60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16be60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16be64: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x16be64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16be68: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x16be68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_16be6c:
    // 0x16be6c: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x16be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x16be70: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x16be70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x16be74: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16BE74u;
    {
        const bool branch_taken_0x16be74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE74u;
        // 0x16be78: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be74) {
            ctx->pc = 0x16BEE0u;
            goto label_16bee0;
        }
    }
    ctx->pc = 0x16BE7Cu;
    // 0x16be7c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16BE7Cu;
    {
        const bool branch_taken_0x16be7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE7Cu;
        // 0x16be80: 0x2605000f  addiu       $a1, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16be7c) {
            ctx->pc = 0x16BEE0u;
            goto label_16bee0;
        }
    }
    ctx->pc = 0x16BE84u;
    // 0x16be84: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x16be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16be88: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16be88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16be8c: 0x240930ca  addiu       $t1, $zero, 0x30CA
    ctx->pc = 0x16be8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12490));
    // 0x16be90: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x16be90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16be94: 0x26020011  addiu       $v0, $s0, 0x11
    ctx->pc = 0x16be94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x16be98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16be98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16be9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16bea0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16bea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16bea4: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x16bea4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x16bea8: 0xa4690090  sh          $t1, 0x90($v1)
    ctx->pc = 0x16bea8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16beac: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16beacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16beb0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16beb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16beb4: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x16beb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16beb8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x16beb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16bebc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16bec0: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16bec4: 0xa4c90090  sh          $t1, 0x90($a2)
    ctx->pc = 0x16bec4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16bec8: 0x8ce27a0c  lw          $v0, 0x7A0C($a3)
    ctx->pc = 0x16bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x16becc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16beccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bed0: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x16bed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16bed4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bed8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x16bed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bedc: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x16bedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_16bee0:
    // 0x16bee0: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x16bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x16bee4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x16bee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x16bee8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16BEE8u;
    {
        const bool branch_taken_0x16bee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEE8u;
        // 0x16beec: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bee8) {
            ctx->pc = 0x16BF50u;
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BEF0u;
    // 0x16bef0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16BEF0u;
    {
        const bool branch_taken_0x16bef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BEF0u;
        // 0x16bef4: 0x2605000f  addiu       $a1, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bef0) {
            ctx->pc = 0x16BF50u;
            goto label_16bf50;
        }
    }
    ctx->pc = 0x16BEF8u;
    // 0x16bef8: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x16bef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16befc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16befcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16bf00: 0x240830cb  addiu       $t0, $zero, 0x30CB
    ctx->pc = 0x16bf00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12491));
    // 0x16bf04: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x16bf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16bf08: 0x26020011  addiu       $v0, $s0, 0x11
    ctx->pc = 0x16bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x16bf0c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bf10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16bf14: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x16bf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16bf18: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x16bf18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x16bf1c: 0xa4880090  sh          $t0, 0x90($a0)
    ctx->pc = 0x16bf1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 8));
    // 0x16bf20: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16bf24: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16bf24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16bf28: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16bf2c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x16bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16bf30: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16bf34: 0xa4880090  sh          $t0, 0x90($a0)
    ctx->pc = 0x16bf34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 8));
    // 0x16bf38: 0x8ce27a0c  lw          $v0, 0x7A0C($a3)
    ctx->pc = 0x16bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x16bf3c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bf40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16bf44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bf48: 0xc46000c8  lwc1        $f0, 0xC8($v1)
    ctx->pc = 0x16bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bf4c: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x16bf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_16bf50:
    // 0x16bf50: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x16bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x16bf54: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x16bf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x16bf58: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16BF58u;
    {
        const bool branch_taken_0x16bf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF58u;
        // 0x16bf5c: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf58) {
            ctx->pc = 0x16BFC4u;
            goto label_16bfc4;
        }
    }
    ctx->pc = 0x16BF60u;
    // 0x16bf60: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16BF60u;
    {
        const bool branch_taken_0x16bf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF60u;
        // 0x16bf64: 0x2605000f  addiu       $a1, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf60) {
            ctx->pc = 0x16BFC4u;
            goto label_16bfc4;
        }
    }
    ctx->pc = 0x16BF68u;
    // 0x16bf68: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x16bf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16bf6c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16bf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16bf70: 0x240930cc  addiu       $t1, $zero, 0x30CC
    ctx->pc = 0x16bf70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12492));
    // 0x16bf74: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x16bf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16bf78: 0x26020011  addiu       $v0, $s0, 0x11
    ctx->pc = 0x16bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x16bf7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bf80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16bf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16bf84: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16bf88: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x16bf88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x16bf8c: 0xa4690090  sh          $t1, 0x90($v1)
    ctx->pc = 0x16bf8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16bf90: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16bf94: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16bf94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16bf98: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x16bf98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16bf9c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x16bf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16bfa0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16bfa4: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16bfa8: 0xa4c90090  sh          $t1, 0x90($a2)
    ctx->pc = 0x16bfa8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16bfac: 0x8ce27a0c  lw          $v0, 0x7A0C($a3)
    ctx->pc = 0x16bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x16bfb0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16bfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bfb4: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x16bfb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16bfb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16bfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16bfbc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x16bfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bfc0: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x16bfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_16bfc4:
    // 0x16bfc4: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x16bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x16bfc8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x16bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x16bfcc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16BFCCu;
    {
        const bool branch_taken_0x16bfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFCCu;
        // 0x16bfd0: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfcc) {
            ctx->pc = 0x16C038u;
            goto label_16c038;
        }
    }
    ctx->pc = 0x16BFD4u;
    // 0x16bfd4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16BFD4u;
    {
        const bool branch_taken_0x16bfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFD4u;
        // 0x16bfd8: 0x2605000f  addiu       $a1, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfd4) {
            ctx->pc = 0x16C038u;
            goto label_16c038;
        }
    }
    ctx->pc = 0x16BFDCu;
    // 0x16bfdc: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x16bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16bfe0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16bfe4: 0x240930cd  addiu       $t1, $zero, 0x30CD
    ctx->pc = 0x16bfe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12493));
    // 0x16bfe8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x16bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16bfec: 0x26020011  addiu       $v0, $s0, 0x11
    ctx->pc = 0x16bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x16bff0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16bff4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16bff8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16bffc: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x16bffcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x16c000: 0xa4690090  sh          $t1, 0x90($v1)
    ctx->pc = 0x16c000u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16c004: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16c004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16c008: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16c008u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16c00c: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x16c00cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16c010: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x16c010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16c014: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16c014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16c018: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16c018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16c01c: 0xa4c90090  sh          $t1, 0x90($a2)
    ctx->pc = 0x16c01cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16c020: 0x8ce27a0c  lw          $v0, 0x7A0C($a3)
    ctx->pc = 0x16c020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x16c024: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16c024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16c028: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x16c028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16c02c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c030: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x16c030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c034: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x16c034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_16c038:
    // 0x16c038: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x16c038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x16c03c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x16c03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x16c040: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16C040u;
    {
        const bool branch_taken_0x16c040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C040u;
        // 0x16c044: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c040) {
            ctx->pc = 0x16C0ACu;
            goto label_16c0ac;
        }
    }
    ctx->pc = 0x16C048u;
    // 0x16c048: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16C048u;
    {
        const bool branch_taken_0x16c048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C048u;
        // 0x16c04c: 0x2605000f  addiu       $a1, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c048) {
            ctx->pc = 0x16C0ACu;
            goto label_16c0ac;
        }
    }
    ctx->pc = 0x16C050u;
    // 0x16c050: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x16c050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16c054: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16c054u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16c058: 0x240930ce  addiu       $t1, $zero, 0x30CE
    ctx->pc = 0x16c058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12494));
    // 0x16c05c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x16c05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16c060: 0x26020011  addiu       $v0, $s0, 0x11
    ctx->pc = 0x16c060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x16c064: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16c064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16c068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16c068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16c06c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c070: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x16c070u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x16c074: 0xa4690090  sh          $t1, 0x90($v1)
    ctx->pc = 0x16c074u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16c078: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16c078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16c07c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16c07cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16c080: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x16c080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16c084: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x16c084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16c088: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16c088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16c08c: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16c090: 0xa4c90090  sh          $t1, 0x90($a2)
    ctx->pc = 0x16c090u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16c094: 0x8ce27a0c  lw          $v0, 0x7A0C($a3)
    ctx->pc = 0x16c094u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x16c098: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16c098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16c09c: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x16c09cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16c0a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c0a4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x16c0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c0a8: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x16c0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_16c0ac:
    // 0x16c0ac: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x16c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x16c0b0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x16c0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x16c0b4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16C0B4u;
    {
        const bool branch_taken_0x16c0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0B4u;
        // 0x16c0b8: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c0b4) {
            ctx->pc = 0x16C120u;
            goto label_16c120;
        }
    }
    ctx->pc = 0x16C0BCu;
    // 0x16c0bc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16C0BCu;
    {
        const bool branch_taken_0x16c0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C0BCu;
        // 0x16c0c0: 0x2605000f  addiu       $a1, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c0bc) {
            ctx->pc = 0x16C120u;
            goto label_16c120;
        }
    }
    ctx->pc = 0x16C0C4u;
    // 0x16c0c4: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x16c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16c0c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16c0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16c0cc: 0x240930cf  addiu       $t1, $zero, 0x30CF
    ctx->pc = 0x16c0ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12495));
    // 0x16c0d0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x16c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16c0d4: 0x26020011  addiu       $v0, $s0, 0x11
    ctx->pc = 0x16c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x16c0d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16c0dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16c0e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16c0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c0e4: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x16c0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x16c0e8: 0xa4690090  sh          $t1, 0x90($v1)
    ctx->pc = 0x16c0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16c0ec: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16c0f0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16c0f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16c0f4: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x16c0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16c0f8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x16c0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16c0fc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16c100: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16c100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16c104: 0xa4c90090  sh          $t1, 0x90($a2)
    ctx->pc = 0x16c104u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16c108: 0x8ce27a0c  lw          $v0, 0x7A0C($a3)
    ctx->pc = 0x16c108u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x16c10c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16c110: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x16c110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16c114: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16c114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16c118: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x16c118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c11c: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x16c11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_16c120:
    // 0x16c120: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x16c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x16c124: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x16c124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x16c128: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16C128u;
    {
        const bool branch_taken_0x16c128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C128u;
        // 0x16c12c: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c128) {
            ctx->pc = 0x16C194u;
            goto label_16c194;
        }
    }
    ctx->pc = 0x16C130u;
    // 0x16c130: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16C130u;
    {
        const bool branch_taken_0x16c130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C130u;
        // 0x16c134: 0x2605000f  addiu       $a1, $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c130) {
            ctx->pc = 0x16C194u;
            goto label_16c194;
        }
    }
    ctx->pc = 0x16C138u;
    // 0x16c138: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x16c138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16c13c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16c13cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16c140: 0x240930c6  addiu       $t1, $zero, 0x30C6
    ctx->pc = 0x16c140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12486));
    // 0x16c144: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x16c144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16c148: 0x26020011  addiu       $v0, $s0, 0x11
    ctx->pc = 0x16c148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x16c14c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16c150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16c150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16c154: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16c154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16c158: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x16c158u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x16c15c: 0xa4690090  sh          $t1, 0x90($v1)
    ctx->pc = 0x16c15cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16c160: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16c160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16c164: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16c164u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16c168: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x16c168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16c16c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x16c16cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16c170: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16c170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16c174: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16c174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16c178: 0xa4c90090  sh          $t1, 0x90($a2)
    ctx->pc = 0x16c178u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x16c17c: 0x8ce27a0c  lw          $v0, 0x7A0C($a3)
    ctx->pc = 0x16c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x16c180: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16c180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16c184: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x16c184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16c188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16c188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16c18c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16c18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c190: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x16c190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_16c194:
    // 0x16c194: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16C194u;
    {
        const bool branch_taken_0x16c194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C194u;
        // 0x16c198: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c194) {
            ctx->pc = 0x16C1B8u;
            goto label_16c1b8;
        }
    }
    ctx->pc = 0x16C19Cu;
    // 0x16c19c: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x16c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x16c1a0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x16c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x16c1a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x16c1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16c1a8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16c1ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16c1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16c1b0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16c1b4: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x16c1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_16c1b8:
    // 0x16c1b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16C1B8u;
    {
        const bool branch_taken_0x16c1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1B8u;
        // 0x16c1bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1b8) {
            ctx->pc = 0x16C1D8u;
            goto label_16c1d8;
        }
    }
    ctx->pc = 0x16C1C0u;
    // 0x16c1c0: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x16c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x16c1c4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x16c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x16c1c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x16c1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16c1cc: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16c1d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16c1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16c1d4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_16c1d8:
    // 0x16c1d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16c1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c1dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x16C1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1E0u;
        // 0x16c1e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C1E8u;
}
