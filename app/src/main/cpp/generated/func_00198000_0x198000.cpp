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

// Function: func_00198000
// Address: 0x198000 - 0x1987b0
void func_00198000_0x198000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00198000_0x198000");
#endif

    switch (ctx->pc) {
        case 0x19808cu: goto label_19808c;
        case 0x1980a8u: goto label_1980a8;
        case 0x1980b8u: goto label_1980b8;
        case 0x1980c8u: goto label_1980c8;
        case 0x198118u: goto label_198118;
        case 0x19814cu: goto label_19814c;
        case 0x198174u: goto label_198174;
        case 0x198188u: goto label_198188;
        case 0x1981a8u: goto label_1981a8;
        case 0x1982c4u: goto label_1982c4;
        case 0x1982d0u: goto label_1982d0;
        case 0x1982dcu: goto label_1982dc;
        case 0x1982ecu: goto label_1982ec;
        case 0x1982f8u: goto label_1982f8;
        case 0x198304u: goto label_198304;
        case 0x198320u: goto label_198320;
        case 0x198448u: goto label_198448;
        case 0x198454u: goto label_198454;
        case 0x198460u: goto label_198460;
        case 0x198470u: goto label_198470;
        case 0x19847cu: goto label_19847c;
        case 0x198488u: goto label_198488;
        case 0x1984a4u: goto label_1984a4;
        case 0x1984d0u: goto label_1984d0;
        case 0x1984f8u: goto label_1984f8;
        case 0x19852cu: goto label_19852c;
        case 0x198578u: goto label_198578;
        case 0x1985b0u: goto label_1985b0;
        case 0x198628u: goto label_198628;
        case 0x1986a0u: goto label_1986a0;
        case 0x1986bcu: goto label_1986bc;
        case 0x198710u: goto label_198710;
        default: break;
    }

    ctx->pc = 0x198000u;

    // 0x198000: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x198000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x198004: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x198004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x198008: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x198008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x19800c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19800cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198010: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x198010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x198014: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x198014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x198018: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x198018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x19801c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x19801cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x198020: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x198020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x198024: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x198024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x198028: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x198028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x19802c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19802cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x198030: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x198030u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x198034: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x198034u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x198038: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x198038u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x19803c: 0x924302f5  lbu         $v1, 0x2F5($s2)
    ctx->pc = 0x19803cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
    // 0x198040: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x198040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x198044: 0x104001ca  beqz        $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x198044u;
    {
        const bool branch_taken_0x198044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198044u;
        // 0x198048: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198044) {
            ctx->pc = 0x198770u;
            goto label_198770;
        }
    }
    ctx->pc = 0x19804Cu;
    // 0x19804c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19804cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198050: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x198050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
    // 0x198054: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x198054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198058: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x198058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19805c: 0x800008  jr          $a0
    ctx->pc = 0x19805Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198064u: goto label_198064;
            case 0x19853Cu: goto label_19853c;
            case 0x198560u: goto label_198560;
            case 0x1986D4u: goto label_1986d4;
            case 0x198718u: goto label_198718;
            case 0x19875Cu: goto label_19875c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19805Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x198064u;
label_198064:
    // 0x198064: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x198064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x198068: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x198068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19806c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x19806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x198070: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x198070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198074: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x198074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198078: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198078u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19807c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19807cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198080: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198080u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198084: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x198084u;
    SET_GPR_U32(ctx, 31, 0x19808Cu);
    ctx->pc = 0x198088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198084u;
    // 0x198088: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x198084u, 0x19808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19808Cu;
label_19808c:
    // 0x19808c: 0x824309da  lb          $v1, 0x9DA($s2)
    ctx->pc = 0x19808cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2522)));
    // 0x198090: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x198090u;
    {
        const bool branch_taken_0x198090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198090) {
            ctx->pc = 0x198094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198090u;
            // 0x198094: 0x824509da  lb          $a1, 0x9DA($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2522)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1980ACu;
            goto label_1980ac;
        }
    }
    ctx->pc = 0x198098u;
    // 0x198098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19809c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19809cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980a0: 0xc0662b2  jal         func_198AC8
    ctx->pc = 0x1980A0u;
    SET_GPR_U32(ctx, 31, 0x1980A8u);
    ctx->pc = 0x1980A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980A0u;
    // 0x1980a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198AC8u, 0x1980A0u, 0x1980A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980A8u;
label_1980a8:
    // 0x1980a8: 0x824509da  lb          $a1, 0x9DA($s2)
    ctx->pc = 0x1980a8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2522)));
label_1980ac:
    // 0x1980ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1980acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980b0: 0xc066296  jal         func_198A58
    ctx->pc = 0x1980B0u;
    SET_GPR_U32(ctx, 31, 0x1980B8u);
    ctx->pc = 0x1980B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980B0u;
    // 0x1980b4: 0x265509d0  addiu       $s5, $s2, 0x9D0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198A58u, 0x1980B0u, 0x1980B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980B8u;
label_1980b8:
    // 0x1980b8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1980b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980bc: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1980bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1980c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1980c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1980c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1980c8:
    // 0x1980c8: 0x61942  srl         $v1, $a2, 5
    ctx->pc = 0x1980c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x1980cc: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x1980ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x1980d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1980d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1980d4: 0x892006  srlv        $a0, $t1, $a0
    ctx->pc = 0x1980d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1980d8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1980d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1980dc: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x1980dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1980e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1980e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1980e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1980e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1980e8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1980e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1980ec: 0x10c0fff6  beqz        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1980ECu;
    {
        const bool branch_taken_0x1980ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1980F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980ECu;
        // 0x1980f0: 0xa2380b  movn        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980ec) {
            ctx->pc = 0x1980C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1980c8;
        }
    }
    ctx->pc = 0x1980F4u;
    // 0x1980f4: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1980F4u;
    {
        const bool branch_taken_0x1980f4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1980f4) {
            ctx->pc = 0x198108u;
            goto label_198108;
        }
    }
    ctx->pc = 0x1980FCu;
    // 0x1980fc: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1980fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x198100: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x198100u;
    {
        const bool branch_taken_0x198100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198100u;
        // 0x198104: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198100) {
            ctx->pc = 0x198768u;
            goto label_198768;
        }
    }
    ctx->pc = 0x198108u;
label_198108:
    // 0x198108: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x198108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19810c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19810cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x198110: 0xc06de42  jal         func_1B7908
    ctx->pc = 0x198110u;
    SET_GPR_U32(ctx, 31, 0x198118u);
    ctx->pc = 0x198114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198110u;
    // 0x198114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x198110u, 0x198118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198118u;
label_198118:
    // 0x198118: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x198118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x19811c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19811cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x198120: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x198120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x198124: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x198124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x198128: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x198128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19812c: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x19812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x198130: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x198130u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x198134: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x198134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x198138: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x198138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x19813c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19813cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x198140: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x198140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x198144: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x198144u;
    SET_GPR_U32(ctx, 31, 0x19814Cu);
    ctx->pc = 0x198148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198144u;
    // 0x198148: 0x3c1e0042  lui         $fp, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x198144u, 0x19814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19814Cu;
label_19814c:
    // 0x19814c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x19814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198150: 0x27d64fe0  addiu       $s6, $fp, 0x4FE0
    ctx->pc = 0x198150u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 20448));
    // 0x198154: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x198154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x198158: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x198158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x19815c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19815cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x198160: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x198160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x198164: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x198164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198168: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x198168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19816c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19816Cu;
    SET_GPR_U32(ctx, 31, 0x198174u);
    ctx->pc = 0x198170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19816Cu;
    // 0x198170: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19816Cu, 0x198174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198174u;
label_198174:
    // 0x198174: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x198174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x198178: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x198178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19817c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19817cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x198180: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x198180u;
    SET_GPR_U32(ctx, 31, 0x198188u);
    ctx->pc = 0x198184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198180u;
    // 0x198184: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x198180u, 0x198188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198188u;
label_198188:
    // 0x198188: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x198188u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x19818c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x19818cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198190: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x198190u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198194: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x198194u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x198198: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x198198u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19819c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x19819cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1981a0: 0x131942  srl         $v1, $s3, 5
    ctx->pc = 0x1981a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
    // 0x1981a4: 0x0  nop
    ctx->pc = 0x1981a4u;
    // NOP
label_1981a8:
    // 0x1981a8: 0x3265001f  andi        $a1, $s3, 0x1F
    ctx->pc = 0x1981a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x1981ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1981acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1981b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1981b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1981b4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1981b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1981b8: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x1981b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1981bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1981bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1981c0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1981c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1981c4: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x1981C4u;
    {
        const bool branch_taken_0x1981c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1981c4) {
            ctx->pc = 0x1981C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1981C4u;
            // 0x1981c8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198328u;
            goto label_198328;
        }
    }
    ctx->pc = 0x1981CCu;
    // 0x1981cc: 0x92c20006  lbu         $v0, 0x6($s6)
    ctx->pc = 0x1981ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1981d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1981d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1981d4: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1981d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1981d8: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1981d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1981dc: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1981DCu;
    {
        const bool branch_taken_0x1981dc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1981E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981DCu;
        // 0x1981e0: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981dc) {
            ctx->pc = 0x1981ECu;
            goto label_1981ec;
        }
    }
    ctx->pc = 0x1981E4u;
    // 0x1981e4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1981e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1981e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1981e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1981ec:
    // 0x1981ec: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1981ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1981f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1981F0u;
    {
        const bool branch_taken_0x1981f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981F0u;
        // 0x1981f4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981f0) {
            ctx->pc = 0x198208u;
            goto label_198208;
        }
    }
    ctx->pc = 0x1981F8u;
    // 0x1981f8: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1981f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1981fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1981fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198200: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198200u;
    {
        const bool branch_taken_0x198200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198200u;
        // 0x198204: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198200) {
            ctx->pc = 0x19820Cu;
            goto label_19820c;
        }
    }
    ctx->pc = 0x198208u;
label_198208:
    // 0x198208: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19820c:
    // 0x19820c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x19820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x198210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198214: 0x92c30006  lbu         $v1, 0x6($s6)
    ctx->pc = 0x198214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x198218: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x198218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19821c: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x19821cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x198220: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x198220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x198224: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x198224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x198228: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198228u;
    {
        const bool branch_taken_0x198228 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x19822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198228u;
        // 0x19822c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198228) {
            ctx->pc = 0x198238u;
            goto label_198238;
        }
    }
    ctx->pc = 0x198230u;
    // 0x198230: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x198230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x198234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198238:
    // 0x198238: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x198238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19823c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19823Cu;
    {
        const bool branch_taken_0x19823c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19823Cu;
        // 0x198240: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19823c) {
            ctx->pc = 0x198254u;
            goto label_198254;
        }
    }
    ctx->pc = 0x198244u;
    // 0x198244: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x198244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x198248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19824c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19824Cu;
    {
        const bool branch_taken_0x19824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19824Cu;
        // 0x198250: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19824c) {
            ctx->pc = 0x198258u;
            goto label_198258;
        }
    }
    ctx->pc = 0x198254u;
label_198254:
    // 0x198254: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198258:
    // 0x198258: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x198258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19825c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19825cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198260: 0x92c30006  lbu         $v1, 0x6($s6)
    ctx->pc = 0x198260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x198264: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x198264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x198268: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x198268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x19826c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x19826cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x198270: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x198270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x198274: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198274u;
    {
        const bool branch_taken_0x198274 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x198278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198274u;
        // 0x198278: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198274) {
            ctx->pc = 0x198284u;
            goto label_198284;
        }
    }
    ctx->pc = 0x19827Cu;
    // 0x19827c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x19827cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198280: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x198280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198284:
    // 0x198284: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x198284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x198288: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198288u;
    {
        const bool branch_taken_0x198288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198288u;
        // 0x19828c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198288) {
            ctx->pc = 0x1982A0u;
            goto label_1982a0;
        }
    }
    ctx->pc = 0x198290u;
    // 0x198290: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x198290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x198294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198298: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198298u;
    {
        const bool branch_taken_0x198298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198298u;
        // 0x19829c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198298) {
            ctx->pc = 0x1982A4u;
            goto label_1982a4;
        }
    }
    ctx->pc = 0x1982A0u;
label_1982a0:
    // 0x1982a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1982a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1982a4:
    // 0x1982a4: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1982a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1982a8: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1982a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1982ac: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x1982acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1982b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1982b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1982b4: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x1982b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1982b8: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x1982b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1982bc: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1982BCu;
    SET_GPR_U32(ctx, 31, 0x1982C4u);
    ctx->pc = 0x1982C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982BCu;
    // 0x1982c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1982BCu, 0x1982C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1982C4u;
label_1982c4:
    // 0x1982c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1982c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982c8: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1982C8u;
    SET_GPR_U32(ctx, 31, 0x1982D0u);
    ctx->pc = 0x1982CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982C8u;
    // 0x1982cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1982C8u, 0x1982D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1982D0u;
label_1982d0:
    // 0x1982d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1982d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982d4: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1982D4u;
    SET_GPR_U32(ctx, 31, 0x1982DCu);
    ctx->pc = 0x1982D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982D4u;
    // 0x1982d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1982D4u, 0x1982DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1982DCu;
label_1982dc:
    // 0x1982dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1982dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1982e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982e4: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1982E4u;
    SET_GPR_U32(ctx, 31, 0x1982ECu);
    ctx->pc = 0x1982E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982E4u;
    // 0x1982e8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1982E4u, 0x1982ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1982ECu;
label_1982ec:
    // 0x1982ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1982ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982f0: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1982F0u;
    SET_GPR_U32(ctx, 31, 0x1982F8u);
    ctx->pc = 0x1982F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982F0u;
    // 0x1982f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1982F0u, 0x1982F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1982F8u;
label_1982f8:
    // 0x1982f8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1982f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1982fc: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1982FCu;
    SET_GPR_U32(ctx, 31, 0x198304u);
    ctx->pc = 0x198300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1982FCu;
    // 0x198300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1982FCu, 0x198304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198304u;
label_198304:
    // 0x198304: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x198304u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x198308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19830c: 0xe6950004  swc1        $f21, 0x4($s4)
    ctx->pc = 0x19830cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x198310: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x198310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198314: 0xe6950008  swc1        $f21, 0x8($s4)
    ctx->pc = 0x198314u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x198318: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x198318u;
    SET_GPR_U32(ctx, 31, 0x198320u);
    ctx->pc = 0x19831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198318u;
    // 0x19831c: 0xe695000c  swc1        $f21, 0xC($s4) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x198318u, 0x198320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198320u;
label_198320:
    // 0x198320: 0xe6160058  swc1        $f22, 0x58($s0)
    ctx->pc = 0x198320u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x198324: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198328:
    // 0x198328: 0x1260ff9f  beqz        $s3, . + 4 + (-0x61 << 2)
    ctx->pc = 0x198328u;
    {
        const bool branch_taken_0x198328 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198328u;
        // 0x19832c: 0x131942  srl         $v1, $s3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198328) {
            ctx->pc = 0x1981A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1981a8;
        }
    }
    ctx->pc = 0x198330u;
    // 0x198330: 0x27c24fe0  addiu       $v0, $fp, 0x4FE0
    ctx->pc = 0x198330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20448));
    // 0x198334: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x198334u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x198338: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x198338u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x19833c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19833cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198340: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x198340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x198344: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x198344u;
    {
        const bool branch_taken_0x198344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198344u;
        // 0x198348: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198344) {
            ctx->pc = 0x198354u;
            goto label_198354;
        }
    }
    ctx->pc = 0x19834Cu;
    // 0x19834c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x19834cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x198350: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x198350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_198354:
    // 0x198354: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x198354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x198358: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198358u;
    {
        const bool branch_taken_0x198358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198358u;
        // 0x19835c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198358) {
            ctx->pc = 0x198370u;
            goto label_198370;
        }
    }
    ctx->pc = 0x198360u;
    // 0x198360: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x198360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x198364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198368: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198368u;
    {
        const bool branch_taken_0x198368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198368u;
        // 0x19836c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198368) {
            ctx->pc = 0x198374u;
            goto label_198374;
        }
    }
    ctx->pc = 0x198370u;
label_198370:
    // 0x198370: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198374:
    // 0x198374: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x198374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x198378: 0x27c34fe0  addiu       $v1, $fp, 0x4FE0
    ctx->pc = 0x198378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 20448));
    // 0x19837c: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x19837cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x198380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198384: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x198384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x198388: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x198388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x19838c: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x19838cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x198390: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x198390u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x198394: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x198394u;
    {
        const bool branch_taken_0x198394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198394u;
        // 0x198398: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198394) {
            ctx->pc = 0x1983A4u;
            goto label_1983a4;
        }
    }
    ctx->pc = 0x19839Cu;
    // 0x19839c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x19839cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1983a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1983a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1983a4:
    // 0x1983a4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1983a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1983a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1983A8u;
    {
        const bool branch_taken_0x1983a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983A8u;
        // 0x1983ac: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983a8) {
            ctx->pc = 0x1983C0u;
            goto label_1983c0;
        }
    }
    ctx->pc = 0x1983B0u;
    // 0x1983b0: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1983b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1983b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1983b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1983b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1983B8u;
    {
        const bool branch_taken_0x1983b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983B8u;
        // 0x1983bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983b8) {
            ctx->pc = 0x1983C4u;
            goto label_1983c4;
        }
    }
    ctx->pc = 0x1983C0u;
label_1983c0:
    // 0x1983c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1983c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1983c4:
    // 0x1983c4: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1983c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1983c8: 0x27c34fe0  addiu       $v1, $fp, 0x4FE0
    ctx->pc = 0x1983c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 20448));
    // 0x1983cc: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x1983ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1983d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1983d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983d4: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1983d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1983d8: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1983d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1983dc: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1983dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1983e0: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1983e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1983e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1983E4u;
    {
        const bool branch_taken_0x1983e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1983E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983E4u;
        // 0x1983e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983e4) {
            ctx->pc = 0x1983F4u;
            goto label_1983f4;
        }
    }
    ctx->pc = 0x1983ECu;
    // 0x1983ec: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1983ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1983f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1983f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1983f4:
    // 0x1983f4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1983f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1983f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1983F8u;
    {
        const bool branch_taken_0x1983f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983F8u;
        // 0x1983fc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983f8) {
            ctx->pc = 0x198410u;
            goto label_198410;
        }
    }
    ctx->pc = 0x198400u;
    // 0x198400: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x198400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x198404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198408: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198408u;
    {
        const bool branch_taken_0x198408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198408u;
        // 0x19840c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198408) {
            ctx->pc = 0x198414u;
            goto label_198414;
        }
    }
    ctx->pc = 0x198410u;
label_198410:
    // 0x198410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198414:
    // 0x198414: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x198414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x198418: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x198418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x19841c: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x19841cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x198420: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x198420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x198424: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x198424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x198428: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19842c: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x19842cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x198430: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x198430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x198434: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x198434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x198438: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x198438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19843c: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x19843cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x198440: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x198440u;
    SET_GPR_U32(ctx, 31, 0x198448u);
    ctx->pc = 0x198444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198440u;
    // 0x198444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x198440u, 0x198448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198448u;
label_198448:
    // 0x198448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19844c: 0xc05ce66  jal         func_173998
    ctx->pc = 0x19844Cu;
    SET_GPR_U32(ctx, 31, 0x198454u);
    ctx->pc = 0x198450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19844Cu;
    // 0x198450: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x19844Cu, 0x198454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198454u;
label_198454:
    // 0x198454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198458: 0xc051f18  jal         func_147C60
    ctx->pc = 0x198458u;
    SET_GPR_U32(ctx, 31, 0x198460u);
    ctx->pc = 0x19845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198458u;
    // 0x19845c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x198458u, 0x198460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198460u;
label_198460:
    // 0x198460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198464: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x198464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198468: 0xc051f22  jal         func_147C88
    ctx->pc = 0x198468u;
    SET_GPR_U32(ctx, 31, 0x198470u);
    ctx->pc = 0x19846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198468u;
    // 0x19846c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x198468u, 0x198470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198470u;
label_198470:
    // 0x198470: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x198470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198474: 0xc05ce42  jal         func_173908
    ctx->pc = 0x198474u;
    SET_GPR_U32(ctx, 31, 0x19847Cu);
    ctx->pc = 0x198478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198474u;
    // 0x198478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x198474u, 0x19847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19847Cu;
label_19847c:
    // 0x19847c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19847cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x198480: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x198480u;
    SET_GPR_U32(ctx, 31, 0x198488u);
    ctx->pc = 0x198484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198480u;
    // 0x198484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x198480u, 0x198488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198488u;
label_198488:
    // 0x198488: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x198488u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19848c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x19848cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198490: 0xe6f50004  swc1        $f21, 0x4($s7)
    ctx->pc = 0x198490u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x198494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198498: 0xe6f50008  swc1        $f21, 0x8($s7)
    ctx->pc = 0x198498u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x19849c: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x19849Cu;
    SET_GPR_U32(ctx, 31, 0x1984A4u);
    ctx->pc = 0x1984A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19849Cu;
    // 0x1984a0: 0xe6f5000c  swc1        $f21, 0xC($s7) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x19849Cu, 0x1984A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984A4u;
label_1984a4:
    // 0x1984a4: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1984a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1984a8: 0x8e4505ec  lw          $a1, 0x5EC($s2)
    ctx->pc = 0x1984a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1516)));
    // 0x1984ac: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1984ACu;
    {
        const bool branch_taken_0x1984ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1984B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984ACu;
        // 0x1984b0: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984ac) {
            ctx->pc = 0x1984D4u;
            goto label_1984d4;
        }
    }
    ctx->pc = 0x1984B4u;
    // 0x1984b4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1984b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1984b8: 0x8e4405f0  lw          $a0, 0x5F0($s2)
    ctx->pc = 0x1984b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x1984bc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1984bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1984c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1984c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984c4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1984c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984c8: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1984C8u;
    SET_GPR_U32(ctx, 31, 0x1984D0u);
    ctx->pc = 0x1984CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1984C8u;
    // 0x1984cc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1984C8u, 0x1984D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984D0u;
label_1984d0:
    // 0x1984d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1984d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1984d4:
    // 0x1984d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1984d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1984d8: 0x2464ee00  addiu       $a0, $v1, -0x1200
    ctx->pc = 0x1984d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x1984dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1984dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1984e0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1984e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1984e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1984e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1984ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984f0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1984F0u;
    SET_GPR_U32(ctx, 31, 0x1984F8u);
    ctx->pc = 0x1984F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1984F0u;
    // 0x1984f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1984F0u, 0x1984F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984F8u;
label_1984f8:
    // 0x1984f8: 0xae4005c0  sw          $zero, 0x5C0($s2)
    ctx->pc = 0x1984f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1472), GPR_U32(ctx, 0));
    // 0x1984fc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1984fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x198500: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x198500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x198504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x198504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198508: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x198508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19850c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x19850cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x198510: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x198510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x198514: 0xa64209d4  sh          $v0, 0x9D4($s2)
    ctx->pc = 0x198514u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2516), (uint16_t)GPR_U32(ctx, 2));
    // 0x198518: 0x8e440604  lw          $a0, 0x604($s2)
    ctx->pc = 0x198518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
    // 0x19851c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19851Cu;
    {
        const bool branch_taken_0x19851c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x198520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19851Cu;
        // 0x198520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19851c) {
            ctx->pc = 0x198530u;
            goto label_198530;
        }
    }
    ctx->pc = 0x198524u;
    // 0x198524: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x198524u;
    SET_GPR_U32(ctx, 31, 0x19852Cu);
    ctx->pc = 0x198528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198524u;
    // 0x198528: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x198524u, 0x19852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19852Cu;
label_19852c:
    // 0x19852c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19852cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198530:
    // 0x198530: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x198530u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x198534: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x198534u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x198538: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x198538u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_19853c:
    // 0x19853c: 0x964209d4  lhu         $v0, 0x9D4($s2)
    ctx->pc = 0x19853cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2516)));
    // 0x198540: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x198544: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x198544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x198548: 0x1c600089  bgtz        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x198548u;
    {
        const bool branch_taken_0x198548 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x19854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198548u;
        // 0x19854c: 0xa64209d4  sh          $v0, 0x9D4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2516), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198548) {
            ctx->pc = 0x198770u;
            goto label_198770;
        }
    }
    ctx->pc = 0x198550u;
    // 0x198550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x198550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198554: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x198554u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x198558: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x198558u;
    {
        const bool branch_taken_0x198558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198558u;
        // 0x19855c: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198558) {
            ctx->pc = 0x19876Cu;
            goto label_19876c;
        }
    }
    ctx->pc = 0x198560u;
label_198560:
    // 0x198560: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x198560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198564: 0x265509d0  addiu       $s5, $s2, 0x9D0
    ctx->pc = 0x198564u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 2512));
    // 0x198568: 0x3c1e0042  lui         $fp, 0x42
    ctx->pc = 0x198568u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
    // 0x19856c: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x19856cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x198570: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x198570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x198574: 0x0  nop
    ctx->pc = 0x198574u;
    // NOP
label_198578:
    // 0x198578: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x198578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x19857c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19857cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x198580: 0x912006  srlv        $a0, $s1, $a0
    ctx->pc = 0x198580u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 4) & 0x1F));
    // 0x198584: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x198584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x198588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x198588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19858c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x19858cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x198590: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x198590u;
    {
        const bool branch_taken_0x198590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198590) {
            ctx->pc = 0x198594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198590u;
            // 0x198594: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1985B4u;
            goto label_1985b4;
        }
    }
    ctx->pc = 0x198598u;
    // 0x198598: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x198598u;
    {
        const bool branch_taken_0x198598 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x198598) {
            ctx->pc = 0x19859Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198598u;
            // 0x19859c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1985B4u;
            goto label_1985b4;
        }
    }
    ctx->pc = 0x1985A0u;
    // 0x1985a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1985a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1985a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985a8: 0xc0662b2  jal         func_198AC8
    ctx->pc = 0x1985A8u;
    SET_GPR_U32(ctx, 31, 0x1985B0u);
    ctx->pc = 0x1985ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1985A8u;
    // 0x1985ac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198AC8u, 0x1985A8u, 0x1985B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1985B0u;
label_1985b0:
    // 0x1985b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1985b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1985b4:
    // 0x1985b4: 0x1200fff0  beqz        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1985B4u;
    {
        const bool branch_taken_0x1985b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1985B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985B4u;
        // 0x1985b8: 0x101142  srl         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985b4) {
            ctx->pc = 0x198578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198578;
        }
    }
    ctx->pc = 0x1985BCu;
    // 0x1985bc: 0x27c24fe0  addiu       $v0, $fp, 0x4FE0
    ctx->pc = 0x1985bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20448));
    // 0x1985c0: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1985c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1985c4: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x1985c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1985c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1985c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985cc: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1985ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1985d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1985D0u;
    {
        const bool branch_taken_0x1985d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1985D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985D0u;
        // 0x1985d4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985d0) {
            ctx->pc = 0x1985E0u;
            goto label_1985e0;
        }
    }
    ctx->pc = 0x1985D8u;
    // 0x1985d8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1985d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1985dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1985dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1985e0:
    // 0x1985e0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1985e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1985e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1985E4u;
    {
        const bool branch_taken_0x1985e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1985E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985E4u;
        // 0x1985e8: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985e4) {
            ctx->pc = 0x1985FCu;
            goto label_1985fc;
        }
    }
    ctx->pc = 0x1985ECu;
    // 0x1985ec: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1985ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1985f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1985f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1985f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1985F4u;
    {
        const bool branch_taken_0x1985f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1985F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1985F4u;
        // 0x1985f8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985f4) {
            ctx->pc = 0x198600u;
            goto label_198600;
        }
    }
    ctx->pc = 0x1985FCu;
label_1985fc:
    // 0x1985fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1985fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198600:
    // 0x198600: 0x27c24fe0  addiu       $v0, $fp, 0x4FE0
    ctx->pc = 0x198600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20448));
    // 0x198604: 0x90430007  lbu         $v1, 0x7($v0)
    ctx->pc = 0x198604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x198608: 0x90500006  lbu         $s0, 0x6($v0)
    ctx->pc = 0x198608u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x19860c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x19860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x198610: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x198610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x198614: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x198614u;
    {
        const bool branch_taken_0x198614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198614u;
        // 0x198618: 0x24b40080  addiu       $s4, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198614) {
            ctx->pc = 0x1986ACu;
            goto label_1986ac;
        }
    }
    ctx->pc = 0x19861Cu;
    // 0x19861c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x19861cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198620: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x198620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198624: 0x0  nop
    ctx->pc = 0x198624u;
    // NOP
label_198628:
    // 0x198628: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x198628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x19862c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19862cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198630: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x198630u;
    {
        const bool branch_taken_0x198630 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x198634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198630u;
        // 0x198634: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198630) {
            ctx->pc = 0x19863Cu;
            goto label_19863c;
        }
    }
    ctx->pc = 0x198638u;
    // 0x198638: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x198638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19863c:
    // 0x19863c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19863cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x198640: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198640u;
    {
        const bool branch_taken_0x198640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198640u;
        // 0x198644: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198640) {
            ctx->pc = 0x198658u;
            goto label_198658;
        }
    }
    ctx->pc = 0x198648u;
    // 0x198648: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x198648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x19864c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198650: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198650u;
    {
        const bool branch_taken_0x198650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198650u;
        // 0x198654: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198650) {
            ctx->pc = 0x19865Cu;
            goto label_19865c;
        }
    }
    ctx->pc = 0x198658u;
label_198658:
    // 0x198658: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19865c:
    // 0x19865c: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x19865cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x198660: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x198660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x198664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198668: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x198668u;
    {
        const bool branch_taken_0x198668 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x19866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198668u;
        // 0x19866c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198668) {
            ctx->pc = 0x198674u;
            goto label_198674;
        }
    }
    ctx->pc = 0x198670u;
    // 0x198670: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x198670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_198674:
    // 0x198674: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x198674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x198678: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198678u;
    {
        const bool branch_taken_0x198678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198678u;
        // 0x19867c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198678) {
            ctx->pc = 0x198690u;
            goto label_198690;
        }
    }
    ctx->pc = 0x198680u;
    // 0x198680: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x198680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x198684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198688: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198688u;
    {
        const bool branch_taken_0x198688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198688u;
        // 0x19868c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198688) {
            ctx->pc = 0x198694u;
            goto label_198694;
        }
    }
    ctx->pc = 0x198690u;
label_198690:
    // 0x198690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198694:
    // 0x198694: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x198694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198698: 0xc051d52  jal         func_147548
    ctx->pc = 0x198698u;
    SET_GPR_U32(ctx, 31, 0x1986A0u);
    ctx->pc = 0x19869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198698u;
    // 0x19869c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x198698u, 0x1986A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1986A0u;
label_1986a0:
    // 0x1986a0: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1986a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1986a4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1986A4u;
    {
        const bool branch_taken_0x1986a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1986A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986A4u;
        // 0x1986a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986a4) {
            ctx->pc = 0x198628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198628;
        }
    }
    ctx->pc = 0x1986ACu;
label_1986ac:
    // 0x1986ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1986acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1986b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1986b4: 0xc0662b2  jal         func_198AC8
    ctx->pc = 0x1986B4u;
    SET_GPR_U32(ctx, 31, 0x1986BCu);
    ctx->pc = 0x1986B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1986B4u;
    // 0x1986b8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198AC8u, 0x1986B4u, 0x1986BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1986BCu;
label_1986bc:
    // 0x1986bc: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1986bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1986c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1986c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1986c4: 0xa64209d4  sh          $v0, 0x9D4($s2)
    ctx->pc = 0x1986c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2516), (uint16_t)GPR_U32(ctx, 2));
    // 0x1986c8: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x1986c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1986cc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1986CCu;
    {
        const bool branch_taken_0x1986cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986CCu;
        // 0x1986d0: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986cc) {
            ctx->pc = 0x19876Cu;
            goto label_19876c;
        }
    }
    ctx->pc = 0x1986D4u;
label_1986d4:
    // 0x1986d4: 0x964209d4  lhu         $v0, 0x9D4($s2)
    ctx->pc = 0x1986d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2516)));
    // 0x1986d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1986d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1986dc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1986dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1986e0: 0x1c600023  bgtz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1986E0u;
    {
        const bool branch_taken_0x1986e0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1986E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986E0u;
        // 0x1986e4: 0xa64209d4  sh          $v0, 0x9D4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2516), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986e0) {
            ctx->pc = 0x198770u;
            goto label_198770;
        }
    }
    ctx->pc = 0x1986E8u;
    // 0x1986e8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1986e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1986ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1986ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1986f0: 0x8e440604  lw          $a0, 0x604($s2)
    ctx->pc = 0x1986f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
    // 0x1986f4: 0xa64209d4  sh          $v0, 0x9D4($s2)
    ctx->pc = 0x1986f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2516), (uint16_t)GPR_U32(ctx, 2));
    // 0x1986f8: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x1986f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1986fc: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1986fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x198700: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x198700u;
    {
        const bool branch_taken_0x198700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x198704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198700u;
        // 0x198704: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198700) {
            ctx->pc = 0x198770u;
            goto label_198770;
        }
    }
    ctx->pc = 0x198708u;
    // 0x198708: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x198708u;
    SET_GPR_U32(ctx, 31, 0x198710u);
    ctx->pc = 0x19870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198708u;
    // 0x19870c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x198708u, 0x198710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198710u;
label_198710:
    // 0x198710: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x198710u;
    {
        const bool branch_taken_0x198710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198710u;
        // 0x198714: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198710) {
            ctx->pc = 0x198774u;
            goto label_198774;
        }
    }
    ctx->pc = 0x198718u;
label_198718:
    // 0x198718: 0x964209d4  lhu         $v0, 0x9D4($s2)
    ctx->pc = 0x198718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2516)));
    // 0x19871c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x19871cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x198720: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x198720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198724: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x198728: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x198728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x19872c: 0xa64209d4  sh          $v0, 0x9D4($s2)
    ctx->pc = 0x19872cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2516), (uint16_t)GPR_U32(ctx, 2));
    // 0x198730: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x198730u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x198734: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198738: 0x0  nop
    ctx->pc = 0x198738u;
    // NOP
    // 0x19873c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19873cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x198740: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x198740u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x198744: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x198744u;
    {
        const bool branch_taken_0x198744 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x198748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198744u;
        // 0x198748: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x198744) {
            ctx->pc = 0x198770u;
            goto label_198770;
        }
    }
    ctx->pc = 0x19874Cu;
    // 0x19874c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x198750: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x198750u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x198754: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x198754u;
    {
        const bool branch_taken_0x198754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198754u;
        // 0x198758: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198754) {
            ctx->pc = 0x19876Cu;
            goto label_19876c;
        }
    }
    ctx->pc = 0x19875Cu;
label_19875c:
    // 0x19875c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19875cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198760: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x198760u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x198764: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x198764u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
label_198768:
    // 0x198768: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x198768u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_19876c:
    // 0x19876c: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x19876cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_198770:
    // 0x198770: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x198770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_198774:
    // 0x198774: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x198774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x198778: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x198778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19877c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x19877cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x198780: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x198780u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198784: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x198784u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x198788: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x198788u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19878c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19878cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x198790: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x198790u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198794: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x198794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198798: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x198798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x19879c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x19879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1987a0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1987a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1987a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1987A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1987A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987A4u;
        // 0x1987a8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1987A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1987ACu;
    // 0x1987ac: 0x0  nop
    ctx->pc = 0x1987acu;
    // NOP
    ctx->pc = 0x1987b0u;
}
