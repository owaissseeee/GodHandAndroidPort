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

// Function: func_00300EF8
// Address: 0x300ef8 - 0x302790
void func_00300EF8_0x300ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00300EF8_0x300ef8");
#endif

    switch (ctx->pc) {
        case 0x300f98u: goto label_300f98;
        case 0x300fc8u: goto label_300fc8;
        case 0x300fe4u: goto label_300fe4;
        case 0x301014u: goto label_301014;
        case 0x3012e0u: goto label_3012e0;
        case 0x301334u: goto label_301334;
        case 0x301418u: goto label_301418;
        case 0x3014c0u: goto label_3014c0;
        case 0x3014dcu: goto label_3014dc;
        case 0x301640u: goto label_301640;
        case 0x3016e8u: goto label_3016e8;
        case 0x301734u: goto label_301734;
        case 0x3017acu: goto label_3017ac;
        case 0x301828u: goto label_301828;
        case 0x301838u: goto label_301838;
        case 0x3018b4u: goto label_3018b4;
        case 0x301998u: goto label_301998;
        case 0x3019b4u: goto label_3019b4;
        case 0x3019d0u: goto label_3019d0;
        case 0x3019ecu: goto label_3019ec;
        case 0x301a08u: goto label_301a08;
        case 0x301a24u: goto label_301a24;
        case 0x301a90u: goto label_301a90;
        case 0x301ae0u: goto label_301ae0;
        case 0x301b0cu: goto label_301b0c;
        case 0x301b38u: goto label_301b38;
        case 0x301b54u: goto label_301b54;
        case 0x301b70u: goto label_301b70;
        case 0x301b8cu: goto label_301b8c;
        case 0x301c4cu: goto label_301c4c;
        case 0x301c98u: goto label_301c98;
        case 0x301cc8u: goto label_301cc8;
        case 0x301d74u: goto label_301d74;
        case 0x301d98u: goto label_301d98;
        case 0x301dbcu: goto label_301dbc;
        case 0x301de4u: goto label_301de4;
        case 0x301e50u: goto label_301e50;
        case 0x301edcu: goto label_301edc;
        case 0x301f08u: goto label_301f08;
        case 0x301f34u: goto label_301f34;
        case 0x301f54u: goto label_301f54;
        case 0x301facu: goto label_301fac;
        case 0x302074u: goto label_302074;
        case 0x302080u: goto label_302080;
        case 0x30208cu: goto label_30208c;
        case 0x3022acu: goto label_3022ac;
        case 0x3022e4u: goto label_3022e4;
        case 0x3022f0u: goto label_3022f0;
        case 0x3022fcu: goto label_3022fc;
        case 0x3026a8u: goto label_3026a8;
        default: break;
    }

    ctx->pc = 0x300ef8u;

    // 0x300ef8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x300ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x300efc: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x300efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x300f00: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x300f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x300f04: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x300f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x300f08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x300f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300f0c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x300f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x300f10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x300f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300f14: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x300f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x300f18: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x300f18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300f1c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x300f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x300f20: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x300f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x300f24: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x300f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x300f28: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x300f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x300f2c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x300f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x300f30: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x300f30u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x300f34: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x300f34u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x300f38: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x300f38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x300f3c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x300f3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x300f40: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x300f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x300f44: 0x92830048  lbu         $v1, 0x48($s4)
    ctx->pc = 0x300f44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x300f48: 0xae220220  sw          $v0, 0x220($s1)
    ctx->pc = 0x300f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 2));
    // 0x300f4c: 0xa628023c  sh          $t0, 0x23C($s1)
    ctx->pc = 0x300f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 572), (uint16_t)GPR_U32(ctx, 8));
    // 0x300f50: 0x3b9fa  dsrl        $s7, $v1, 7
    ctx->pc = 0x300f50u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) >> 7);
    // 0x300f54: 0xae2a0108  sw          $t2, 0x108($s1)
    ctx->pc = 0x300f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 10));
    // 0x300f58: 0xae290114  sw          $t1, 0x114($s1)
    ctx->pc = 0x300f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 9));
    // 0x300f5c: 0xae2b010c  sw          $t3, 0x10C($s1)
    ctx->pc = 0x300f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 11));
    // 0x300f60: 0x8e820078  lw          $v0, 0x78($s4)
    ctx->pc = 0x300f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x300f64: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x300f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x300f68: 0x8283004c  lb          $v1, 0x4C($s4)
    ctx->pc = 0x300f68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x300f6c: 0x97b00170  lhu         $s0, 0x170($sp)
    ctx->pc = 0x300f6cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x300f70: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x300f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x300f74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300F74u;
    {
        const bool branch_taken_0x300f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F74u;
        // 0x300f78: 0x825600be  lb          $s6, 0xBE($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 190)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f74) {
            ctx->pc = 0x300F84u;
            goto label_300f84;
        }
    }
    ctx->pc = 0x300F7Cu;
    // 0x300f7c: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x300f7cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x300f80: 0x62b00b  movn        $s6, $v1, $v0
    ctx->pc = 0x300f80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
label_300f84:
    // 0x300f84: 0x2413fffc  addiu       $s3, $zero, -0x4
    ctx->pc = 0x300f84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x300f88: 0x12d30004  beq         $s6, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x300F88u;
    {
        const bool branch_taken_0x300f88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 19));
        ctx->pc = 0x300F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300F88u;
        // 0x300f8c: 0x8fa20150  lw          $v0, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300f88) {
            ctx->pc = 0x300F9Cu;
            goto label_300f9c;
        }
    }
    ctx->pc = 0x300F90u;
    // 0x300f90: 0xc0ad756  jal         func_2B5D58
    ctx->pc = 0x300F90u;
    SET_GPR_U32(ctx, 31, 0x300F98u);
    ctx->pc = 0x300F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300F90u;
    // 0x300f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5D58u, 0x300F90u, 0x300F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300F98u;
label_300f98:
    // 0x300f98: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x300f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_300f9c:
    // 0x300f9c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x300f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x300fa0: 0xa630022c  sh          $s0, 0x22C($s1)
    ctx->pc = 0x300fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 556), (uint16_t)GPR_U32(ctx, 16));
    // 0x300fa4: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x300fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x300fa8: 0x247019a0  addiu       $s0, $v1, 0x19A0
    ctx->pc = 0x300fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6560));
    // 0x300fac: 0xae320110  sw          $s2, 0x110($s1)
    ctx->pc = 0x300facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 18));
    // 0x300fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300fb4: 0x9242012a  lbu         $v0, 0x12A($s2)
    ctx->pc = 0x300fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 298)));
    // 0x300fb8: 0xa2220101  sb          $v0, 0x101($s1)
    ctx->pc = 0x300fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 257), (uint8_t)GPR_U32(ctx, 2));
    // 0x300fbc: 0x8645028c  lh          $a1, 0x28C($s2)
    ctx->pc = 0x300fbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 652)));
    // 0x300fc0: 0xc0c182c  jal         func_3060B0
    ctx->pc = 0x300FC0u;
    SET_GPR_U32(ctx, 31, 0x300FC8u);
    ctx->pc = 0x300FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300FC0u;
    // 0x300fc4: 0x9246012e  lbu         $a2, 0x12E($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 302)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3060B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3060B0u, 0x300FC0u, 0x300FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300FC8u;
label_300fc8:
    // 0x300fc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x300fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300fcc: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x300FCCu;
    {
        const bool branch_taken_0x300fcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x300fcc) {
            ctx->pc = 0x300FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300FCCu;
            // 0x300fd0: 0xae240118  sw          $a0, 0x118($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300FECu;
            goto label_300fec;
        }
    }
    ctx->pc = 0x300FD4u;
    // 0x300fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300fdc: 0xc0c182c  jal         func_3060B0
    ctx->pc = 0x300FDCu;
    SET_GPR_U32(ctx, 31, 0x300FE4u);
    ctx->pc = 0x300FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300FDCu;
    // 0x300fe0: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3060B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3060B0u, 0x300FDCu, 0x300FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300FE4u;
label_300fe4:
    // 0x300fe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x300fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300fe8: 0xae240118  sw          $a0, 0x118($s1)
    ctx->pc = 0x300fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 4));
label_300fec:
    // 0x300fec: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x300fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x300ff0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x300ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x300ff4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x300ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x300ff8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x300FF8u;
    {
        const bool branch_taken_0x300ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ff8) {
            ctx->pc = 0x300FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300FF8u;
            // 0x300ffc: 0xae24025c  sw          $a0, 0x25C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30101Cu;
            goto label_30101c;
        }
    }
    ctx->pc = 0x301000u;
    // 0x301000: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x301000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x301004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301008: 0x90460297  lbu         $a2, 0x297($v0)
    ctx->pc = 0x301008u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 663)));
    // 0x30100c: 0xc0c182c  jal         func_3060B0
    ctx->pc = 0x30100Cu;
    SET_GPR_U32(ctx, 31, 0x301014u);
    ctx->pc = 0x301010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30100Cu;
    // 0x301010: 0x8445028c  lh          $a1, 0x28C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 652)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3060B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3060B0u, 0x30100Cu, 0x301014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301014u;
label_301014:
    // 0x301014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x301014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301018: 0xae24025c  sw          $a0, 0x25C($s1)
    ctx->pc = 0x301018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 4));
label_30101c:
    // 0x30101c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x30101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x301020: 0xa622023a  sh          $v0, 0x23A($s1)
    ctx->pc = 0x301020u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 570), (uint16_t)GPR_U32(ctx, 2));
    // 0x301024: 0x9242012d  lbu         $v0, 0x12D($s2)
    ctx->pc = 0x301024u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 301)));
    // 0x301028: 0x9243012c  lbu         $v1, 0x12C($s2)
    ctx->pc = 0x301028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x30102c: 0xa2220246  sb          $v0, 0x246($s1)
    ctx->pc = 0x30102cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 582), (uint8_t)GPR_U32(ctx, 2));
    // 0x301030: 0xa2230245  sb          $v1, 0x245($s1)
    ctx->pc = 0x301030u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 581), (uint8_t)GPR_U32(ctx, 3));
    // 0x301034: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x301034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301038: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x301038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30103c: 0xe6200214  swc1        $f0, 0x214($s1)
    ctx->pc = 0x30103cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 532), bits); }
    // 0x301040: 0xe6210218  swc1        $f1, 0x218($s1)
    ctx->pc = 0x301040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 536), bits); }
    // 0x301044: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x301044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x301048: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x301048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x30104c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30104Cu;
    {
        const bool branch_taken_0x30104c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30104c) {
            ctx->pc = 0x301050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30104Cu;
            // 0x301050: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301064u;
            goto label_301064;
        }
    }
    ctx->pc = 0x301054u;
    // 0x301054: 0x824200be  lb          $v0, 0xBE($s2)
    ctx->pc = 0x301054u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 190)));
    // 0x301058: 0x5453000a  bnel        $v0, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x301058u;
    {
        const bool branch_taken_0x301058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x301058) {
            ctx->pc = 0x30105Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301058u;
            // 0x30105c: 0xc6400008  lwc1        $f0, 0x8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301084u;
            goto label_301084;
        }
    }
    ctx->pc = 0x301060u;
    // 0x301060: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x301060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_301064:
    // 0x301064: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x301064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x301068: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x301068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30106c: 0x3c04feff  lui         $a0, 0xFEFF
    ctx->pc = 0x30106cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65279 << 16));
    // 0x301070: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x301074: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x301074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x301078: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x301078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x30107c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x30107Cu;
    {
        const bool branch_taken_0x30107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30107Cu;
        // 0x301080: 0xae200114  sw          $zero, 0x114($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30107c) {
            ctx->pc = 0x30113Cu;
            goto label_30113c;
        }
    }
    ctx->pc = 0x301084u;
label_301084:
    // 0x301084: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x301084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x301088: 0xe6200210  swc1        $f0, 0x210($s1)
    ctx->pc = 0x301088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 528), bits); }
    // 0x30108c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x30108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x301090: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x301094: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x301094u;
    {
        const bool branch_taken_0x301094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301094) {
            ctx->pc = 0x301098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301094u;
            // 0x301098: 0x8e23011c  lw          $v1, 0x11C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3010B0u;
            goto label_3010b0;
        }
    }
    ctx->pc = 0x30109Cu;
    // 0x30109c: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x30109cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x3010a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3010a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3010a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3010a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3010a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3010A8u;
    {
        const bool branch_taken_0x3010a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3010ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010A8u;
        // 0x3010ac: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010a8) {
            ctx->pc = 0x3010C0u;
            goto label_3010c0;
        }
    }
    ctx->pc = 0x3010B0u;
label_3010b0:
    // 0x3010b0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3010b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3010b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3010b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3010b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3010b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3010bc: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x3010bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
label_3010c0:
    // 0x3010c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3010c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3010c4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3010c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3010c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3010c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3010cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3010CCu;
    {
        const bool branch_taken_0x3010cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3010D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010CCu;
        // 0x3010d0: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010cc) {
            ctx->pc = 0x3010E4u;
            goto label_3010e4;
        }
    }
    ctx->pc = 0x3010D4u;
    // 0x3010d4: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x3010d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x3010d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3010d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3010dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3010DCu;
    {
        const bool branch_taken_0x3010dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3010E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3010DCu;
        // 0x3010e0: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3010dc) {
            ctx->pc = 0x3010F8u;
            goto label_3010f8;
        }
    }
    ctx->pc = 0x3010E4u;
label_3010e4:
    // 0x3010e4: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x3010e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x3010e8: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x3010e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x3010ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3010ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3010f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3010f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3010f4: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x3010f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
label_3010f8:
    // 0x3010f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3010f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3010fc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3010fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x301100: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x301104: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x301104u;
    {
        const bool branch_taken_0x301104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301104u;
        // 0x301108: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301104) {
            ctx->pc = 0x30111Cu;
            goto label_30111c;
        }
    }
    ctx->pc = 0x30110Cu;
    // 0x30110c: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x30110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x301110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x301110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x301114: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x301114u;
    {
        const bool branch_taken_0x301114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301114u;
        // 0x301118: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301114) {
            ctx->pc = 0x301130u;
            goto label_301130;
        }
    }
    ctx->pc = 0x30111Cu;
label_30111c:
    // 0x30111c: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x30111cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x301120: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x301120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x301124: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x301124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x301128: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x301128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30112c: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x30112cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
label_301130:
    // 0x301130: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x301130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x301134: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x301134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x301138: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x301138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_30113c:
    // 0x30113c: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x30113cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    // 0x301140: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x301140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x301144: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x301144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x301148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x301148u;
    {
        const bool branch_taken_0x301148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301148u;
        // 0x30114c: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301148) {
            ctx->pc = 0x301160u;
            goto label_301160;
        }
    }
    ctx->pc = 0x301150u;
    // 0x301150: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x301150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x301154: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x301154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x301158: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x301158u;
    {
        const bool branch_taken_0x301158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301158u;
        // 0x30115c: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301158) {
            ctx->pc = 0x301174u;
            goto label_301174;
        }
    }
    ctx->pc = 0x301160u;
label_301160:
    // 0x301160: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x301160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x301164: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x301164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x301168: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x301168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30116c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x30116cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x301170: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x301170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
label_301174:
    // 0x301174: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x301174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x301178: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x301178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x30117c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30117cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x301180: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x301180u;
    {
        const bool branch_taken_0x301180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301180u;
        // 0x301184: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301180) {
            ctx->pc = 0x301198u;
            goto label_301198;
        }
    }
    ctx->pc = 0x301188u;
    // 0x301188: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x301188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x30118c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30118cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x301190: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x301190u;
    {
        const bool branch_taken_0x301190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301190u;
        // 0x301194: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301190) {
            ctx->pc = 0x3011ACu;
            goto label_3011ac;
        }
    }
    ctx->pc = 0x301198u;
label_301198:
    // 0x301198: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x301198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x30119c: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x30119cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x3011a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3011a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3011a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3011a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3011a8: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x3011a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
label_3011ac:
    // 0x3011ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3011acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3011b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3011b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3011b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3011B4u;
    {
        const bool branch_taken_0x3011b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3011B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011B4u;
        // 0x3011b8: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011b4) {
            ctx->pc = 0x3011C4u;
            goto label_3011c4;
        }
    }
    ctx->pc = 0x3011BCu;
    // 0x3011bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3011BCu;
    {
        const bool branch_taken_0x3011bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3011C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011BCu;
        // 0x3011c0: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011bc) {
            ctx->pc = 0x3011CCu;
            goto label_3011cc;
        }
    }
    ctx->pc = 0x3011C4u;
label_3011c4:
    // 0x3011c4: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x3011c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x3011c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3011c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3011cc:
    // 0x3011cc: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x3011ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    // 0x3011d0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3011d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3011d4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3011d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3011d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3011d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3011dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3011DCu;
    {
        const bool branch_taken_0x3011dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3011E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011DCu;
        // 0x3011e0: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011dc) {
            ctx->pc = 0x3011ECu;
            goto label_3011ec;
        }
    }
    ctx->pc = 0x3011E4u;
    // 0x3011e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3011E4u;
    {
        const bool branch_taken_0x3011e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3011E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3011E4u;
        // 0x3011e8: 0x34420800  ori         $v0, $v0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3011e4) {
            ctx->pc = 0x3011F4u;
            goto label_3011f4;
        }
    }
    ctx->pc = 0x3011ECu;
label_3011ec:
    // 0x3011ec: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x3011ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x3011f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3011f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3011f4:
    // 0x3011f4: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x3011f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    // 0x3011f8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3011f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3011fc: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x3011fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x301200: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x301204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x301204u;
    {
        const bool branch_taken_0x301204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301204u;
        // 0x301208: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301204) {
            ctx->pc = 0x301214u;
            goto label_301214;
        }
    }
    ctx->pc = 0x30120Cu;
    // 0x30120c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30120Cu;
    {
        const bool branch_taken_0x30120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30120Cu;
        // 0x301210: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30120c) {
            ctx->pc = 0x30121Cu;
            goto label_30121c;
        }
    }
    ctx->pc = 0x301214u;
label_301214:
    // 0x301214: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x301214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x301218: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30121c:
    // 0x30121c: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x30121cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    // 0x301220: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x301220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x301224: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x301224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x301228: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30122c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30122Cu;
    {
        const bool branch_taken_0x30122c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30122Cu;
        // 0x301230: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30122c) {
            ctx->pc = 0x30123Cu;
            goto label_30123c;
        }
    }
    ctx->pc = 0x301234u;
    // 0x301234: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x301234u;
    {
        const bool branch_taken_0x301234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301234u;
        // 0x301238: 0x34420200  ori         $v0, $v0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301234) {
            ctx->pc = 0x301244u;
            goto label_301244;
        }
    }
    ctx->pc = 0x30123Cu;
label_30123c:
    // 0x30123c: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x30123cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x301240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_301244:
    // 0x301244: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x301244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    // 0x301248: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x301248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x30124c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x30124cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x301250: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x301250u;
    {
        const bool branch_taken_0x301250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301250) {
            ctx->pc = 0x301254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301250u;
            // 0x301254: 0x8e820048  lw          $v0, 0x48($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301284u;
            goto label_301284;
        }
    }
    ctx->pc = 0x301258u;
    // 0x301258: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x301258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x30125c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x30125cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x301260: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x301264: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x301264u;
    {
        const bool branch_taken_0x301264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301264u;
        // 0x301268: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301264) {
            ctx->pc = 0x301274u;
            goto label_301274;
        }
    }
    ctx->pc = 0x30126Cu;
    // 0x30126c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30126Cu;
    {
        const bool branch_taken_0x30126c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30126Cu;
        // 0x301270: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30126c) {
            ctx->pc = 0x30127Cu;
            goto label_30127c;
        }
    }
    ctx->pc = 0x301274u;
label_301274:
    // 0x301274: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x301274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x301278: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30127c:
    // 0x30127c: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x30127cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    // 0x301280: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x301280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_301284:
    // 0x301284: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x301284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x301288: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x301288u;
    {
        const bool branch_taken_0x301288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301288u;
        // 0x30128c: 0x2403feff  addiu       $v1, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301288) {
            ctx->pc = 0x30129Cu;
            goto label_30129c;
        }
    }
    ctx->pc = 0x301290u;
    // 0x301290: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x301290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x301294: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x301298: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x301298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
label_30129c:
    // 0x30129c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x30129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3012a0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3012a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x3012a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3012a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3012a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3012A8u;
    {
        const bool branch_taken_0x3012a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3012ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012A8u;
        // 0x3012ac: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012a8) {
            ctx->pc = 0x3012B8u;
            goto label_3012b8;
        }
    }
    ctx->pc = 0x3012B0u;
    // 0x3012b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3012B0u;
    {
        const bool branch_taken_0x3012b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3012B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012B0u;
        // 0x3012b4: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012b0) {
            ctx->pc = 0x3012C0u;
            goto label_3012c0;
        }
    }
    ctx->pc = 0x3012B8u;
label_3012b8:
    // 0x3012b8: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x3012b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x3012bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3012bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3012c0:
    // 0x3012c0: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x3012c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    // 0x3012c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3012c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3012c8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3012c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x3012cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3012ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3012d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3012D0u;
    {
        const bool branch_taken_0x3012d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3012d0) {
            ctx->pc = 0x3012D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3012D0u;
            // 0x3012d4: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3012E8u;
            goto label_3012e8;
        }
    }
    ctx->pc = 0x3012D8u;
    // 0x3012d8: 0xc0c7426  jal         func_31D098
    ctx->pc = 0x3012D8u;
    SET_GPR_U32(ctx, 31, 0x3012E0u);
    ctx->pc = 0x3012DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3012D8u;
    // 0x3012dc: 0x26240220  addiu       $a0, $s1, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D098u, 0x3012D8u, 0x3012E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3012E0u;
label_3012e0:
    // 0x3012e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3012E0u;
    {
        const bool branch_taken_0x3012e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3012E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012E0u;
        // 0x3012e4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012e0) {
            ctx->pc = 0x3012ECu;
            goto label_3012ec;
        }
    }
    ctx->pc = 0x3012E8u;
label_3012e8:
    // 0x3012e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3012e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3012ec:
    // 0x3012ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3012ECu;
    {
        const bool branch_taken_0x3012ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3012F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012ECu;
        // 0x3012f0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012ec) {
            ctx->pc = 0x301304u;
            goto label_301304;
        }
    }
    ctx->pc = 0x3012F4u;
    // 0x3012f4: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x3012f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x3012f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3012f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3012fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3012FCu;
    {
        const bool branch_taken_0x3012fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3012FCu;
        // 0x301300: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3012fc) {
            ctx->pc = 0x301318u;
            goto label_301318;
        }
    }
    ctx->pc = 0x301304u;
label_301304:
    // 0x301304: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x301304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x301308: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x301308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x30130c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30130cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x301310: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x301310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x301314: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x301314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
label_301318:
    // 0x301318: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x301318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30131c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x301320: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x301320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x301324: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x301324u;
    {
        const bool branch_taken_0x301324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301324) {
            ctx->pc = 0x301328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301324u;
            // 0x301328: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30133Cu;
            goto label_30133c;
        }
    }
    ctx->pc = 0x30132Cu;
    // 0x30132c: 0xc0c7426  jal         func_31D098
    ctx->pc = 0x30132Cu;
    SET_GPR_U32(ctx, 31, 0x301334u);
    ctx->pc = 0x301330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30132Cu;
    // 0x301330: 0x26240220  addiu       $a0, $s1, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D098u, 0x30132Cu, 0x301334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301334u;
label_301334:
    // 0x301334: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x301334u;
    {
        const bool branch_taken_0x301334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301334u;
        // 0x301338: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301334) {
            ctx->pc = 0x301340u;
            goto label_301340;
        }
    }
    ctx->pc = 0x30133Cu;
label_30133c:
    // 0x30133c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x30133cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_301340:
    // 0x301340: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x301340u;
    {
        const bool branch_taken_0x301340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301340u;
        // 0x301344: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301340) {
            ctx->pc = 0x301358u;
            goto label_301358;
        }
    }
    ctx->pc = 0x301348u;
    // 0x301348: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x301348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x30134c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30134cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x301350: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x301350u;
    {
        const bool branch_taken_0x301350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301350u;
        // 0x301354: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301350) {
            ctx->pc = 0x30136Cu;
            goto label_30136c;
        }
    }
    ctx->pc = 0x301358u;
label_301358:
    // 0x301358: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x301358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x30135c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x30135cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x301360: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x301360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x301364: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x301364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x301368: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x301368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
label_30136c:
    // 0x30136c: 0x824200bf  lb          $v0, 0xBF($s2)
    ctx->pc = 0x30136cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 191)));
    // 0x301370: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x301370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x301374: 0xa2220103  sb          $v0, 0x103($s1)
    ctx->pc = 0x301374u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 259), (uint8_t)GPR_U32(ctx, 2));
    // 0x301378: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x301378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30137c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30137cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x301380: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x301380u;
    {
        const bool branch_taken_0x301380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x301384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301380u;
        // 0x301384: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301380) {
            ctx->pc = 0x301398u;
            goto label_301398;
        }
    }
    ctx->pc = 0x301388u;
    // 0x301388: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x301388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x30138c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30138cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x301390: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x301390u;
    {
        const bool branch_taken_0x301390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301390u;
        // 0x301394: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301390) {
            ctx->pc = 0x3013ACu;
            goto label_3013ac;
        }
    }
    ctx->pc = 0x301398u;
label_301398:
    // 0x301398: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x301398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x30139c: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x30139cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x3013a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3013a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3013a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3013a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3013a8: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x3013a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
label_3013ac:
    // 0x3013ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3013acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3013b0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3013b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3013b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3013b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3013b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3013B8u;
    {
        const bool branch_taken_0x3013b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3013BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013B8u;
        // 0x3013bc: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3013b8) {
            ctx->pc = 0x3013D0u;
            goto label_3013d0;
        }
    }
    ctx->pc = 0x3013C0u;
    // 0x3013c0: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x3013c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x3013c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3013c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3013c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3013C8u;
    {
        const bool branch_taken_0x3013c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3013CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3013C8u;
        // 0x3013cc: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3013c8) {
            ctx->pc = 0x3013E4u;
            goto label_3013e4;
        }
    }
    ctx->pc = 0x3013D0u;
label_3013d0:
    // 0x3013d0: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x3013d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x3013d4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3013d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3013d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3013d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3013dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3013dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3013e0: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x3013e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
label_3013e4:
    // 0x3013e4: 0x92420130  lbu         $v0, 0x130($s2)
    ctx->pc = 0x3013e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x3013e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3013e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3013ec: 0x0  nop
    ctx->pc = 0x3013ecu;
    // NOP
    // 0x3013f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3013f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3013f4: 0xa222023f  sb          $v0, 0x23F($s1)
    ctx->pc = 0x3013f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 575), (uint8_t)GPR_U32(ctx, 2));
    // 0x3013f8: 0xa222023e  sb          $v0, 0x23E($s1)
    ctx->pc = 0x3013f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 574), (uint8_t)GPR_U32(ctx, 2));
    // 0x3013fc: 0xe6200240  swc1        $f0, 0x240($s1)
    ctx->pc = 0x3013fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
    // 0x301400: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x301400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x301404: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x301404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x301408: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x301408u;
    {
        const bool branch_taken_0x301408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301408u;
        // 0x30140c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301408) {
            ctx->pc = 0x30143Cu;
            goto label_30143c;
        }
    }
    ctx->pc = 0x301410u;
    // 0x301410: 0xc0c7426  jal         func_31D098
    ctx->pc = 0x301410u;
    SET_GPR_U32(ctx, 31, 0x301418u);
    ctx->pc = 0x301414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301410u;
    // 0x301414: 0x26240220  addiu       $a0, $s1, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D098u, 0x301410u, 0x301418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301418u;
label_301418:
    // 0x301418: 0x9243012c  lbu         $v1, 0x12C($s2)
    ctx->pc = 0x301418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x30141c: 0x9244012d  lbu         $a0, 0x12D($s2)
    ctx->pc = 0x30141cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 301)));
    // 0x301420: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x301420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x301424: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x301424u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x301428: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x301428u;
    {
        const bool branch_taken_0x301428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301428) {
            ctx->pc = 0x30142Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301428u;
            // 0x30142c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x301430u;
            goto label_301430;
        }
    }
    ctx->pc = 0x301430u;
label_301430:
    // 0x301430: 0x2810  mfhi        $a1
    ctx->pc = 0x301430u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x301434: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x301434u;
    {
        const bool branch_taken_0x301434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301434u;
        // 0x301438: 0xa2250244  sb          $a1, 0x244($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 580), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301434) {
            ctx->pc = 0x301464u;
            goto label_301464;
        }
    }
    ctx->pc = 0x30143Cu;
label_30143c:
    // 0x30143c: 0x8244012f  lb          $a0, 0x12F($s2)
    ctx->pc = 0x30143cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 303)));
    // 0x301440: 0x4820008  bltzl       $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x301440u;
    {
        const bool branch_taken_0x301440 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x301440) {
            ctx->pc = 0x301444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301440u;
            // 0x301444: 0xa2250244  sb          $a1, 0x244($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 580), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301464u;
            goto label_301464;
        }
    }
    ctx->pc = 0x301448u;
    // 0x301448: 0x9242012c  lbu         $v0, 0x12C($s2)
    ctx->pc = 0x301448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x30144c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30144cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301450: 0x9243012d  lbu         $v1, 0x12D($s2)
    ctx->pc = 0x301450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 301)));
    // 0x301454: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x301454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x301458: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x301458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30145c: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x30145cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x301460: 0xa2250244  sb          $a1, 0x244($s1)
    ctx->pc = 0x301460u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 580), (uint8_t)GPR_U32(ctx, 5));
label_301464:
    // 0x301464: 0x824202c9  lb          $v0, 0x2C9($s2)
    ctx->pc = 0x301464u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 713)));
    // 0x301468: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x301468u;
    {
        const bool branch_taken_0x301468 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x301468) {
            ctx->pc = 0x30146Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301468u;
            // 0x30146c: 0xa22202a0  sb          $v0, 0x2A0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 672), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301480u;
            goto label_301480;
        }
    }
    ctx->pc = 0x301470u;
    // 0x301470: 0x9242012c  lbu         $v0, 0x12C($s2)
    ctx->pc = 0x301470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 300)));
    // 0x301474: 0x9243012d  lbu         $v1, 0x12D($s2)
    ctx->pc = 0x301474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 301)));
    // 0x301478: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x301478u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30147c: 0xa22202a0  sb          $v0, 0x2A0($s1)
    ctx->pc = 0x30147cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 672), (uint8_t)GPR_U32(ctx, 2));
label_301480:
    // 0x301480: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x301480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x301484: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x301484u;
    {
        const bool branch_taken_0x301484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301484) {
            ctx->pc = 0x301488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301484u;
            // 0x301488: 0x8642000c  lh          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301490u;
            goto label_301490;
        }
    }
    ctx->pc = 0x30148Cu;
    // 0x30148c: 0x86820044  lh          $v0, 0x44($s4)
    ctx->pc = 0x30148cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 68)));
label_301490:
    // 0x301490: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x301490u;
    {
        const bool branch_taken_0x301490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301490u;
        // 0x301494: 0xa6220238  sh          $v0, 0x238($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 568), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301490) {
            ctx->pc = 0x3014A0u;
            goto label_3014a0;
        }
    }
    ctx->pc = 0x301498u;
    // 0x301498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x301498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30149c: 0xa6220238  sh          $v0, 0x238($s1)
    ctx->pc = 0x30149cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 568), (uint16_t)GPR_U32(ctx, 2));
label_3014a0:
    // 0x3014a0: 0x92420290  lbu         $v0, 0x290($s2)
    ctx->pc = 0x3014a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 656)));
    // 0x3014a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3014a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3014a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3014a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3014ac: 0x14830066  bne         $a0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x3014ACu;
    {
        const bool branch_taken_0x3014ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3014B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3014ACu;
        // 0x3014b0: 0xa2220140  sb          $v0, 0x140($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 320), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3014ac) {
            ctx->pc = 0x301648u;
            goto label_301648;
        }
    }
    ctx->pc = 0x3014B4u;
    // 0x3014b4: 0x26300220  addiu       $s0, $s1, 0x220
    ctx->pc = 0x3014b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x3014b8: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x3014B8u;
    SET_GPR_U32(ctx, 31, 0x3014C0u);
    ctx->pc = 0x3014BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3014B8u;
    // 0x3014bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x3014B8u, 0x3014C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014C0u;
label_3014c0:
    // 0x3014c0: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x3014c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3014c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3014c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3014c8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3014c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3014cc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3014ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3014d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3014d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3014d4: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x3014D4u;
    SET_GPR_U32(ctx, 31, 0x3014DCu);
    ctx->pc = 0x3014D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3014D4u;
    // 0x3014d8: 0xe6210144  swc1        $f1, 0x144($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x3014D4u, 0x3014DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3014DCu;
label_3014dc:
    // 0x3014dc: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x3014dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3014e0: 0xc642001c  lwc1        $f2, 0x1C($s2)
    ctx->pc = 0x3014e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3014e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3014e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3014e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3014e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3014ec: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x3014ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3014f0: 0x46011100  add.s       $f4, $f2, $f1
    ctx->pc = 0x3014f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3014f4: 0xe6240148  swc1        $f4, 0x148($s1)
    ctx->pc = 0x3014f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x3014f8: 0xc6450028  lwc1        $f5, 0x28($s2)
    ctx->pc = 0x3014f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3014fc: 0xe625014c  swc1        $f5, 0x14C($s1)
    ctx->pc = 0x3014fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 332), bits); }
    // 0x301500: 0xc646002c  lwc1        $f6, 0x2C($s2)
    ctx->pc = 0x301500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x301504: 0xe6260150  swc1        $f6, 0x150($s1)
    ctx->pc = 0x301504u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x301508: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x301508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30150c: 0xe6200154  swc1        $f0, 0x154($s1)
    ctx->pc = 0x30150cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
    // 0x301510: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x301510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301514: 0xe6210158  swc1        $f1, 0x158($s1)
    ctx->pc = 0x301514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 344), bits); }
    // 0x301518: 0x96440038  lhu         $a0, 0x38($s2)
    ctx->pc = 0x301518u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x30151c: 0xa624015c  sh          $a0, 0x15C($s1)
    ctx->pc = 0x30151cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 348), (uint16_t)GPR_U32(ctx, 4));
    // 0x301520: 0x9645003a  lhu         $a1, 0x3A($s2)
    ctx->pc = 0x301520u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 58)));
    // 0x301524: 0xa625015e  sh          $a1, 0x15E($s1)
    ctx->pc = 0x301524u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 5));
    // 0x301528: 0x9642003c  lhu         $v0, 0x3C($s2)
    ctx->pc = 0x301528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x30152c: 0xa6220160  sh          $v0, 0x160($s1)
    ctx->pc = 0x30152cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x301530: 0x9643003e  lhu         $v1, 0x3E($s2)
    ctx->pc = 0x301530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x301534: 0xa6200164  sh          $zero, 0x164($s1)
    ctx->pc = 0x301534u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x301538: 0xa6230162  sh          $v1, 0x162($s1)
    ctx->pc = 0x301538u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x30153c: 0xa6200166  sh          $zero, 0x166($s1)
    ctx->pc = 0x30153cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x301540: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x301540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301544: 0x46070032  c.eq.s      $f0, $f7
    ctx->pc = 0x301544u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301548: 0x0  nop
    ctx->pc = 0x301548u;
    // NOP
    // 0x30154c: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
    ctx->pc = 0x30154Cu;
    {
        const bool branch_taken_0x30154c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30154c) {
            ctx->pc = 0x301550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30154Cu;
            // 0x301550: 0x92420001  lbu         $v0, 0x1($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3015D8u;
            goto label_3015d8;
        }
    }
    ctx->pc = 0x301554u;
    // 0x301554: 0xc6210144  lwc1        $f1, 0x144($s1)
    ctx->pc = 0x301554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301558: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x301558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x30155c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x30155cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x301560: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x301560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x301564: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x301564u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301568: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x301568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x30156c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x30156cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x301570: 0x0  nop
    ctx->pc = 0x301570u;
    // NOP
    // 0x301574: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x301574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x301578: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x301578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30157c: 0x0  nop
    ctx->pc = 0x30157cu;
    // NOP
    // 0x301580: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x301580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x301584: 0xe6210144  swc1        $f1, 0x144($s1)
    ctx->pc = 0x301584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x301588: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x301588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30158c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x30158cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x301590: 0xe6200148  swc1        $f0, 0x148($s1)
    ctx->pc = 0x301590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x301594: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x301594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301598: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x301598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x30159c: 0xe621014c  swc1        $f1, 0x14C($s1)
    ctx->pc = 0x30159cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 332), bits); }
    // 0x3015a0: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x3015a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3015a4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3015a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3015a8: 0xe6200150  swc1        $f0, 0x150($s1)
    ctx->pc = 0x3015a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x3015ac: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x3015acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3015b0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3015b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3015b4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3015b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3015b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3015b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3015bc: 0xa622015c  sh          $v0, 0x15C($s1)
    ctx->pc = 0x3015bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x3015c0: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x3015c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3015c4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3015c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3015c8: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3015c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3015cc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3015ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3015d0: 0xa622015e  sh          $v0, 0x15E($s1)
    ctx->pc = 0x3015d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x3015d4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3015d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_3015d8:
    // 0x3015d8: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x3015d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x3015dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3015DCu;
    {
        const bool branch_taken_0x3015dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3015E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3015DCu;
        // 0x3015e0: 0xc6200144  lwc1        $f0, 0x144($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3015dc) {
            ctx->pc = 0x3015ECu;
            goto label_3015ec;
        }
    }
    ctx->pc = 0x3015E4u;
    // 0x3015e4: 0xe6200148  swc1        $f0, 0x148($s1)
    ctx->pc = 0x3015e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x3015e8: 0xc6200144  lwc1        $f0, 0x144($s1)
    ctx->pc = 0x3015e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3015ec:
    // 0x3015ec: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3015ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3015f0: 0xc6210148  lwc1        $f1, 0x148($s1)
    ctx->pc = 0x3015f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3015f4: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x3015f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3015f8: 0xe7a7000c  swc1        $f7, 0xC($sp)
    ctx->pc = 0x3015f8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3015fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3015fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x301600: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x301600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x301604: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x301604u;
    {
        const bool branch_taken_0x301604 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x301608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301604u;
        // 0x301608: 0xe7a70008  swc1        $f7, 0x8($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301604) {
            ctx->pc = 0x301634u;
            goto label_301634;
        }
    }
    ctx->pc = 0x30160Cu;
    // 0x30160c: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x30160cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301610: 0x0  nop
    ctx->pc = 0x301610u;
    // NOP
    // 0x301614: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x301614u;
    {
        const bool branch_taken_0x301614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x301618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301614u;
        // 0x301618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301614) {
            ctx->pc = 0x301638u;
            goto label_301638;
        }
    }
    ctx->pc = 0x30161Cu;
    // 0x30161c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x30161cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x301620: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x301620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x301624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x301624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301628: 0x0  nop
    ctx->pc = 0x301628u;
    // NOP
    // 0x30162c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x30162cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x301630: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x301630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_301634:
    // 0x301634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301638:
    // 0x301638: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x301638u;
    SET_GPR_U32(ctx, 31, 0x301640u);
    ctx->pc = 0x30163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301638u;
    // 0x30163c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x301638u, 0x301640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301640u;
label_301640:
    // 0x301640: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x301640u;
    {
        const bool branch_taken_0x301640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301640u;
        // 0x301644: 0xc6400048  lwc1        $f0, 0x48($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301640) {
            ctx->pc = 0x30187Cu;
            goto label_30187c;
        }
    }
    ctx->pc = 0x301648u;
label_301648:
    // 0x301648: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x301648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30164c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30164cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301650: 0xc642001c  lwc1        $f2, 0x1C($s2)
    ctx->pc = 0x301650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301654: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x301654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x301658: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x301658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30165c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x30165cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x301660: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x301660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x301664: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x301664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x301668: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x301668u;
    {
        const bool branch_taken_0x301668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301668u;
        // 0x30166c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301668) {
            ctx->pc = 0x301680u;
            goto label_301680;
        }
    }
    ctx->pc = 0x301670u;
    // 0x301670: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x301670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x301674: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x301674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x301678: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x301678u;
    {
        const bool branch_taken_0x301678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301678) {
            ctx->pc = 0x30167Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301678u;
            // 0x30167c: 0xc6800040  lwc1        $f0, 0x40($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3016A8u;
            goto label_3016a8;
        }
    }
    ctx->pc = 0x301680u;
label_301680:
    // 0x301680: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x301680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301684: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x301684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x301688: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x301688u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30168c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30168cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x301690: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x301690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x301694: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x301694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x301698: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x301698u;
    {
        const bool branch_taken_0x301698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301698u;
        // 0x30169c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301698) {
            ctx->pc = 0x301750u;
            goto label_301750;
        }
    }
    ctx->pc = 0x3016A0u;
    // 0x3016a0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3016A0u;
    {
        const bool branch_taken_0x3016a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3016A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016A0u;
        // 0x3016a4: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3016a0) {
            ctx->pc = 0x301750u;
            goto label_301750;
        }
    }
    ctx->pc = 0x3016A8u;
label_3016a8:
    // 0x3016a8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x3016a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3016ac: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3016acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3016b0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x3016b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3016b4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x3016b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3016b8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x3016b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x3016bc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3016bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3016c0: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x3016c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x3016c4: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x3016c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3016c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3016c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016cc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x3016ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3016d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3016d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016d4: 0xc64c0030  lwc1        $f12, 0x30($s2)
    ctx->pc = 0x3016d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3016d8: 0x46020dc2  mul.s       $f23, $f1, $f2
    ctx->pc = 0x3016d8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3016dc: 0xc64d0034  lwc1        $f13, 0x34($s2)
    ctx->pc = 0x3016dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3016e0: 0xc0c745a  jal         func_31D168
    ctx->pc = 0x3016E0u;
    SET_GPR_U32(ctx, 31, 0x3016E8u);
    ctx->pc = 0x3016E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3016E0u;
    // 0x3016e4: 0x46020582  mul.s       $f22, $f0, $f2 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D168u, 0x3016E0u, 0x3016E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3016E8u;
label_3016e8:
    // 0x3016e8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3016e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3016ec: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3016ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3016f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3016f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3016f4: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x3016f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x3016f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3016F8u;
    {
        const bool branch_taken_0x3016f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3016FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016F8u;
        // 0x3016fc: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3016f8) {
            ctx->pc = 0x301710u;
            goto label_301710;
        }
    }
    ctx->pc = 0x301700u;
    // 0x301700: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x301700u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x301704: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x301704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x301708: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x301708u;
    {
        const bool branch_taken_0x301708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301708u;
        // 0x30170c: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301708) {
            ctx->pc = 0x301740u;
            goto label_301740;
        }
    }
    ctx->pc = 0x301710u;
label_301710:
    // 0x301710: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x301710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301714: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x301714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301718: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x301718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30171c: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x30171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301720: 0xc64c0038  lwc1        $f12, 0x38($s2)
    ctx->pc = 0x301720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301724: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x301724u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x301728: 0xc64d003c  lwc1        $f13, 0x3C($s2)
    ctx->pc = 0x301728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30172c: 0xc0c745a  jal         func_31D168
    ctx->pc = 0x30172Cu;
    SET_GPR_U32(ctx, 31, 0x301734u);
    ctx->pc = 0x301730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30172Cu;
    // 0x301730: 0x46020542  mul.s       $f21, $f0, $f2 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D168u, 0x30172Cu, 0x301734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301734u;
label_301734:
    // 0x301734: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x301734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301738: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x301738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30173c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x30173cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_301740:
    // 0x301740: 0xe6360144  swc1        $f22, 0x144($s1)
    ctx->pc = 0x301740u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x301744: 0xe635014c  swc1        $f21, 0x14C($s1)
    ctx->pc = 0x301744u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 332), bits); }
    // 0x301748: 0xe6370148  swc1        $f23, 0x148($s1)
    ctx->pc = 0x301748u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x30174c: 0xe6340150  swc1        $f20, 0x150($s1)
    ctx->pc = 0x30174cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
label_301750:
    // 0x301750: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x301750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301754: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x301754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x301758: 0x0  nop
    ctx->pc = 0x301758u;
    // NOP
    // 0x30175c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x30175cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301760: 0x0  nop
    ctx->pc = 0x301760u;
    // NOP
    // 0x301764: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x301764u;
    {
        const bool branch_taken_0x301764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x301768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301764u;
        // 0x301768: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301764) {
            ctx->pc = 0x301794u;
            goto label_301794;
        }
    }
    ctx->pc = 0x30176Cu;
    // 0x30176c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x30176cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301770: 0x0  nop
    ctx->pc = 0x301770u;
    // NOP
    // 0x301774: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x301774u;
    {
        const bool branch_taken_0x301774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301774) {
            ctx->pc = 0x301794u;
            goto label_301794;
        }
    }
    ctx->pc = 0x30177Cu;
    // 0x30177c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x30177cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x301780: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x301780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x301784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x301784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301788: 0x0  nop
    ctx->pc = 0x301788u;
    // NOP
    // 0x30178c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x30178cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x301790: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x301790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_301794:
    // 0x301794: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x301794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x301798: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x301798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30179c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30179cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3017a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017a4: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x3017A4u;
    SET_GPR_U32(ctx, 31, 0x3017ACu);
    ctx->pc = 0x3017A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3017A4u;
    // 0x3017a8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x3017A4u, 0x3017ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017ACu;
label_3017ac:
    // 0x3017ac: 0x92230140  lbu         $v1, 0x140($s1)
    ctx->pc = 0x3017acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x3017b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3017b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3017b4: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3017B4u;
    {
        const bool branch_taken_0x3017b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3017b4) {
            ctx->pc = 0x3017B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3017B4u;
            // 0x3017b8: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3017D0u;
            goto label_3017d0;
        }
    }
    ctx->pc = 0x3017BCu;
    // 0x3017bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3017bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3017c0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3017c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x3017c4: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x3017C4u;
    {
        const bool branch_taken_0x3017c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3017c4) {
            ctx->pc = 0x3017C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3017C4u;
            // 0x3017c8: 0xc6400048  lwc1        $f0, 0x48($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30187Cu;
            goto label_30187c;
        }
    }
    ctx->pc = 0x3017CCu;
    // 0x3017cc: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x3017ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_3017d0:
    // 0x3017d0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3017d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3017d4: 0x26300220  addiu       $s0, $s1, 0x220
    ctx->pc = 0x3017d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x3017d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3017d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3017dc: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x3017dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
    // 0x3017e0: 0x6a42002f  ldl         $v0, 0x2F($s2)
    ctx->pc = 0x3017e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3017e4: 0x6e420028  ldr         $v0, 0x28($s2)
    ctx->pc = 0x3017e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3017e8: 0xb2220153  sdl         $v0, 0x153($s1)
    ctx->pc = 0x3017e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 339); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3017ec: 0xb622014c  sdr         $v0, 0x14C($s1)
    ctx->pc = 0x3017ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 332); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3017f0: 0x6a420037  ldl         $v0, 0x37($s2)
    ctx->pc = 0x3017f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3017f4: 0x6e420030  ldr         $v0, 0x30($s2)
    ctx->pc = 0x3017f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3017f8: 0xb222015b  sdl         $v0, 0x15B($s1)
    ctx->pc = 0x3017f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 347); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3017fc: 0xb6220154  sdr         $v0, 0x154($s1)
    ctx->pc = 0x3017fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 340); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x301800: 0x6a42003f  ldl         $v0, 0x3F($s2)
    ctx->pc = 0x301800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x301804: 0x6e420038  ldr         $v0, 0x38($s2)
    ctx->pc = 0x301804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x301808: 0xb2220163  sdl         $v0, 0x163($s1)
    ctx->pc = 0x301808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 355); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30180c: 0xb622015c  sdr         $v0, 0x15C($s1)
    ctx->pc = 0x30180cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 348); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x301810: 0x6a420047  ldl         $v0, 0x47($s2)
    ctx->pc = 0x301810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x301814: 0x6e420040  ldr         $v0, 0x40($s2)
    ctx->pc = 0x301814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x301818: 0xb222016b  sdl         $v0, 0x16B($s1)
    ctx->pc = 0x301818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30181c: 0xb6220164  sdr         $v0, 0x164($s1)
    ctx->pc = 0x30181cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 356); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x301820: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301820u;
    SET_GPR_U32(ctx, 31, 0x301828u);
    ctx->pc = 0x301824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301820u;
    // 0x301824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301820u, 0x301828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301828u;
label_301828:
    // 0x301828: 0xc6540020  lwc1        $f20, 0x20($s2)
    ctx->pc = 0x301828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30182c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30182cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301830: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301830u;
    SET_GPR_U32(ctx, 31, 0x301838u);
    ctx->pc = 0x301834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301830u;
    // 0x301834: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301830u, 0x301838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301838u;
label_301838:
    // 0x301838: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x301838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30183c: 0xc6830040  lwc1        $f3, 0x40($s4)
    ctx->pc = 0x30183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x301840: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x301840u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x301844: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x301844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301848: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x301848u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30184c: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x30184cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x301850: 0xe6230144  swc1        $f3, 0x144($s1)
    ctx->pc = 0x301850u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x301854: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x301854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301858: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x301858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30185c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30185cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x301860: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x301860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x301864: 0xe6200148  swc1        $f0, 0x148($s1)
    ctx->pc = 0x301864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x301868: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x301868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x30186c: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x30186cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x301870: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x301870u;
    {
        const bool branch_taken_0x301870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301870) {
            ctx->pc = 0x301874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301870u;
            // 0x301874: 0xe6230148  swc1        $f3, 0x148($s1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301878u;
            goto label_301878;
        }
    }
    ctx->pc = 0x301878u;
label_301878:
    // 0x301878: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x301878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30187c:
    // 0x30187c: 0xc641004c  lwc1        $f1, 0x4C($s2)
    ctx->pc = 0x30187cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301880: 0xc6420050  lwc1        $f2, 0x50($s2)
    ctx->pc = 0x301880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x301884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x301888: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x301888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30188c: 0x92430292  lbu         $v1, 0x292($s2)
    ctx->pc = 0x30188cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 658)));
    // 0x301890: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x301890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x301894: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x301894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x301898: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x301898u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30189c: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x30189Cu;
    {
        const bool branch_taken_0x30189c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3018A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30189Cu;
        // 0x3018a0: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30189c) {
            ctx->pc = 0x301964u;
            goto label_301964;
        }
    }
    ctx->pc = 0x3018A4u;
    // 0x3018a4: 0xc64c0064  lwc1        $f12, 0x64($s2)
    ctx->pc = 0x3018a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3018a8: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x3018a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x3018ac: 0xc0c745a  jal         func_31D168
    ctx->pc = 0x3018ACu;
    SET_GPR_U32(ctx, 31, 0x3018B4u);
    ctx->pc = 0x3018B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3018ACu;
    // 0x3018b0: 0xc64d0068  lwc1        $f13, 0x68($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D168u, 0x3018ACu, 0x3018B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3018B4u;
label_3018b4:
    // 0x3018b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3018b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3018b8: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x3018b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x3018bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3018bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3018c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3018C0u;
    {
        const bool branch_taken_0x3018c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3018C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018C0u;
        // 0x3018c4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3018c0) {
            ctx->pc = 0x3018D4u;
            goto label_3018d4;
        }
    }
    ctx->pc = 0x3018C8u;
    // 0x3018c8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3018c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3018cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3018ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3018d0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3018d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3018d4:
    // 0x3018d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3018d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3018d8: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x3018d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
    // 0x3018dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3018dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3018e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3018E0u;
    {
        const bool branch_taken_0x3018e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3018E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018E0u;
        // 0x3018e4: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3018e0) {
            ctx->pc = 0x3018F0u;
            goto label_3018f0;
        }
    }
    ctx->pc = 0x3018E8u;
    // 0x3018e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3018e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3018ec: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3018ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3018f0:
    // 0x3018f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3018f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3018f4: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x3018f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x3018f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3018f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3018fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3018FCu;
    {
        const bool branch_taken_0x3018fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018FCu;
        // 0x301900: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3018fc) {
            ctx->pc = 0x30190Cu;
            goto label_30190c;
        }
    }
    ctx->pc = 0x301904u;
    // 0x301904: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x301904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x301908: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x301908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_30190c:
    // 0x30190c: 0x16e0000a  bnez        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x30190Cu;
    {
        const bool branch_taken_0x30190c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x301910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30190Cu;
        // 0x301910: 0xc6410058  lwc1        $f1, 0x58($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30190c) {
            ctx->pc = 0x301938u;
            goto label_301938;
        }
    }
    ctx->pc = 0x301914u;
    // 0x301914: 0xc6420054  lwc1        $f2, 0x54($s2)
    ctx->pc = 0x301914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301918: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x301918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30191c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x30191cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301920: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x301920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301924: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x301924u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x301928: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x301928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30192c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x30192cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x301930: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x301930u;
    {
        const bool branch_taken_0x301930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301930u;
        // 0x301934: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301930) {
            ctx->pc = 0x301A50u;
            goto label_301a50;
        }
    }
    ctx->pc = 0x301938u;
label_301938:
    // 0x301938: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x301938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30193c: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x30193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301940: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x301940u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301944: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x301944u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x301948: 0xc6420054  lwc1        $f2, 0x54($s2)
    ctx->pc = 0x301948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30194c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x30194cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x301950: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x301950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x301954: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x301954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x301958: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x301958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30195c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x30195Cu;
    {
        const bool branch_taken_0x30195c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30195Cu;
        // 0x301960: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30195c) {
            ctx->pc = 0x301A50u;
            goto label_301a50;
        }
    }
    ctx->pc = 0x301964u;
label_301964:
    // 0x301964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x301964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301968: 0x1462003f  bne         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x301968u;
    {
        const bool branch_taken_0x301968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301968u;
        // 0x30196c: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301968) {
            ctx->pc = 0x301A68u;
            goto label_301a68;
        }
    }
    ctx->pc = 0x301970u;
    // 0x301970: 0xc6420054  lwc1        $f2, 0x54($s2)
    ctx->pc = 0x301970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301974: 0x26300220  addiu       $s0, $s1, 0x220
    ctx->pc = 0x301974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x301978: 0xc6410058  lwc1        $f1, 0x58($s2)
    ctx->pc = 0x301978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30197c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30197cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301980: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x301980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301984: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x301984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x301988: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x301988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30198c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x30198cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x301990: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301990u;
    SET_GPR_U32(ctx, 31, 0x301998u);
    ctx->pc = 0x301994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301990u;
    // 0x301994: 0xe6b4000c  swc1        $f20, 0xC($s5) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301990u, 0x301998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301998u;
label_301998:
    // 0x301998: 0xc6420064  lwc1        $f2, 0x64($s2)
    ctx->pc = 0x301998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30199c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30199cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3019a0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3019a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3019a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3019a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3019a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3019a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3019ac: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x3019ACu;
    SET_GPR_U32(ctx, 31, 0x3019B4u);
    ctx->pc = 0x3019B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3019ACu;
    // 0x3019b0: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x3019ACu, 0x3019B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3019B4u;
label_3019b4:
    // 0x3019b4: 0xc6420068  lwc1        $f2, 0x68($s2)
    ctx->pc = 0x3019b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3019b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3019b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3019bc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3019bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3019c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3019c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3019c4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3019c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3019c8: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x3019C8u;
    SET_GPR_U32(ctx, 31, 0x3019D0u);
    ctx->pc = 0x3019CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3019C8u;
    // 0x3019cc: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x3019C8u, 0x3019D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3019D0u;
label_3019d0:
    // 0x3019d0: 0xc642006c  lwc1        $f2, 0x6C($s2)
    ctx->pc = 0x3019d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3019d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3019d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3019d8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3019d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3019dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3019dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3019e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3019e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3019e4: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x3019E4u;
    SET_GPR_U32(ctx, 31, 0x3019ECu);
    ctx->pc = 0x3019E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3019E4u;
    // 0x3019e8: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x3019E4u, 0x3019ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3019ECu;
label_3019ec:
    // 0x3019ec: 0xc6420070  lwc1        $f2, 0x70($s2)
    ctx->pc = 0x3019ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3019f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3019f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3019f4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3019f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3019f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3019f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3019fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3019fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x301a00: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301A00u;
    SET_GPR_U32(ctx, 31, 0x301A08u);
    ctx->pc = 0x301A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301A00u;
    // 0x301a04: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301A00u, 0x301A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301A08u;
label_301a08:
    // 0x301a08: 0xc6420074  lwc1        $f2, 0x74($s2)
    ctx->pc = 0x301a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a10: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x301a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301a14: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x301a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x301a18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x301a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x301a1c: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301A1Cu;
    SET_GPR_U32(ctx, 31, 0x301A24u);
    ctx->pc = 0x301A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301A1Cu;
    // 0x301a20: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301A1Cu, 0x301A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301A24u;
label_301a24:
    // 0x301a24: 0xc6410078  lwc1        $f1, 0x78($s2)
    ctx->pc = 0x301a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301a28: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x301a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301a2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x301a2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x301a30: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x301a30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x301a34: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x301A34u;
    {
        const bool branch_taken_0x301a34 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x301A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A34u;
        // 0x301a38: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a34) {
            ctx->pc = 0x301A50u;
            goto label_301a50;
        }
    }
    ctx->pc = 0x301A3Cu;
    // 0x301a3c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x301a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301a40: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x301a40u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x301a44: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x301a44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x301a48: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x301a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x301a4c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x301a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_301a50:
    // 0x301a50: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x301a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301a54: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x301a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301a58: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x301a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301a5c: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x301a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x301a60: 0xe621017c  swc1        $f1, 0x17C($s1)
    ctx->pc = 0x301a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
    // 0x301a64: 0xe6220180  swc1        $f2, 0x180($s1)
    ctx->pc = 0x301a64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
label_301a68:
    // 0x301a68: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x301A68u;
    {
        const bool branch_taken_0x301a68 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x301A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301A68u;
        // 0x301a6c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a68) {
            ctx->pc = 0x301A84u;
            goto label_301a84;
        }
    }
    ctx->pc = 0x301A70u;
    // 0x301a70: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x301a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301a74: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x301a74u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x301a78: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x301a78u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x301a7c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x301a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x301a80: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x301a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_301a84:
    // 0x301a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301a88: 0xc0ad88c  jal         func_2B6230
    ctx->pc = 0x301A88u;
    SET_GPR_U32(ctx, 31, 0x301A90u);
    ctx->pc = 0x301A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301A88u;
    // 0x301a8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6230u, 0x301A88u, 0x301A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301A90u;
label_301a90:
    // 0x301a90: 0xc640007c  lwc1        $f0, 0x7C($s2)
    ctx->pc = 0x301a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301a94: 0xc6410080  lwc1        $f1, 0x80($s2)
    ctx->pc = 0x301a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301a98: 0xc6420084  lwc1        $f2, 0x84($s2)
    ctx->pc = 0x301a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301a9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x301a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x301aa0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x301aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x301aa4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x301aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x301aa8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x301aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x301aac: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x301aacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x301ab0: 0xe6a3000c  swc1        $f3, 0xC($s5)
    ctx->pc = 0x301ab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x301ab4: 0x92430291  lbu         $v1, 0x291($s2)
    ctx->pc = 0x301ab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 657)));
    // 0x301ab8: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x301AB8u;
    {
        const bool branch_taken_0x301ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x301ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AB8u;
        // 0x301abc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ab8) {
            ctx->pc = 0x301B40u;
            goto label_301b40;
        }
    }
    ctx->pc = 0x301AC0u;
    // 0x301ac0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x301ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x301ac4: 0xc6540088  lwc1        $f20, 0x88($s2)
    ctx->pc = 0x301ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x301ac8: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x301AC8u;
    {
        const bool branch_taken_0x301ac8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x301ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AC8u;
        // 0x301acc: 0xc655008c  lwc1        $f21, 0x8C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ac8) {
            ctx->pc = 0x301AF0u;
            goto label_301af0;
        }
    }
    ctx->pc = 0x301AD0u;
    // 0x301ad0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x301ad0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x301ad4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x301ad4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x301ad8: 0xc0c745a  jal         func_31D168
    ctx->pc = 0x301AD8u;
    SET_GPR_U32(ctx, 31, 0x301AE0u);
    ctx->pc = 0x301ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301AD8u;
    // 0x301adc: 0x26240220  addiu       $a0, $s1, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D168u, 0x301AD8u, 0x301AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AE0u;
label_301ae0:
    // 0x301ae0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x301ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301ae4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x301ae4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x301ae8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x301ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x301aec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x301aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_301af0:
    // 0x301af0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x301af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x301af4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x301af8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x301AF8u;
    {
        const bool branch_taken_0x301af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301AF8u;
        // 0x301afc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301af8) {
            ctx->pc = 0x301B18u;
            goto label_301b18;
        }
    }
    ctx->pc = 0x301B00u;
    // 0x301b00: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x301b00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x301b04: 0xc0c745a  jal         func_31D168
    ctx->pc = 0x301B04u;
    SET_GPR_U32(ctx, 31, 0x301B0Cu);
    ctx->pc = 0x301B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301B04u;
    // 0x301b08: 0x26240220  addiu       $a0, $s1, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D168u, 0x301B04u, 0x301B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B0Cu;
label_301b0c:
    // 0x301b0c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x301b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301b10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x301b10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x301b14: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x301b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_301b18:
    // 0x301b18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x301b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x301b1c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x301b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x301b20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x301b24: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x301B24u;
    {
        const bool branch_taken_0x301b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B24u;
        // 0x301b28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b24) {
            ctx->pc = 0x301BA0u;
            goto label_301ba0;
        }
    }
    ctx->pc = 0x301B2Cu;
    // 0x301b2c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x301b2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x301b30: 0xc0c745a  jal         func_31D168
    ctx->pc = 0x301B30u;
    SET_GPR_U32(ctx, 31, 0x301B38u);
    ctx->pc = 0x301B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301B30u;
    // 0x301b34: 0x26240220  addiu       $a0, $s1, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D168u, 0x301B30u, 0x301B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B38u;
label_301b38:
    // 0x301b38: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x301B38u;
    {
        const bool branch_taken_0x301b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B38u;
        // 0x301b3c: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b38) {
            ctx->pc = 0x301B98u;
            goto label_301b98;
        }
    }
    ctx->pc = 0x301B40u;
label_301b40:
    // 0x301b40: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x301B40u;
    {
        const bool branch_taken_0x301b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x301B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301B40u;
        // 0x301b44: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301b40) {
            ctx->pc = 0x301BA4u;
            goto label_301ba4;
        }
    }
    ctx->pc = 0x301B48u;
    // 0x301b48: 0x26300220  addiu       $s0, $s1, 0x220
    ctx->pc = 0x301b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x301b4c: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301B4Cu;
    SET_GPR_U32(ctx, 31, 0x301B54u);
    ctx->pc = 0x301B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301B4Cu;
    // 0x301b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301B4Cu, 0x301B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B54u;
label_301b54:
    // 0x301b54: 0xc6420088  lwc1        $f2, 0x88($s2)
    ctx->pc = 0x301b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301b5c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x301b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301b60: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x301b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x301b64: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x301b64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x301b68: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301B68u;
    SET_GPR_U32(ctx, 31, 0x301B70u);
    ctx->pc = 0x301B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301B68u;
    // 0x301b6c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301B68u, 0x301B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B70u;
label_301b70:
    // 0x301b70: 0xc642008c  lwc1        $f2, 0x8C($s2)
    ctx->pc = 0x301b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301b78: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x301b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301b7c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x301b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x301b80: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x301b80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x301b84: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301B84u;
    SET_GPR_U32(ctx, 31, 0x301B8Cu);
    ctx->pc = 0x301B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301B84u;
    // 0x301b88: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301B84u, 0x301B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B8Cu;
label_301b8c:
    // 0x301b8c: 0xc6420090  lwc1        $f2, 0x90($s2)
    ctx->pc = 0x301b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301b90: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x301b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301b94: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x301b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_301b98:
    // 0x301b98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x301b98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x301b9c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x301b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_301ba0:
    // 0x301ba0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x301ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_301ba4:
    // 0x301ba4: 0x16c2001f  bne         $s6, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x301BA4u;
    {
        const bool branch_taken_0x301ba4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x301BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301BA4u;
        // 0x301ba8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ba4) {
            ctx->pc = 0x301C24u;
            goto label_301c24;
        }
    }
    ctx->pc = 0x301BACu;
    // 0x301bac: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x301bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x301bb0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x301bb4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x301BB4u;
    {
        const bool branch_taken_0x301bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301bb4) {
            ctx->pc = 0x301BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301BB4u;
            // 0x301bb8: 0xc6810040  lwc1        $f1, 0x40($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x301BFCu;
            goto label_301bfc;
        }
    }
    ctx->pc = 0x301BBCu;
    // 0x301bbc: 0x26820020  addiu       $v0, $s4, 0x20
    ctx->pc = 0x301bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x301bc0: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x301bc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301bc4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x301bc4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x301bc8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x301bc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301bcc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x301bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301bd0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x301bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301bd4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x301bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301bd8: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x301bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x301bdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x301bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x301be0: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x301be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x301be4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x301be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x301be8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x301be8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x301bec: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x301becu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x301bf0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x301bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x301bf4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x301bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x301bf8: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x301bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_301bfc:
    // 0x301bfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x301bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x301c00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x301c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301c04: 0x0  nop
    ctx->pc = 0x301c04u;
    // NOP
    // 0x301c08: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x301c08u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x301c0c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x301c0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301c10: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x301c10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x301c14: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x301c14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x301c18: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x301c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301c1c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x301c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301c20: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x301c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_301c24:
    // 0x301c24: 0x3c130020  lui         $s3, 0x20
    ctx->pc = 0x301c24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32 << 16));
    // 0x301c28: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x301c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x301c2c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x301C2Cu;
    {
        const bool branch_taken_0x301c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301C2Cu;
        // 0x301c30: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301c2c) {
            ctx->pc = 0x301D00u;
            goto label_301d00;
        }
    }
    ctx->pc = 0x301C34u;
    // 0x301c34: 0x26300220  addiu       $s0, $s1, 0x220
    ctx->pc = 0x301c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x301c38: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x301c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x301c3c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x301c3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x301c40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x301c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x301c44: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301C44u;
    SET_GPR_U32(ctx, 31, 0x301C4Cu);
    ctx->pc = 0x301C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301C44u;
    // 0x301c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301C44u, 0x301C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301C4Cu;
label_301c4c:
    // 0x301c4c: 0x824202b8  lb          $v0, 0x2B8($s2)
    ctx->pc = 0x301c4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 696)));
    // 0x301c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301c54: 0x824302b3  lb          $v1, 0x2B3($s2)
    ctx->pc = 0x301c54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 691)));
    // 0x301c58: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x301c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x301c5c: 0x0  nop
    ctx->pc = 0x301c5cu;
    // NOP
    // 0x301c60: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x301c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x301c64: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x301c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x301c68: 0x3421adfd  ori         $at, $at, 0xADFD
    ctx->pc = 0x301c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44541);
    // 0x301c6c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x301c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x301c70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x301c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x301c74: 0x0  nop
    ctx->pc = 0x301c74u;
    // NOP
    // 0x301c78: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x301c78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x301c7c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x301c7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x301c80: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x301c80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x301c84: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x301c84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x301c88: 0xe6210260  swc1        $f1, 0x260($s1)
    ctx->pc = 0x301c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
    // 0x301c8c: 0xe6210268  swc1        $f1, 0x268($s1)
    ctx->pc = 0x301c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
    // 0x301c90: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301C90u;
    SET_GPR_U32(ctx, 31, 0x301C98u);
    ctx->pc = 0x301C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301C90u;
    // 0x301c94: 0xe6210264  swc1        $f1, 0x264($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301C90u, 0x301C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301C98u;
label_301c98:
    // 0x301c98: 0x824202b9  lb          $v0, 0x2B9($s2)
    ctx->pc = 0x301c98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 697)));
    // 0x301c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x301c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ca0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x301ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x301ca4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x301ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x301ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x301ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x301cac: 0x0  nop
    ctx->pc = 0x301cacu;
    // NOP
    // 0x301cb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x301cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x301cb4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x301cb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x301cb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x301cb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301cbc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x301cbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x301cc0: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301CC0u;
    SET_GPR_U32(ctx, 31, 0x301CC8u);
    ctx->pc = 0x301CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301CC0u;
    // 0x301cc4: 0xe621026c  swc1        $f1, 0x26C($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301CC0u, 0x301CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301CC8u;
label_301cc8:
    // 0x301cc8: 0x824202ba  lb          $v0, 0x2BA($s2)
    ctx->pc = 0x301cc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 698)));
    // 0x301ccc: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x301cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x301cd0: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x301cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x301cd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x301cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x301cd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x301cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x301cdc: 0x0  nop
    ctx->pc = 0x301cdcu;
    // NOP
    // 0x301ce0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x301ce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x301ce4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x301ce4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x301ce8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x301ce8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301cec: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x301cecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x301cf0: 0xe6210270  swc1        $f1, 0x270($s1)
    ctx->pc = 0x301cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
    // 0x301cf4: 0xc64002bc  lwc1        $f0, 0x2BC($s2)
    ctx->pc = 0x301cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301cf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x301cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301cfc: 0xe6210270  swc1        $f1, 0x270($s1)
    ctx->pc = 0x301cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
label_301d00:
    // 0x301d00: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x301d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301d04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x301d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x301d08: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x301d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x301d0c: 0x0  nop
    ctx->pc = 0x301d0cu;
    // NOP
    // 0x301d10: 0x46150832  c.eq.s      $f1, $f21
    ctx->pc = 0x301d10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301d14: 0x0  nop
    ctx->pc = 0x301d14u;
    // NOP
    // 0x301d18: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x301D18u;
    {
        const bool branch_taken_0x301d18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x301d18) {
            ctx->pc = 0x301D40u;
            goto label_301d40;
        }
    }
    ctx->pc = 0x301D20u;
    // 0x301d20: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x301d20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301d24: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x301d24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x301d28: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x301d28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x301d2c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x301d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301d30: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x301d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301d34: 0xc620026c  lwc1        $f0, 0x26C($s1)
    ctx->pc = 0x301d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301d38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x301d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x301d3c: 0xe620026c  swc1        $f0, 0x26C($s1)
    ctx->pc = 0x301d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
label_301d40:
    // 0x301d40: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x301D40u;
    {
        const bool branch_taken_0x301d40 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x301D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D40u;
        // 0x301d44: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d40) {
            ctx->pc = 0x301D5Cu;
            goto label_301d5c;
        }
    }
    ctx->pc = 0x301D48u;
    // 0x301d48: 0xc621026c  lwc1        $f1, 0x26C($s1)
    ctx->pc = 0x301d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301d4c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x301d4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x301d50: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x301d50u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x301d54: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x301d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x301d58: 0xe621026c  swc1        $f1, 0x26C($s1)
    ctx->pc = 0x301d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
label_301d5c:
    // 0x301d5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x301d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x301d60: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x301d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x301d64: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x301D64u;
    {
        const bool branch_taken_0x301d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D64u;
        // 0x301d68: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d64) {
            ctx->pc = 0x301DDCu;
            goto label_301ddc;
        }
    }
    ctx->pc = 0x301D6Cu;
    // 0x301d6c: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x301D6Cu;
    SET_GPR_U32(ctx, 31, 0x301D74u);
    ctx->pc = 0x301D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D6Cu;
    // 0x301d70: 0xc62c0260  lwc1        $f12, 0x260($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x301D6Cu, 0x301D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D74u;
label_301d74:
    // 0x301d74: 0xc64102a4  lwc1        $f1, 0x2A4($s2)
    ctx->pc = 0x301d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301d78: 0xc622026c  lwc1        $f2, 0x26C($s1)
    ctx->pc = 0x301d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301d7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x301d7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301d80: 0xc62c0264  lwc1        $f12, 0x264($s1)
    ctx->pc = 0x301d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301d84: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x301d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301d88: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x301d88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x301d8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x301d8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x301d90: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x301D90u;
    SET_GPR_U32(ctx, 31, 0x301D98u);
    ctx->pc = 0x301D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301D90u;
    // 0x301d94: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x301D90u, 0x301D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D98u;
label_301d98:
    // 0x301d98: 0xc64102a8  lwc1        $f1, 0x2A8($s2)
    ctx->pc = 0x301d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301d9c: 0xc622026c  lwc1        $f2, 0x26C($s1)
    ctx->pc = 0x301d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301da0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x301da0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301da4: 0xc62c0268  lwc1        $f12, 0x268($s1)
    ctx->pc = 0x301da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301da8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x301da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301dac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x301dacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x301db0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x301db0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x301db4: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x301DB4u;
    SET_GPR_U32(ctx, 31, 0x301DBCu);
    ctx->pc = 0x301DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301DB4u;
    // 0x301db8: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x301DB4u, 0x301DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301DBCu;
label_301dbc:
    // 0x301dbc: 0xc64102ac  lwc1        $f1, 0x2AC($s2)
    ctx->pc = 0x301dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301dc0: 0xc622026c  lwc1        $f2, 0x26C($s1)
    ctx->pc = 0x301dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301dc4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x301dc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301dc8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x301dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301dcc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x301dccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x301dd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x301dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x301dd4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x301dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x301dd8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x301dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_301ddc:
    // 0x301ddc: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x301DDCu;
    SET_GPR_U32(ctx, 31, 0x301DE4u);
    ctx->pc = 0x301DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301DDCu;
    // 0x301de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x301DDCu, 0x301DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301DE4u;
label_301de4:
    // 0x301de4: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x301de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x301de8: 0x9243028f  lbu         $v1, 0x28F($s2)
    ctx->pc = 0x301de8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 655)));
    // 0x301dec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x301decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301df0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x301df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x301df4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x301DF4u;
    {
        const bool branch_taken_0x301df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301DF4u;
        // 0x301df8: 0xa2230141  sb          $v1, 0x141($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 321), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301df4) {
            ctx->pc = 0x301E00u;
            goto label_301e00;
        }
    }
    ctx->pc = 0x301DFCu;
    // 0x301dfc: 0xa2200141  sb          $zero, 0x141($s1)
    ctx->pc = 0x301dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 321), (uint8_t)GPR_U32(ctx, 0));
label_301e00:
    // 0x301e00: 0x92220141  lbu         $v0, 0x141($s1)
    ctx->pc = 0x301e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 321)));
    // 0x301e04: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x301E04u;
    {
        const bool branch_taken_0x301e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E04u;
        // 0x301e08: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301e04) {
            ctx->pc = 0x302060u;
            goto label_302060;
        }
    }
    ctx->pc = 0x301E0Cu;
    // 0x301e0c: 0xc6420094  lwc1        $f2, 0x94($s2)
    ctx->pc = 0x301e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301e10: 0xc6400098  lwc1        $f0, 0x98($s2)
    ctx->pc = 0x301e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301e14: 0xc641009c  lwc1        $f1, 0x9C($s2)
    ctx->pc = 0x301e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301e18: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x301e18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x301e1c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x301e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x301e20: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x301e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x301e24: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x301e24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x301e28: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x301e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301e2c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x301e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301e30: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x301e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301e34: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x301e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x301e38: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x301e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x301e3c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x301e3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x301e40: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x301e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x301e44: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x301e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x301e48: 0xc04078a  jal         func_101E28
    ctx->pc = 0x301E48u;
    SET_GPR_U32(ctx, 31, 0x301E50u);
    ctx->pc = 0x301E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301E48u;
    // 0x301e4c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x301E48u, 0x301E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301E50u;
label_301e50:
    // 0x301e50: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x301e50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301e54: 0x0  nop
    ctx->pc = 0x301e54u;
    // NOP
    // 0x301e58: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x301E58u;
    {
        const bool branch_taken_0x301e58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x301E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301E58u;
        // 0x301e5c: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301e58) {
            ctx->pc = 0x301E98u;
            goto label_301e98;
        }
    }
    ctx->pc = 0x301E60u;
    // 0x301e60: 0x0  nop
    ctx->pc = 0x301e60u;
    // NOP
    // 0x301e64: 0x0  nop
    ctx->pc = 0x301e64u;
    // NOP
    // 0x301e68: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x301e68u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x301e6c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x301e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x301e70: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x301e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x301e74: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x301e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301e78: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x301e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301e7c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x301e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x301e80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x301e80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x301e84: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x301e84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x301e88: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x301e88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x301e8c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x301e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x301e90: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x301e90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x301e94: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x301e94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_301e98:
    // 0x301e98: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x301e98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x301e9c: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x301e9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x301ea0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x301ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301ea4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x301ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x301ea8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x301ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x301eac: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x301eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301eb0: 0x26330220  addiu       $s3, $s1, 0x220
    ctx->pc = 0x301eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x301eb4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x301eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301eb8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x301ebc: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x301ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301ec0: 0xc65400ac  lwc1        $f20, 0xAC($s2)
    ctx->pc = 0x301ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x301ec4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x301ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x301ec8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x301ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x301ecc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x301ECCu;
    {
        const bool branch_taken_0x301ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301ECCu;
        // 0x301ed0: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ecc) {
            ctx->pc = 0x301EECu;
            goto label_301eec;
        }
    }
    ctx->pc = 0x301ED4u;
    // 0x301ed4: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301ED4u;
    SET_GPR_U32(ctx, 31, 0x301EDCu);
    ctx->pc = 0x301ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301ED4u;
    // 0x301ed8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301ED4u, 0x301EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301EDCu;
label_301edc:
    // 0x301edc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x301edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x301ee0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x301ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301ee4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x301ee4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x301ee8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x301ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_301eec:
    // 0x301eec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x301eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x301ef0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x301ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x301ef4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x301ef8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x301EF8u;
    {
        const bool branch_taken_0x301ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301ef8) {
            ctx->pc = 0x301EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301EF8u;
            // 0x301efc: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301F1Cu;
            goto label_301f1c;
        }
    }
    ctx->pc = 0x301F00u;
    // 0x301f00: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301F00u;
    SET_GPR_U32(ctx, 31, 0x301F08u);
    ctx->pc = 0x301F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F00u;
    // 0x301f04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301F00u, 0x301F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F08u;
label_301f08:
    // 0x301f08: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x301f08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x301f0c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x301f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301f10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x301f10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x301f14: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x301f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x301f18: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x301f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_301f1c:
    // 0x301f1c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x301f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x301f20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x301f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x301f24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x301F24u;
    {
        const bool branch_taken_0x301f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F24u;
        // 0x301f28: 0x27b50050  addiu       $s5, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301f24) {
            ctx->pc = 0x301F48u;
            goto label_301f48;
        }
    }
    ctx->pc = 0x301F2Cu;
    // 0x301f2c: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301F2Cu;
    SET_GPR_U32(ctx, 31, 0x301F34u);
    ctx->pc = 0x301F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F2Cu;
    // 0x301f30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301F2Cu, 0x301F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F34u;
label_301f34:
    // 0x301f34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x301f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x301f38: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x301f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301f3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x301f3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x301f40: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x301f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x301f44: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x301f44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_301f48:
    // 0x301f48: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x301f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x301f4c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x301F4Cu;
    SET_GPR_U32(ctx, 31, 0x301F54u);
    ctx->pc = 0x301F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F4Cu;
    // 0x301f50: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x301F4Cu, 0x301F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F54u;
label_301f54:
    // 0x301f54: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x301f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301f58: 0x0  nop
    ctx->pc = 0x301f58u;
    // NOP
    // 0x301f5c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x301F5Cu;
    {
        const bool branch_taken_0x301f5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x301F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F5Cu;
        // 0x301f60: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x301f5c) {
            ctx->pc = 0x301F98u;
            goto label_301f98;
        }
    }
    ctx->pc = 0x301F64u;
    // 0x301f64: 0x0  nop
    ctx->pc = 0x301f64u;
    // NOP
    // 0x301f68: 0x0  nop
    ctx->pc = 0x301f68u;
    // NOP
    // 0x301f6c: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x301f6cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x301f70: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x301f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x301f74: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x301f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301f78: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x301f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301f7c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x301f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x301f80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x301f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x301f84: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x301f84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x301f88: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x301f88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x301f8c: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x301f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x301f90: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x301f90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x301f94: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x301f94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_301f98:
    // 0x301f98: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x301f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x301f9c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x301f9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x301fa0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x301fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301fa4: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x301FA4u;
    SET_GPR_U32(ctx, 31, 0x301FACu);
    ctx->pc = 0x301FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301FA4u;
    // 0x301fa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x301FA4u, 0x301FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301FACu;
label_301fac:
    // 0x301fac: 0xc64100b0  lwc1        $f1, 0xB0($s2)
    ctx->pc = 0x301facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301fb0: 0xc64200a0  lwc1        $f2, 0xA0($s2)
    ctx->pc = 0x301fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x301fb4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x301fb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x301fb8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x301fb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x301fbc: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x301fbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x301fc0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x301fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301fc4: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x301fc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x301fc8: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x301fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x301fcc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x301fccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x301fd0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x301fd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301fd4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x301fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301fd8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x301fd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x301fdc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x301fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301fe0: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x301fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301fe4: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x301fe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x301fe8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x301fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x301fec: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x301fecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x301ff0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x301ff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x301ff4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x301ff4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x301ff8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x301ff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x301ffc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x301ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x302000: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x302000u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x302004: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x302004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x302008: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x302008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30200c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x30200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302010: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x302010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302014: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x302014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x302018: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x302018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x30201c: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x30201Cu;
    {
        const bool branch_taken_0x30201c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x302020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30201Cu;
        // 0x302020: 0xe7a20020  swc1        $f2, 0x20($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30201c) {
            ctx->pc = 0x30202Cu;
            goto label_30202c;
        }
    }
    ctx->pc = 0x302024u;
    // 0x302024: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x302024u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x302028: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x302028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_30202c:
    // 0x30202c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x30202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302030: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x302030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302034: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x302034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302038: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x302038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x30203c: 0xe6210128  swc1        $f1, 0x128($s1)
    ctx->pc = 0x30203cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x302040: 0xe622012c  swc1        $f2, 0x12C($s1)
    ctx->pc = 0x302040u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x302044: 0xc64100a4  lwc1        $f1, 0xA4($s2)
    ctx->pc = 0x302044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302048: 0xe6210130  swc1        $f1, 0x130($s1)
    ctx->pc = 0x302048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x30204c: 0xc64000a8  lwc1        $f0, 0xA8($s2)
    ctx->pc = 0x30204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302050: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x302050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302054: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302058: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x302058u;
    {
        const bool branch_taken_0x302058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302058u;
        // 0x30205c: 0xe6200138  swc1        $f0, 0x138($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302058) {
            ctx->pc = 0x302150u;
            goto label_302150;
        }
    }
    ctx->pc = 0x302060u;
label_302060:
    // 0x302060: 0x1456003b  bne         $v0, $s6, . + 4 + (0x3B << 2)
    ctx->pc = 0x302060u;
    {
        const bool branch_taken_0x302060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x302064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302060u;
        // 0x302064: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302060) {
            ctx->pc = 0x302150u;
            goto label_302150;
        }
    }
    ctx->pc = 0x302068u;
    // 0x302068: 0x26300220  addiu       $s0, $s1, 0x220
    ctx->pc = 0x302068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x30206c: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x30206Cu;
    SET_GPR_U32(ctx, 31, 0x302074u);
    ctx->pc = 0x302070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30206Cu;
    // 0x302070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x30206Cu, 0x302074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302074u;
label_302074:
    // 0x302074: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x302074u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x302078: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x302078u;
    SET_GPR_U32(ctx, 31, 0x302080u);
    ctx->pc = 0x30207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302078u;
    // 0x30207c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x302078u, 0x302080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302080u;
label_302080:
    // 0x302080: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x302080u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x302084: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x302084u;
    SET_GPR_U32(ctx, 31, 0x30208Cu);
    ctx->pc = 0x302088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302084u;
    // 0x302088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x302084u, 0x30208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30208Cu;
label_30208c:
    // 0x30208c: 0xc64400a0  lwc1        $f4, 0xA0($s2)
    ctx->pc = 0x30208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x302090: 0xc64500a8  lwc1        $f5, 0xA8($s2)
    ctx->pc = 0x302090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x302094: 0xc64600ac  lwc1        $f6, 0xAC($s2)
    ctx->pc = 0x302094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x302098: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x302098u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x30209c: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x30209cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x3020a0: 0xc6430094  lwc1        $f3, 0x94($s2)
    ctx->pc = 0x3020a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3020a4: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x3020a4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3020a8: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x3020a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3020ac: 0xc642009c  lwc1        $f2, 0x9C($s2)
    ctx->pc = 0x3020acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3020b0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x3020b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x3020b4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3020b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x3020b8: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x3020b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3020bc: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x3020bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x3020c0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3020c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3020c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3020c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3020c8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3020c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3020cc: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x3020ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3020d0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3020d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3020d4: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x3020D4u;
    {
        const bool branch_taken_0x3020d4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3020D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3020D4u;
        // 0x3020d8: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3020d4) {
            ctx->pc = 0x3020E4u;
            goto label_3020e4;
        }
    }
    ctx->pc = 0x3020DCu;
    // 0x3020dc: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x3020dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x3020e0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3020e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3020e4:
    // 0x3020e4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3020e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3020e8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x3020e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3020ec: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x3020ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3020f0: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x3020f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x3020f4: 0xe6210128  swc1        $f1, 0x128($s1)
    ctx->pc = 0x3020f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x3020f8: 0xe622012c  swc1        $f2, 0x12C($s1)
    ctx->pc = 0x3020f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x3020fc: 0xc64000a4  lwc1        $f0, 0xA4($s2)
    ctx->pc = 0x3020fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302100: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x302100u;
    {
        const bool branch_taken_0x302100 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x302104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302100u;
        // 0x302104: 0xe6200130  swc1        $f0, 0x130($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302100) {
            ctx->pc = 0x302118u;
            goto label_302118;
        }
    }
    ctx->pc = 0x302108u;
    // 0x302108: 0xc64000b0  lwc1        $f0, 0xB0($s2)
    ctx->pc = 0x302108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30210c: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x30210cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302110: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x302110u;
    {
        const bool branch_taken_0x302110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302110u;
        // 0x302114: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302110) {
            ctx->pc = 0x302128u;
            goto label_302128;
        }
    }
    ctx->pc = 0x302118u;
label_302118:
    // 0x302118: 0xc64000b0  lwc1        $f0, 0xB0($s2)
    ctx->pc = 0x302118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30211c: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x30211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302120: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302124: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x302124u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_302128:
    // 0x302128: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x302128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x30212c: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x30212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302130: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x302130u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x302134: 0xc64100b4  lwc1        $f1, 0xB4($s2)
    ctx->pc = 0x302134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302138: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x302138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x30213c: 0xe6210138  swc1        $f1, 0x138($s1)
    ctx->pc = 0x30213cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
    // 0x302140: 0xc64000b8  lwc1        $f0, 0xB8($s2)
    ctx->pc = 0x302140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302144: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x302144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302148: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30214c: 0xe620013c  swc1        $f0, 0x13C($s1)
    ctx->pc = 0x30214cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 316), bits); }
label_302150:
    // 0x302150: 0x92420293  lbu         $v0, 0x293($s2)
    ctx->pc = 0x302150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 659)));
    // 0x302154: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x302158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x302158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30215c: 0xa2220187  sb          $v0, 0x187($s1)
    ctx->pc = 0x30215cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 391), (uint8_t)GPR_U32(ctx, 2));
    // 0x302160: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x302160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x302164: 0xe7c0000c  swc1        $f0, 0xC($fp)
    ctx->pc = 0x302164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x302168: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x302168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x30216c: 0xe7c00008  swc1        $f0, 0x8($fp)
    ctx->pc = 0x30216cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x302170: 0x92230187  lbu         $v1, 0x187($s1)
    ctx->pc = 0x302170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 391)));
    // 0x302174: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x302174u;
    {
        const bool branch_taken_0x302174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x302178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302174u;
        // 0x302178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302174) {
            ctx->pc = 0x30218Cu;
            goto label_30218c;
        }
    }
    ctx->pc = 0x30217Cu;
    // 0x30217c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30217Cu;
    {
        const bool branch_taken_0x30217c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30217c) {
            ctx->pc = 0x302180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30217Cu;
            // 0x302180: 0xc64000d0  lwc1        $f0, 0xD0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3021A0u;
            goto label_3021a0;
        }
    }
    ctx->pc = 0x302184u;
    // 0x302184: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x302184u;
    {
        const bool branch_taken_0x302184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302184u;
        // 0x302188: 0xc6800030  lwc1        $f0, 0x30($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302184) {
            ctx->pc = 0x3021C0u;
            goto label_3021c0;
        }
    }
    ctx->pc = 0x30218Cu;
label_30218c:
    // 0x30218c: 0xc64000c8  lwc1        $f0, 0xC8($s2)
    ctx->pc = 0x30218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302190: 0xc64100e8  lwc1        $f1, 0xE8($s2)
    ctx->pc = 0x302190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302194: 0xc64200ec  lwc1        $f2, 0xEC($s2)
    ctx->pc = 0x302194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302198: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x302198u;
    {
        const bool branch_taken_0x302198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302198u;
        // 0x30219c: 0xc64300f0  lwc1        $f3, 0xF0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x302198) {
            ctx->pc = 0x3021ACu;
            goto label_3021ac;
        }
    }
    ctx->pc = 0x3021A0u;
label_3021a0:
    // 0x3021a0: 0xc64100c4  lwc1        $f1, 0xC4($s2)
    ctx->pc = 0x3021a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3021a4: 0xc64200c8  lwc1        $f2, 0xC8($s2)
    ctx->pc = 0x3021a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3021a8: 0xc64300cc  lwc1        $f3, 0xCC($s2)
    ctx->pc = 0x3021a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3021ac:
    // 0x3021ac: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3021acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3021b0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3021b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3021b4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x3021b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3021b8: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x3021b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3021bc: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x3021bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3021c0:
    // 0x3021c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3021c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3021c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3021c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3021c8: 0x0  nop
    ctx->pc = 0x3021c8u;
    // NOP
    // 0x3021cc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3021ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3021d0: 0x0  nop
    ctx->pc = 0x3021d0u;
    // NOP
    // 0x3021d4: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x3021D4u;
    {
        const bool branch_taken_0x3021d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3021d4) {
            ctx->pc = 0x3021D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3021D4u;
            // 0x3021d8: 0x92230187  lbu         $v1, 0x187($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 391)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30221Cu;
            goto label_30221c;
        }
    }
    ctx->pc = 0x3021DCu;
    // 0x3021dc: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x3021dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3021e0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3021e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3021e4: 0x0  nop
    ctx->pc = 0x3021e4u;
    // NOP
    // 0x3021e8: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x3021E8u;
    {
        const bool branch_taken_0x3021e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3021e8) {
            ctx->pc = 0x3021ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3021E8u;
            // 0x3021ec: 0x92230187  lbu         $v1, 0x187($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 391)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30221Cu;
            goto label_30221c;
        }
    }
    ctx->pc = 0x3021F0u;
    // 0x3021f0: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x3021f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3021f4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3021f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3021f8: 0x0  nop
    ctx->pc = 0x3021f8u;
    // NOP
    // 0x3021fc: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x3021FCu;
    {
        const bool branch_taken_0x3021fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3021fc) {
            ctx->pc = 0x302200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3021FCu;
            // 0x302200: 0x92230187  lbu         $v1, 0x187($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 391)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30221Cu;
            goto label_30221c;
        }
    }
    ctx->pc = 0x302204u;
    // 0x302204: 0xc680003c  lwc1        $f0, 0x3C($s4)
    ctx->pc = 0x302204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302208: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x302208u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30220c: 0x0  nop
    ctx->pc = 0x30220cu;
    // NOP
    // 0x302210: 0x45030021  bc1tl       . + 4 + (0x21 << 2)
    ctx->pc = 0x302210u;
    {
        const bool branch_taken_0x302210 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x302210) {
            ctx->pc = 0x302214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302210u;
            // 0x302214: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302298u;
            goto label_302298;
        }
    }
    ctx->pc = 0x302218u;
    // 0x302218: 0x92230187  lbu         $v1, 0x187($s1)
    ctx->pc = 0x302218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 391)));
label_30221c:
    // 0x30221c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x30221cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x302220: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x302220u;
    {
        const bool branch_taken_0x302220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302220) {
            ctx->pc = 0x302224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302220u;
            // 0x302224: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302298u;
            goto label_302298;
        }
    }
    ctx->pc = 0x302228u;
    // 0x302228: 0x462001b  bltzl       $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x302228u;
    {
        const bool branch_taken_0x302228 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x302228) {
            ctx->pc = 0x30222Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302228u;
            // 0x30222c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302298u;
            goto label_302298;
        }
    }
    ctx->pc = 0x302230u;
    // 0x302230: 0x92220186  lbu         $v0, 0x186($s1)
    ctx->pc = 0x302230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 390)));
    // 0x302234: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x302234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x302238: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x302238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30223c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x30223cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x302240: 0xa2220186  sb          $v0, 0x186($s1)
    ctx->pc = 0x302240u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 390), (uint8_t)GPR_U32(ctx, 2));
    // 0x302244: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x302244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302248: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30224c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30224cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x302250: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x302250u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302254: 0xa222020c  sb          $v0, 0x20C($s1)
    ctx->pc = 0x302254u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 524), (uint8_t)GPR_U32(ctx, 2));
    // 0x302258: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x302258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30225c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30225cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302260: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x302260u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x302264: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x302264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302268: 0xa222020d  sb          $v0, 0x20D($s1)
    ctx->pc = 0x302268u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 525), (uint8_t)GPR_U32(ctx, 2));
    // 0x30226c: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x30226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302270: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302274: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x302274u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x302278: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x302278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30227c: 0xa222020e  sb          $v0, 0x20E($s1)
    ctx->pc = 0x30227cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 526), (uint8_t)GPR_U32(ctx, 2));
    // 0x302280: 0xc680003c  lwc1        $f0, 0x3C($s4)
    ctx->pc = 0x302280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302284: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x302284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x302288: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x302288u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30228c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x30228cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x302290: 0xa222020f  sb          $v0, 0x20F($s1)
    ctx->pc = 0x302290u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 527), (uint8_t)GPR_U32(ctx, 2));
    // 0x302294: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x302294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_302298:
    // 0x302298: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x302298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x30229c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x30229Cu;
    {
        const bool branch_taken_0x30229c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30229c) {
            ctx->pc = 0x3022A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30229Cu;
            // 0x3022a0: 0x92220187  lbu         $v0, 0x187($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 391)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3022CCu;
            goto label_3022cc;
        }
    }
    ctx->pc = 0x3022A4u;
    // 0x3022a4: 0xc0c7430  jal         func_31D0C0
    ctx->pc = 0x3022A4u;
    SET_GPR_U32(ctx, 31, 0x3022ACu);
    ctx->pc = 0x3022A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3022A4u;
    // 0x3022a8: 0x26240220  addiu       $a0, $s1, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D0C0u, 0x3022A4u, 0x3022ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3022ACu;
label_3022ac:
    // 0x3022ac: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3022acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3022b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3022b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3022b4: 0x0  nop
    ctx->pc = 0x3022b4u;
    // NOP
    // 0x3022b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3022b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3022bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3022bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3022c0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3022c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3022c4: 0xa2220185  sb          $v0, 0x185($s1)
    ctx->pc = 0x3022c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 389), (uint8_t)GPR_U32(ctx, 2));
    // 0x3022c8: 0x92220187  lbu         $v0, 0x187($s1)
    ctx->pc = 0x3022c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 391)));
label_3022cc:
    // 0x3022cc: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x3022CCu;
    {
        const bool branch_taken_0x3022cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3022cc) {
            ctx->pc = 0x3022D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3022CCu;
            // 0x3022d0: 0xae200208  sw          $zero, 0x208($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3024E8u;
            goto label_3024e8;
        }
    }
    ctx->pc = 0x3022D4u;
    // 0x3022d4: 0x26300220  addiu       $s0, $s1, 0x220
    ctx->pc = 0x3022d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x3022d8: 0xc6560124  lwc1        $f22, 0x124($s2)
    ctx->pc = 0x3022d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3022dc: 0xc0c7430  jal         func_31D0C0
    ctx->pc = 0x3022DCu;
    SET_GPR_U32(ctx, 31, 0x3022E4u);
    ctx->pc = 0x3022E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3022DCu;
    // 0x3022e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D0C0u, 0x3022DCu, 0x3022E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3022E4u;
label_3022e4:
    // 0x3022e4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3022e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3022e8: 0xc0c7430  jal         func_31D0C0
    ctx->pc = 0x3022E8u;
    SET_GPR_U32(ctx, 31, 0x3022F0u);
    ctx->pc = 0x3022ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3022E8u;
    // 0x3022ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D0C0u, 0x3022E8u, 0x3022F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3022F0u;
label_3022f0:
    // 0x3022f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3022f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3022f4: 0xc0c7430  jal         func_31D0C0
    ctx->pc = 0x3022F4u;
    SET_GPR_U32(ctx, 31, 0x3022FCu);
    ctx->pc = 0x3022F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3022F4u;
    // 0x3022f8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D0C0u, 0x3022F4u, 0x3022FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3022FCu;
label_3022fc:
    // 0x3022fc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x3022fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302300: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x302300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x302304: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x302304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x302308: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x302308u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30230c: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x30230cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x302310: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x302310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x302314: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x302314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x302318: 0x6ba3004f  ldl         $v1, 0x4F($sp)
    ctx->pc = 0x302318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30231c: 0x6fa30048  ldr         $v1, 0x48($sp)
    ctx->pc = 0x30231cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x302320: 0xb3a20077  sdl         $v0, 0x77($sp)
    ctx->pc = 0x302320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302324: 0xb7a20070  sdr         $v0, 0x70($sp)
    ctx->pc = 0x302324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302328: 0xb3a3007f  sdl         $v1, 0x7F($sp)
    ctx->pc = 0x302328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30232c: 0xb7a30078  sdr         $v1, 0x78($sp)
    ctx->pc = 0x30232cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x302330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x302334: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x302334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x302338: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x302338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30233c: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x30233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x302340: 0x46162101  sub.s       $f4, $f4, $f22
    ctx->pc = 0x302340u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[22]);
    // 0x302344: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x302344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302348: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x302348u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x30234c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x30234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302350: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x302350u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x302354: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x302354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x302358: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x302358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x30235c: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x30235cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x302360: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x302360u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x302364: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x302364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x302368: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x302368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x30236c: 0x6ba60077  ldl         $a2, 0x77($sp)
    ctx->pc = 0x30236cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x302370: 0x6fa60070  ldr         $a2, 0x70($sp)
    ctx->pc = 0x302370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x302374: 0x6ba2007f  ldl         $v0, 0x7F($sp)
    ctx->pc = 0x302374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x302378: 0x6fa20078  ldr         $v0, 0x78($sp)
    ctx->pc = 0x302378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x30237c: 0xb3a60067  sdl         $a2, 0x67($sp)
    ctx->pc = 0x30237cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302380: 0xb7a60060  sdr         $a2, 0x60($sp)
    ctx->pc = 0x302380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302384: 0xb3a2006f  sdl         $v0, 0x6F($sp)
    ctx->pc = 0x302384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302388: 0xb7a20068  sdr         $v0, 0x68($sp)
    ctx->pc = 0x302388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30238c: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x30238cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x302390: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x302390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x302394: 0x6ba6003f  ldl         $a2, 0x3F($sp)
    ctx->pc = 0x302394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x302398: 0x6fa60038  ldr         $a2, 0x38($sp)
    ctx->pc = 0x302398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x30239c: 0xb3a50087  sdl         $a1, 0x87($sp)
    ctx->pc = 0x30239cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3023a0: 0xb7a50080  sdr         $a1, 0x80($sp)
    ctx->pc = 0x3023a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3023a4: 0xb3a6008f  sdl         $a2, 0x8F($sp)
    ctx->pc = 0x3023a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3023a8: 0xb7a60088  sdr         $a2, 0x88($sp)
    ctx->pc = 0x3023a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3023ac: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x3023acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3023b0: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x3023b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3023b4: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x3023b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3023b8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3023b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3023bc: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x3023bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3023c0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3023c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3023c4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3023c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3023c8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3023c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3023cc: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x3023ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3023d0: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x3023d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3023d4: 0xe7a30088  swc1        $f3, 0x88($sp)
    ctx->pc = 0x3023d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3023d8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3023d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x3023dc: 0x6ba40087  ldl         $a0, 0x87($sp)
    ctx->pc = 0x3023dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3023e0: 0x6fa40080  ldr         $a0, 0x80($sp)
    ctx->pc = 0x3023e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3023e4: 0x6ba5008f  ldl         $a1, 0x8F($sp)
    ctx->pc = 0x3023e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3023e8: 0x6fa50088  ldr         $a1, 0x88($sp)
    ctx->pc = 0x3023e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3023ec: 0xb3a40077  sdl         $a0, 0x77($sp)
    ctx->pc = 0x3023ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3023f0: 0xb7a40070  sdr         $a0, 0x70($sp)
    ctx->pc = 0x3023f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3023f4: 0xb3a5007f  sdl         $a1, 0x7F($sp)
    ctx->pc = 0x3023f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3023f8: 0xb7a50078  sdr         $a1, 0x78($sp)
    ctx->pc = 0x3023f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3023fc: 0x6ba30067  ldl         $v1, 0x67($sp)
    ctx->pc = 0x3023fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x302400: 0x6fa30060  ldr         $v1, 0x60($sp)
    ctx->pc = 0x302400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x302404: 0x6ba4006f  ldl         $a0, 0x6F($sp)
    ctx->pc = 0x302404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x302408: 0x6fa40068  ldr         $a0, 0x68($sp)
    ctx->pc = 0x302408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x30240c: 0xb3a30087  sdl         $v1, 0x87($sp)
    ctx->pc = 0x30240cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302410: 0xb7a30080  sdr         $v1, 0x80($sp)
    ctx->pc = 0x302410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302414: 0xb3a4008f  sdl         $a0, 0x8F($sp)
    ctx->pc = 0x302414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302418: 0xb7a40088  sdr         $a0, 0x88($sp)
    ctx->pc = 0x302418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30241c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x30241cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302420: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x302420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302424: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x302424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x302428: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x302428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x30242c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x30242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302430: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x302430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302434: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x302434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302438: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x302438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30243c: 0xc7a40078  lwc1        $f4, 0x78($sp)
    ctx->pc = 0x30243cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x302440: 0xc7a5007c  lwc1        $f5, 0x7C($sp)
    ctx->pc = 0x302440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x302444: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x302444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x302448: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x302448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x30244c: 0xe6360208  swc1        $f22, 0x208($s1)
    ctx->pc = 0x30244cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 520), bits); }
    // 0x302450: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x302450u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x302454: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x302454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x302458: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x302458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x30245c: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x30245cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x302460: 0x6ba20087  ldl         $v0, 0x87($sp)
    ctx->pc = 0x302460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x302464: 0x6fa20080  ldr         $v0, 0x80($sp)
    ctx->pc = 0x302464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x302468: 0x6ba3008f  ldl         $v1, 0x8F($sp)
    ctx->pc = 0x302468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30246c: 0x6fa30088  ldr         $v1, 0x88($sp)
    ctx->pc = 0x30246cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x302470: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x302470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302474: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x302474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302478: 0xb3a3005f  sdl         $v1, 0x5F($sp)
    ctx->pc = 0x302478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30247c: 0xb7a30058  sdr         $v1, 0x58($sp)
    ctx->pc = 0x30247cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302480: 0x6ba60057  ldl         $a2, 0x57($sp)
    ctx->pc = 0x302480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x302484: 0x6fa60050  ldr         $a2, 0x50($sp)
    ctx->pc = 0x302484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x302488: 0x6ba2005f  ldl         $v0, 0x5F($sp)
    ctx->pc = 0x302488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x30248c: 0x6fa20058  ldr         $v0, 0x58($sp)
    ctx->pc = 0x30248cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x302490: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x302490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302494: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x302494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302498: 0xb3a2003f  sdl         $v0, 0x3F($sp)
    ctx->pc = 0x302498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30249c: 0xb7a20038  sdr         $v0, 0x38($sp)
    ctx->pc = 0x30249cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3024a0: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x3024a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3024a4: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x3024a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3024a8: 0x6ba6003f  ldl         $a2, 0x3F($sp)
    ctx->pc = 0x3024a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3024ac: 0x6fa60038  ldr         $a2, 0x38($sp)
    ctx->pc = 0x3024acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3024b0: 0xb22501ff  sdl         $a1, 0x1FF($s1)
    ctx->pc = 0x3024b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 511); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3024b4: 0xb62501f8  sdr         $a1, 0x1F8($s1)
    ctx->pc = 0x3024b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 504); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3024b8: 0xb2260207  sdl         $a2, 0x207($s1)
    ctx->pc = 0x3024b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 519); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3024bc: 0xb6260200  sdr         $a2, 0x200($s1)
    ctx->pc = 0x3024bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 512); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3024c0: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x3024c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3024c4: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x3024c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3024c8: 0x6ba5003f  ldl         $a1, 0x3F($sp)
    ctx->pc = 0x3024c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3024cc: 0x6fa50038  ldr         $a1, 0x38($sp)
    ctx->pc = 0x3024ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3024d0: 0xb224018f  sdl         $a0, 0x18F($s1)
    ctx->pc = 0x3024d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3024d4: 0xb6240188  sdr         $a0, 0x188($s1)
    ctx->pc = 0x3024d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3024d8: 0xb2250197  sdl         $a1, 0x197($s1)
    ctx->pc = 0x3024d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3024dc: 0xb6250190  sdr         $a1, 0x190($s1)
    ctx->pc = 0x3024dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3024e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3024E0u;
    {
        const bool branch_taken_0x3024e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3024E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3024E0u;
        // 0x3024e4: 0x92230187  lbu         $v1, 0x187($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 391)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3024e0) {
            ctx->pc = 0x30250Cu;
            goto label_30250c;
        }
    }
    ctx->pc = 0x3024E8u;
label_3024e8:
    // 0x3024e8: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x3024e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3024ec: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x3024ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3024f0: 0x6ba4003f  ldl         $a0, 0x3F($sp)
    ctx->pc = 0x3024f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3024f4: 0x6fa40038  ldr         $a0, 0x38($sp)
    ctx->pc = 0x3024f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3024f8: 0xb223018f  sdl         $v1, 0x18F($s1)
    ctx->pc = 0x3024f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3024fc: 0xb6230188  sdr         $v1, 0x188($s1)
    ctx->pc = 0x3024fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302500: 0xb2240197  sdl         $a0, 0x197($s1)
    ctx->pc = 0x302500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302504: 0xb6240190  sdr         $a0, 0x190($s1)
    ctx->pc = 0x302504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302508: 0x92230187  lbu         $v1, 0x187($s1)
    ctx->pc = 0x302508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 391)));
label_30250c:
    // 0x30250c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30250Cu;
    {
        const bool branch_taken_0x30250c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x302510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30250Cu;
        // 0x302510: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30250c) {
            ctx->pc = 0x302524u;
            goto label_302524;
        }
    }
    ctx->pc = 0x302514u;
    // 0x302514: 0x5062003b  beql        $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x302514u;
    {
        const bool branch_taken_0x302514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x302514) {
            ctx->pc = 0x302518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302514u;
            // 0x302518: 0xc64000c4  lwc1        $f0, 0xC4($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x302604u;
            goto label_302604;
        }
    }
    ctx->pc = 0x30251Cu;
    // 0x30251c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x30251Cu;
    {
        const bool branch_taken_0x30251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30251Cu;
        // 0x302520: 0x92430129  lbu         $v1, 0x129($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 297)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30251c) {
            ctx->pc = 0x302664u;
            goto label_302664;
        }
    }
    ctx->pc = 0x302524u;
label_302524:
    // 0x302524: 0x6a4200cb  ldl         $v0, 0xCB($s2)
    ctx->pc = 0x302524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 203); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x302528: 0x6e4200c4  ldr         $v0, 0xC4($s2)
    ctx->pc = 0x302528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 196); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x30252c: 0xb222019f  sdl         $v0, 0x19F($s1)
    ctx->pc = 0x30252cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 415); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302530: 0xb6220198  sdr         $v0, 0x198($s1)
    ctx->pc = 0x302530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 408); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302534: 0x6a4600d3  ldl         $a2, 0xD3($s2)
    ctx->pc = 0x302534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 211); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x302538: 0x6e4600cc  ldr         $a2, 0xCC($s2)
    ctx->pc = 0x302538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x30253c: 0xb22601a7  sdl         $a2, 0x1A7($s1)
    ctx->pc = 0x30253cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 423); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302540: 0xb62601a0  sdr         $a2, 0x1A0($s1)
    ctx->pc = 0x302540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302544: 0x6a4500db  ldl         $a1, 0xDB($s2)
    ctx->pc = 0x302544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x302548: 0x6e4500d4  ldr         $a1, 0xD4($s2)
    ctx->pc = 0x302548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x30254c: 0xb22501af  sdl         $a1, 0x1AF($s1)
    ctx->pc = 0x30254cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302550: 0xb62501a8  sdr         $a1, 0x1A8($s1)
    ctx->pc = 0x302550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302554: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x302554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302558: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x302558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30255c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x30255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x302560: 0x6a4400e3  ldl         $a0, 0xE3($s2)
    ctx->pc = 0x302560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x302564: 0x6e4400dc  ldr         $a0, 0xDC($s2)
    ctx->pc = 0x302564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x302568: 0xb22401b7  sdl         $a0, 0x1B7($s1)
    ctx->pc = 0x302568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 439); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30256c: 0xb62401b0  sdr         $a0, 0x1B0($s1)
    ctx->pc = 0x30256cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302570: 0x6a4300eb  ldl         $v1, 0xEB($s2)
    ctx->pc = 0x302570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 235); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x302574: 0x6e4300e4  ldr         $v1, 0xE4($s2)
    ctx->pc = 0x302574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 228); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x302578: 0x6a4400f3  ldl         $a0, 0xF3($s2)
    ctx->pc = 0x302578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 243); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x30257c: 0x6e4400ec  ldr         $a0, 0xEC($s2)
    ctx->pc = 0x30257cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x302580: 0xb22301bf  sdl         $v1, 0x1BF($s1)
    ctx->pc = 0x302580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 447); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302584: 0xb62301b8  sdr         $v1, 0x1B8($s1)
    ctx->pc = 0x302584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 440); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302588: 0xb22401c7  sdl         $a0, 0x1C7($s1)
    ctx->pc = 0x302588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30258c: 0xb62401c0  sdr         $a0, 0x1C0($s1)
    ctx->pc = 0x30258cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x302590: 0xe62001bc  swc1        $f0, 0x1BC($s1)
    ctx->pc = 0x302590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 444), bits); }
    // 0x302594: 0xe62101c0  swc1        $f1, 0x1C0($s1)
    ctx->pc = 0x302594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 448), bits); }
    // 0x302598: 0xe62201c4  swc1        $f2, 0x1C4($s1)
    ctx->pc = 0x302598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
    // 0x30259c: 0x6a4200fb  ldl         $v0, 0xFB($s2)
    ctx->pc = 0x30259cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 251); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3025a0: 0x6e4200f4  ldr         $v0, 0xF4($s2)
    ctx->pc = 0x3025a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 244); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3025a4: 0x6a430103  ldl         $v1, 0x103($s2)
    ctx->pc = 0x3025a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 259); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3025a8: 0x6e4300fc  ldr         $v1, 0xFC($s2)
    ctx->pc = 0x3025a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 252); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3025ac: 0xb22201cf  sdl         $v0, 0x1CF($s1)
    ctx->pc = 0x3025acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 463); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3025b0: 0xb62201c8  sdr         $v0, 0x1C8($s1)
    ctx->pc = 0x3025b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 456); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3025b4: 0xb22301d7  sdl         $v1, 0x1D7($s1)
    ctx->pc = 0x3025b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3025b8: 0xb62301d0  sdr         $v1, 0x1D0($s1)
    ctx->pc = 0x3025b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3025bc: 0x6a46010b  ldl         $a2, 0x10B($s2)
    ctx->pc = 0x3025bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3025c0: 0x6e460104  ldr         $a2, 0x104($s2)
    ctx->pc = 0x3025c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 260); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3025c4: 0x6a420113  ldl         $v0, 0x113($s2)
    ctx->pc = 0x3025c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 275); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3025c8: 0x6e42010c  ldr         $v0, 0x10C($s2)
    ctx->pc = 0x3025c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3025cc: 0xb22601df  sdl         $a2, 0x1DF($s1)
    ctx->pc = 0x3025ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 479); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3025d0: 0xb62601d8  sdr         $a2, 0x1D8($s1)
    ctx->pc = 0x3025d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3025d4: 0xb22201e7  sdl         $v0, 0x1E7($s1)
    ctx->pc = 0x3025d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 487); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3025d8: 0xb62201e0  sdr         $v0, 0x1E0($s1)
    ctx->pc = 0x3025d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 480); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3025dc: 0x6a45011b  ldl         $a1, 0x11B($s2)
    ctx->pc = 0x3025dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 283); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3025e0: 0x6e450114  ldr         $a1, 0x114($s2)
    ctx->pc = 0x3025e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3025e4: 0x6a460123  ldl         $a2, 0x123($s2)
    ctx->pc = 0x3025e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3025e8: 0x6e46011c  ldr         $a2, 0x11C($s2)
    ctx->pc = 0x3025e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3025ec: 0xb22501ef  sdl         $a1, 0x1EF($s1)
    ctx->pc = 0x3025ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 495); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3025f0: 0xb62501e8  sdr         $a1, 0x1E8($s1)
    ctx->pc = 0x3025f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 488); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3025f4: 0xb22601f7  sdl         $a2, 0x1F7($s1)
    ctx->pc = 0x3025f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3025f8: 0xb62601f0  sdr         $a2, 0x1F0($s1)
    ctx->pc = 0x3025f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3025fc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3025FCu;
    {
        const bool branch_taken_0x3025fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025FCu;
        // 0x302600: 0x92430129  lbu         $v1, 0x129($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 297)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3025fc) {
            ctx->pc = 0x302664u;
            goto label_302664;
        }
    }
    ctx->pc = 0x302604u;
label_302604:
    // 0x302604: 0xe6200198  swc1        $f0, 0x198($s1)
    ctx->pc = 0x302604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 408), bits); }
    // 0x302608: 0xc64100c8  lwc1        $f1, 0xC8($s2)
    ctx->pc = 0x302608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30260c: 0xe621019c  swc1        $f1, 0x19C($s1)
    ctx->pc = 0x30260cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 412), bits); }
    // 0x302610: 0xc64000cc  lwc1        $f0, 0xCC($s2)
    ctx->pc = 0x302610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302614: 0xe62001a0  swc1        $f0, 0x1A0($s1)
    ctx->pc = 0x302614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
    // 0x302618: 0xc64100d0  lwc1        $f1, 0xD0($s2)
    ctx->pc = 0x302618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30261c: 0xe62101a4  swc1        $f1, 0x1A4($s1)
    ctx->pc = 0x30261cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 420), bits); }
    // 0x302620: 0xc64000d4  lwc1        $f0, 0xD4($s2)
    ctx->pc = 0x302620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302624: 0xe62001a8  swc1        $f0, 0x1A8($s1)
    ctx->pc = 0x302624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 424), bits); }
    // 0x302628: 0xc64100d8  lwc1        $f1, 0xD8($s2)
    ctx->pc = 0x302628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30262c: 0xe62101ac  swc1        $f1, 0x1AC($s1)
    ctx->pc = 0x30262cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 428), bits); }
    // 0x302630: 0xc64000dc  lwc1        $f0, 0xDC($s2)
    ctx->pc = 0x302630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302634: 0xe62001b0  swc1        $f0, 0x1B0($s1)
    ctx->pc = 0x302634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 432), bits); }
    // 0x302638: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x302638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30263c: 0xe62101b4  swc1        $f1, 0x1B4($s1)
    ctx->pc = 0x30263cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 436), bits); }
    // 0x302640: 0xc64000e4  lwc1        $f0, 0xE4($s2)
    ctx->pc = 0x302640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302644: 0xe62001b8  swc1        $f0, 0x1B8($s1)
    ctx->pc = 0x302644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 440), bits); }
    // 0x302648: 0xc64100e8  lwc1        $f1, 0xE8($s2)
    ctx->pc = 0x302648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30264c: 0xe62101bc  swc1        $f1, 0x1BC($s1)
    ctx->pc = 0x30264cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 444), bits); }
    // 0x302650: 0xc64000ec  lwc1        $f0, 0xEC($s2)
    ctx->pc = 0x302650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302654: 0xe62001c0  swc1        $f0, 0x1C0($s1)
    ctx->pc = 0x302654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 448), bits); }
    // 0x302658: 0xc64100f0  lwc1        $f1, 0xF0($s2)
    ctx->pc = 0x302658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30265c: 0xe62101c4  swc1        $f1, 0x1C4($s1)
    ctx->pc = 0x30265cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
    // 0x302660: 0x92430129  lbu         $v1, 0x129($s2)
    ctx->pc = 0x302660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 297)));
label_302664:
    // 0x302664: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x302664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x302668: 0xa2230247  sb          $v1, 0x247($s1)
    ctx->pc = 0x302668u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 583), (uint8_t)GPR_U32(ctx, 3));
    // 0x30266c: 0x92420134  lbu         $v0, 0x134($s2)
    ctx->pc = 0x30266cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 308)));
    // 0x302670: 0xa222024a  sb          $v0, 0x24A($s1)
    ctx->pc = 0x302670u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 586), (uint8_t)GPR_U32(ctx, 2));
    // 0x302674: 0x92430135  lbu         $v1, 0x135($s2)
    ctx->pc = 0x302674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 309)));
    // 0x302678: 0xa223024b  sb          $v1, 0x24B($s1)
    ctx->pc = 0x302678u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 587), (uint8_t)GPR_U32(ctx, 3));
    // 0x30267c: 0x964202ca  lhu         $v0, 0x2CA($s2)
    ctx->pc = 0x30267cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 714)));
    // 0x302680: 0xa6220276  sh          $v0, 0x276($s1)
    ctx->pc = 0x302680u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 630), (uint16_t)GPR_U32(ctx, 2));
    // 0x302684: 0xc6400138  lwc1        $f0, 0x138($s2)
    ctx->pc = 0x302684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302688: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x302688u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x30268c: 0xe6200254  swc1        $f0, 0x254($s1)
    ctx->pc = 0x30268cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 596), bits); }
    // 0x302690: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x302690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x302694: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x302694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x302698: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x302698u;
    {
        const bool branch_taken_0x302698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302698) {
            ctx->pc = 0x30269Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302698u;
            // 0x30269c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30271Cu;
            goto label_30271c;
        }
    }
    ctx->pc = 0x3026A0u;
    // 0x3026a0: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x3026A0u;
    SET_GPR_U32(ctx, 31, 0x3026A8u);
    ctx->pc = 0x3026A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3026A0u;
    // 0x3026a4: 0x26240220  addiu       $a0, $s1, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x3026A0u, 0x3026A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3026A8u;
label_3026a8:
    // 0x3026a8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3026a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3026ac: 0x0  nop
    ctx->pc = 0x3026acu;
    // NOP
    // 0x3026b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3026b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3026b4: 0x0  nop
    ctx->pc = 0x3026b4u;
    // NOP
    // 0x3026b8: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x3026B8u;
    {
        const bool branch_taken_0x3026b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3026b8) {
            ctx->pc = 0x3026BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3026B8u;
            // 0x3026bc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30271Cu;
            goto label_30271c;
        }
    }
    ctx->pc = 0x3026C0u;
    // 0x3026c0: 0xc6200178  lwc1        $f0, 0x178($s1)
    ctx->pc = 0x3026c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3026c4: 0xc621017c  lwc1        $f1, 0x17C($s1)
    ctx->pc = 0x3026c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3026c8: 0xc6220180  lwc1        $f2, 0x180($s1)
    ctx->pc = 0x3026c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3026cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3026ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3026d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3026d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3026d4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3026d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3026d8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3026d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3026dc: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3026dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3026e0: 0xe7c3000c  swc1        $f3, 0xC($fp)
    ctx->pc = 0x3026e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x3026e4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3026e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3026e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3026e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3026ec: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x3026ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3026f0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3026f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3026f4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x3026f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3026f8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x3026f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3026fc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x3026fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x302700: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x302700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302704: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x302704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302708: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x302708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30270c: 0xe6210178  swc1        $f1, 0x178($s1)
    ctx->pc = 0x30270cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x302710: 0xe620017c  swc1        $f0, 0x17C($s1)
    ctx->pc = 0x302710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
    // 0x302714: 0xe6220180  swc1        $f2, 0x180($s1)
    ctx->pc = 0x302714u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x302718: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x302718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_30271c:
    // 0x30271c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x30271cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x302720: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x302720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x302724: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x302724u;
    {
        const bool branch_taken_0x302724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302724) {
            ctx->pc = 0x302728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x302724u;
            // 0x302728: 0x8e230114  lw          $v1, 0x114($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30273Cu;
            goto label_30273c;
        }
    }
    ctx->pc = 0x30272Cu;
    // 0x30272c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x30272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x302730: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x302730u;
    {
        const bool branch_taken_0x302730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302730u;
        // 0x302734: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302730) {
            ctx->pc = 0x302754u;
            goto label_302754;
        }
    }
    ctx->pc = 0x302738u;
    // 0x302738: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x302738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_30273c:
    // 0x30273c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30273Cu;
    {
        const bool branch_taken_0x30273c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x302740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30273Cu;
        // 0x302740: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30273c) {
            ctx->pc = 0x302754u;
            goto label_302754;
        }
    }
    ctx->pc = 0x302744u;
    // 0x302744: 0x906202f4  lbu         $v0, 0x2F4($v1)
    ctx->pc = 0x302744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 756)));
    // 0x302748: 0xa2220274  sb          $v0, 0x274($s1)
    ctx->pc = 0x302748u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 628), (uint8_t)GPR_U32(ctx, 2));
    // 0x30274c: 0x906302f5  lbu         $v1, 0x2F5($v1)
    ctx->pc = 0x30274cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 757)));
    // 0x302750: 0xa2230275  sb          $v1, 0x275($s1)
    ctx->pc = 0x302750u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 629), (uint8_t)GPR_U32(ctx, 3));
label_302754:
    // 0x302754: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x302754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x302758: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x302758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x30275c: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x30275cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x302760: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x302760u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x302764: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x302764u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x302768: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x302768u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30276c: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x30276cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x302770: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x302770u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x302774: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x302774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x302778: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x302778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x30277c: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x30277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x302780: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x302780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x302784: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x302784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x302788: 0x3e00008  jr          $ra
    ctx->pc = 0x302788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302788u;
        // 0x30278c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302790u;
}
