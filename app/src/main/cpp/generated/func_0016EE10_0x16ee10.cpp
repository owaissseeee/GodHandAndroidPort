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

// Function: func_0016EE10
// Address: 0x16ee10 - 0x16f350
void func_0016EE10_0x16ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016EE10_0x16ee10");
#endif

    switch (ctx->pc) {
        case 0x16ee38u: goto label_16ee38;
        default: break;
    }

    ctx->pc = 0x16ee10u;

    // 0x16ee10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16ee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16ee14: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x16ee14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x16ee18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16ee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16ee1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16ee1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16ee20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16ee24: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x16ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x16ee28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ee28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ee2c: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x16ee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    // 0x16ee30: 0xc0b2418  jal         func_2C9060
    ctx->pc = 0x16EE30u;
    SET_GPR_U32(ctx, 31, 0x16EE38u);
    ctx->pc = 0x16EE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EE30u;
    // 0x16ee34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9060u, 0x16EE30u, 0x16EE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EE38u;
label_16ee38:
    // 0x16ee38: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x16ee38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ee3c: 0x51400140  beql        $t2, $zero, . + 4 + (0x140 << 2)
    ctx->pc = 0x16EE3Cu;
    {
        const bool branch_taken_0x16ee3c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ee3c) {
            ctx->pc = 0x16EE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EE3Cu;
            // 0x16ee40: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F340u;
            goto label_16f340;
        }
    }
    ctx->pc = 0x16EE44u;
    // 0x16ee44: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x16ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x16ee48: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x16ee48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x16ee4c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16EE4Cu;
    {
        const bool branch_taken_0x16ee4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EE4Cu;
        // 0x16ee50: 0x240230c7  addiu       $v0, $zero, 0x30C7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12487));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee4c) {
            ctx->pc = 0x16EEA0u;
            goto label_16eea0;
        }
    }
    ctx->pc = 0x16EE54u;
    // 0x16ee54: 0x8e24012c  lw          $a0, 0x12C($s1)
    ctx->pc = 0x16ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x16ee58: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x16ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x16ee5c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x16ee5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16ee60: 0xa4820090  sh          $v0, 0x90($a0)
    ctx->pc = 0x16ee60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16ee64: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x16ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x16ee68: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x16ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
    // 0x16ee6c: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x16ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
    // 0x16ee70: 0x8ca27a0c  lw          $v0, 0x7A0C($a1)
    ctx->pc = 0x16ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x16ee74: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x16ee74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x16ee78: 0x8e25012c  lw          $a1, 0x12C($s1)
    ctx->pc = 0x16ee78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x16ee7c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x16ee7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ee80: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x16ee80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16ee84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ee84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ee88: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x16ee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ee8c: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x16ee8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x16ee90: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x16ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x16ee94: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16ee98: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x16ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x16ee9c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16ee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_16eea0:
    // 0x16eea0: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x16eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x16eea4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x16eea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x16eea8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16EEA8u;
    {
        const bool branch_taken_0x16eea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEA8u;
        // 0x16eeac: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eea8) {
            ctx->pc = 0x16EF24u;
            goto label_16ef24;
        }
    }
    ctx->pc = 0x16EEB0u;
    // 0x16eeb0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16EEB0u;
    {
        const bool branch_taken_0x16eeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EEB0u;
        // 0x16eeb4: 0x2604002b  addiu       $a0, $s0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eeb0) {
            ctx->pc = 0x16EF24u;
            goto label_16ef24;
        }
    }
    ctx->pc = 0x16EEB8u;
    // 0x16eeb8: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x16eeb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16eebc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16eec0: 0x240630c8  addiu       $a2, $zero, 0x30C8
    ctx->pc = 0x16eec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12488));
    // 0x16eec4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x16eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16eec8: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x16eec8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x16eecc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16eed0: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x16eed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16eed4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16eed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16eed8: 0x26020029  addiu       $v0, $s0, 0x29
    ctx->pc = 0x16eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 41));
    // 0x16eedc: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x16eedcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x16eee0: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x16eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x16eee4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16eee8: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x16eee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x16eeec: 0x8d037a0c  lw          $v1, 0x7A0C($t0)
    ctx->pc = 0x16eeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31244)));
    // 0x16eef0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x16eef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16eef4: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x16eef4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16eef8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16eefc: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x16eefcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16ef00: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16ef00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16ef04: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16ef04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x16ef08: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x16ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16ef0c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x16ef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ef10: 0xe5000040  swc1        $f0, 0x40($t0)
    ctx->pc = 0x16ef10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x16ef14: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x16ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16ef18: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16ef1c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16ef1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16ef20: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_16ef24:
    // 0x16ef24: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x16ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x16ef28: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x16ef28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x16ef2c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16EF2Cu;
    {
        const bool branch_taken_0x16ef2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF2Cu;
        // 0x16ef30: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef2c) {
            ctx->pc = 0x16EFA8u;
            goto label_16efa8;
        }
    }
    ctx->pc = 0x16EF34u;
    // 0x16ef34: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16EF34u;
    {
        const bool branch_taken_0x16ef34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF34u;
        // 0x16ef38: 0x2604002b  addiu       $a0, $s0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ef34) {
            ctx->pc = 0x16EFA8u;
            goto label_16efa8;
        }
    }
    ctx->pc = 0x16EF3Cu;
    // 0x16ef3c: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x16ef3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16ef40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16ef44: 0x240630c9  addiu       $a2, $zero, 0x30C9
    ctx->pc = 0x16ef44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12489));
    // 0x16ef48: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x16ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16ef4c: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x16ef4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x16ef50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ef54: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x16ef54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16ef58: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16ef58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16ef5c: 0x26020029  addiu       $v0, $s0, 0x29
    ctx->pc = 0x16ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 41));
    // 0x16ef60: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x16ef60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x16ef64: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x16ef64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x16ef68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ef6c: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x16ef6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x16ef70: 0x8d037a0c  lw          $v1, 0x7A0C($t0)
    ctx->pc = 0x16ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31244)));
    // 0x16ef74: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x16ef74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16ef78: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x16ef78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ef7c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16ef80: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x16ef80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16ef84: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16ef84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16ef88: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16ef88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x16ef8c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x16ef8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16ef90: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x16ef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ef94: 0xe5000040  swc1        $f0, 0x40($t0)
    ctx->pc = 0x16ef94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x16ef98: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x16ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16ef9c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16efa0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16efa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16efa4: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_16efa8:
    // 0x16efa8: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x16efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x16efac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x16efacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x16efb0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16EFB0u;
    {
        const bool branch_taken_0x16efb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFB0u;
        // 0x16efb4: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16efb0) {
            ctx->pc = 0x16F02Cu;
            goto label_16f02c;
        }
    }
    ctx->pc = 0x16EFB8u;
    // 0x16efb8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16EFB8u;
    {
        const bool branch_taken_0x16efb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFB8u;
        // 0x16efbc: 0x2604002b  addiu       $a0, $s0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16efb8) {
            ctx->pc = 0x16F02Cu;
            goto label_16f02c;
        }
    }
    ctx->pc = 0x16EFC0u;
    // 0x16efc0: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x16efc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16efc4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16efc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16efc8: 0x240630ca  addiu       $a2, $zero, 0x30CA
    ctx->pc = 0x16efc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12490));
    // 0x16efcc: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x16efccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16efd0: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x16efd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x16efd4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16efd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16efd8: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x16efd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16efdc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16efdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16efe0: 0x26020029  addiu       $v0, $s0, 0x29
    ctx->pc = 0x16efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 41));
    // 0x16efe4: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x16efe4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x16efe8: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x16efe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x16efec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16efecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16eff0: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x16eff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x16eff4: 0x8d037a0c  lw          $v1, 0x7A0C($t0)
    ctx->pc = 0x16eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31244)));
    // 0x16eff8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x16eff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16effc: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x16effcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f000: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16f000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16f004: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x16f004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16f008: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16f008u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f00c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16f00cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x16f010: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x16f010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16f014: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x16f014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f018: 0xe5000040  swc1        $f0, 0x40($t0)
    ctx->pc = 0x16f018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x16f01c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x16f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16f020: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16f020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16f024: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16f024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16f028: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16f028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_16f02c:
    // 0x16f02c: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x16f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x16f030: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x16f030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x16f034: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16F034u;
    {
        const bool branch_taken_0x16f034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F034u;
        // 0x16f038: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f034) {
            ctx->pc = 0x16F0B0u;
            goto label_16f0b0;
        }
    }
    ctx->pc = 0x16F03Cu;
    // 0x16f03c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16F03Cu;
    {
        const bool branch_taken_0x16f03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F03Cu;
        // 0x16f040: 0x2604002b  addiu       $a0, $s0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f03c) {
            ctx->pc = 0x16F0B0u;
            goto label_16f0b0;
        }
    }
    ctx->pc = 0x16F044u;
    // 0x16f044: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x16f044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16f048: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16f048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16f04c: 0x240630cb  addiu       $a2, $zero, 0x30CB
    ctx->pc = 0x16f04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12491));
    // 0x16f050: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x16f050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16f054: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x16f054u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x16f058: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f05c: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x16f05cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16f060: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16f060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16f064: 0x26020029  addiu       $v0, $s0, 0x29
    ctx->pc = 0x16f064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 41));
    // 0x16f068: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x16f068u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x16f06c: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x16f06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x16f070: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f074: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x16f074u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x16f078: 0x8d037a0c  lw          $v1, 0x7A0C($t0)
    ctx->pc = 0x16f078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31244)));
    // 0x16f07c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x16f07cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16f080: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x16f080u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f084: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16f084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16f088: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x16f088u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16f08c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16f08cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f090: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16f090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x16f094: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x16f094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16f098: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x16f098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f09c: 0xe5000040  swc1        $f0, 0x40($t0)
    ctx->pc = 0x16f09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x16f0a0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x16f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16f0a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16f0a8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16f0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16f0ac: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_16f0b0:
    // 0x16f0b0: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x16f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x16f0b4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x16f0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x16f0b8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16F0B8u;
    {
        const bool branch_taken_0x16f0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0B8u;
        // 0x16f0bc: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0b8) {
            ctx->pc = 0x16F134u;
            goto label_16f134;
        }
    }
    ctx->pc = 0x16F0C0u;
    // 0x16f0c0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16F0C0u;
    {
        const bool branch_taken_0x16f0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F0C0u;
        // 0x16f0c4: 0x2604002b  addiu       $a0, $s0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f0c0) {
            ctx->pc = 0x16F134u;
            goto label_16f134;
        }
    }
    ctx->pc = 0x16F0C8u;
    // 0x16f0c8: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x16f0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16f0cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16f0d0: 0x240630cc  addiu       $a2, $zero, 0x30CC
    ctx->pc = 0x16f0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12492));
    // 0x16f0d4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x16f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16f0d8: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x16f0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x16f0dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f0e0: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x16f0e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16f0e4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16f0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16f0e8: 0x26020029  addiu       $v0, $s0, 0x29
    ctx->pc = 0x16f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 41));
    // 0x16f0ec: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x16f0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x16f0f0: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x16f0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x16f0f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f0f8: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x16f0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x16f0fc: 0x8d037a0c  lw          $v1, 0x7A0C($t0)
    ctx->pc = 0x16f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31244)));
    // 0x16f100: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x16f100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16f104: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x16f104u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f108: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16f108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16f10c: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x16f10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16f110: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16f110u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f114: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16f114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x16f118: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x16f118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16f11c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x16f11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f120: 0xe5000040  swc1        $f0, 0x40($t0)
    ctx->pc = 0x16f120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x16f124: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x16f124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16f128: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16f128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16f12c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16f12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16f130: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16f130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_16f134:
    // 0x16f134: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x16f134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x16f138: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x16f138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x16f13c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16F13Cu;
    {
        const bool branch_taken_0x16f13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F13Cu;
        // 0x16f140: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f13c) {
            ctx->pc = 0x16F1B8u;
            goto label_16f1b8;
        }
    }
    ctx->pc = 0x16F144u;
    // 0x16f144: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16F144u;
    {
        const bool branch_taken_0x16f144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F144u;
        // 0x16f148: 0x2604002b  addiu       $a0, $s0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f144) {
            ctx->pc = 0x16F1B8u;
            goto label_16f1b8;
        }
    }
    ctx->pc = 0x16F14Cu;
    // 0x16f14c: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x16f14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16f150: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16f150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16f154: 0x240630cd  addiu       $a2, $zero, 0x30CD
    ctx->pc = 0x16f154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12493));
    // 0x16f158: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x16f158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16f15c: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x16f15cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x16f160: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f164: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x16f164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16f168: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16f168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16f16c: 0x26020029  addiu       $v0, $s0, 0x29
    ctx->pc = 0x16f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 41));
    // 0x16f170: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x16f170u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x16f174: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x16f174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x16f178: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f17c: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x16f17cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x16f180: 0x8d037a0c  lw          $v1, 0x7A0C($t0)
    ctx->pc = 0x16f180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31244)));
    // 0x16f184: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x16f184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16f188: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x16f188u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f18c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16f190: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x16f190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16f194: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16f194u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f198: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16f198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x16f19c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x16f19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16f1a0: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x16f1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f1a4: 0xe5000040  swc1        $f0, 0x40($t0)
    ctx->pc = 0x16f1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x16f1a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x16f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16f1ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16f1b0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16f1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16f1b4: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_16f1b8:
    // 0x16f1b8: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x16f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x16f1bc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x16f1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x16f1c0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16F1C0u;
    {
        const bool branch_taken_0x16f1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1C0u;
        // 0x16f1c4: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1c0) {
            ctx->pc = 0x16F23Cu;
            goto label_16f23c;
        }
    }
    ctx->pc = 0x16F1C8u;
    // 0x16f1c8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16F1C8u;
    {
        const bool branch_taken_0x16f1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1C8u;
        // 0x16f1cc: 0x2604002b  addiu       $a0, $s0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1c8) {
            ctx->pc = 0x16F23Cu;
            goto label_16f23c;
        }
    }
    ctx->pc = 0x16F1D0u;
    // 0x16f1d0: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x16f1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16f1d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16f1d8: 0x240630ce  addiu       $a2, $zero, 0x30CE
    ctx->pc = 0x16f1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12494));
    // 0x16f1dc: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x16f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16f1e0: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x16f1e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x16f1e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f1e8: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x16f1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16f1ec: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16f1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16f1f0: 0x26020029  addiu       $v0, $s0, 0x29
    ctx->pc = 0x16f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 41));
    // 0x16f1f4: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x16f1f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x16f1f8: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x16f1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x16f1fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f200: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x16f200u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x16f204: 0x8d037a0c  lw          $v1, 0x7A0C($t0)
    ctx->pc = 0x16f204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31244)));
    // 0x16f208: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x16f208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16f20c: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x16f20cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f210: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16f210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16f214: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x16f214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16f218: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16f218u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f21c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16f21cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x16f220: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x16f220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16f224: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x16f224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f228: 0xe5000040  swc1        $f0, 0x40($t0)
    ctx->pc = 0x16f228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x16f22c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x16f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16f230: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16f234: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16f234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16f238: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16f238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_16f23c:
    // 0x16f23c: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x16f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x16f240: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x16f240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x16f244: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16F244u;
    {
        const bool branch_taken_0x16f244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F244u;
        // 0x16f248: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f244) {
            ctx->pc = 0x16F2C0u;
            goto label_16f2c0;
        }
    }
    ctx->pc = 0x16F24Cu;
    // 0x16f24c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16F24Cu;
    {
        const bool branch_taken_0x16f24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F24Cu;
        // 0x16f250: 0x2604002b  addiu       $a0, $s0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f24c) {
            ctx->pc = 0x16F2C0u;
            goto label_16f2c0;
        }
    }
    ctx->pc = 0x16F254u;
    // 0x16f254: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x16f254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16f258: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16f258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16f25c: 0x240630cf  addiu       $a2, $zero, 0x30CF
    ctx->pc = 0x16f25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12495));
    // 0x16f260: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x16f260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16f264: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x16f264u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x16f268: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16f268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f26c: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x16f26cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16f270: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16f270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16f274: 0x26020029  addiu       $v0, $s0, 0x29
    ctx->pc = 0x16f274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 41));
    // 0x16f278: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x16f278u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x16f27c: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x16f27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x16f280: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f284: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x16f284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x16f288: 0x8d037a0c  lw          $v1, 0x7A0C($t0)
    ctx->pc = 0x16f288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31244)));
    // 0x16f28c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x16f28cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16f290: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x16f290u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f294: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16f294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16f298: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x16f298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16f29c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16f29cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f2a0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16f2a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x16f2a4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x16f2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16f2a8: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x16f2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f2ac: 0xe5000040  swc1        $f0, 0x40($t0)
    ctx->pc = 0x16f2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x16f2b0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x16f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16f2b4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16f2b8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16f2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16f2bc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_16f2c0:
    // 0x16f2c0: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x16f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x16f2c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x16f2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x16f2c8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16F2C8u;
    {
        const bool branch_taken_0x16f2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2C8u;
        // 0x16f2cc: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2c8) {
            ctx->pc = 0x16F33Cu;
            goto label_16f33c;
        }
    }
    ctx->pc = 0x16F2D0u;
    // 0x16f2d0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16F2D0u;
    {
        const bool branch_taken_0x16f2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2D0u;
        // 0x16f2d4: 0x2604002b  addiu       $a0, $s0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2d0) {
            ctx->pc = 0x16F33Cu;
            goto label_16f33c;
        }
    }
    ctx->pc = 0x16F2D8u;
    // 0x16f2d8: 0x26270080  addiu       $a3, $s1, 0x80
    ctx->pc = 0x16f2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16f2dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16f2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16f2e0: 0x240630c6  addiu       $a2, $zero, 0x30C6
    ctx->pc = 0x16f2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12486));
    // 0x16f2e4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x16f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16f2e8: 0x3c080074  lui         $t0, 0x74
    ctx->pc = 0x16f2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)116 << 16));
    // 0x16f2ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f2f0: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x16f2f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16f2f4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x16f2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x16f2f8: 0x26030029  addiu       $v1, $s0, 0x29
    ctx->pc = 0x16f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 41));
    // 0x16f2fc: 0xa4460090  sh          $a2, 0x90($v0)
    ctx->pc = 0x16f2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x16f300: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x16f300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x16f304: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16f304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f308: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x16f308u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x16f30c: 0x8d027a0c  lw          $v0, 0x7A0C($t0)
    ctx->pc = 0x16f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 31244)));
    // 0x16f310: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x16f310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16f314: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x16f314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16f318: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16f318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x16f31c: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x16f31cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16f320: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16f320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16f324: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16f324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f328: 0xe5000040  swc1        $f0, 0x40($t0)
    ctx->pc = 0x16f328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 64), bits); }
    // 0x16f32c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x16f32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x16f330: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16f330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16f334: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x16f334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x16f338: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16f338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_16f33c:
    // 0x16f33c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16f33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16f340:
    // 0x16f340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16f340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f348: 0x3e00008  jr          $ra
    ctx->pc = 0x16F348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F348u;
        // 0x16f34c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F350u;
}
