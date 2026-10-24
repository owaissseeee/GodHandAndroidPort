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

// Function: func_002E35C0
// Address: 0x2e35c0 - 0x2e4280
void func_002E35C0_0x2e35c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E35C0_0x2e35c0");
#endif

    switch (ctx->pc) {
        case 0x2e36bcu: goto label_2e36bc;
        case 0x2e36d4u: goto label_2e36d4;
        case 0x2e36f8u: goto label_2e36f8;
        case 0x2e3720u: goto label_2e3720;
        case 0x2e3d94u: goto label_2e3d94;
        case 0x2e3db0u: goto label_2e3db0;
        case 0x2e3df0u: goto label_2e3df0;
        case 0x2e3e28u: goto label_2e3e28;
        case 0x2e3e74u: goto label_2e3e74;
        case 0x2e3e7cu: goto label_2e3e7c;
        case 0x2e3ebcu: goto label_2e3ebc;
        case 0x2e3ec4u: goto label_2e3ec4;
        case 0x2e3ed8u: goto label_2e3ed8;
        case 0x2e3ee0u: goto label_2e3ee0;
        case 0x2e3ef0u: goto label_2e3ef0;
        case 0x2e3ef8u: goto label_2e3ef8;
        case 0x2e3f28u: goto label_2e3f28;
        case 0x2e3f6cu: goto label_2e3f6c;
        case 0x2e3f74u: goto label_2e3f74;
        case 0x2e3f80u: goto label_2e3f80;
        case 0x2e3f88u: goto label_2e3f88;
        case 0x2e3fc8u: goto label_2e3fc8;
        case 0x2e3fd0u: goto label_2e3fd0;
        case 0x2e3fdcu: goto label_2e3fdc;
        case 0x2e3fe4u: goto label_2e3fe4;
        case 0x2e4024u: goto label_2e4024;
        case 0x2e402cu: goto label_2e402c;
        case 0x2e4038u: goto label_2e4038;
        case 0x2e4040u: goto label_2e4040;
        case 0x2e4080u: goto label_2e4080;
        case 0x2e4088u: goto label_2e4088;
        case 0x2e4094u: goto label_2e4094;
        case 0x2e409cu: goto label_2e409c;
        default: break;
    }

    ctx->pc = 0x2e35c0u;

    // 0x2e35c0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2e35c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2e35c4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2e35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2e35c8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2e35c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2e35cc: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x2e35ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e35d0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2e35d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2e35d4: 0x240d0012  addiu       $t5, $zero, 0x12
    ctx->pc = 0x2e35d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e35d8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2e35d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2e35dc: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x2e35dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e35e0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2e35e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2e35e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e35e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35e8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2e35e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2e35ec: 0x24534240  addiu       $s3, $v0, 0x4240
    ctx->pc = 0x2e35ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16960));
    // 0x2e35f0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2e35f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2e35f4: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x2e35f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e35f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e35f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e35fc: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2e35fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2e3600: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2e3600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x2e3604: 0x240b0048  addiu       $t3, $zero, 0x48
    ctx->pc = 0x2e3604u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2e3608: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2e3608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x2e360c: 0x24090288  addiu       $t1, $zero, 0x288
    ctx->pc = 0x2e360cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 648));
    // 0x2e3610: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e3610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e3614: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x2e3614u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2e3618: 0xe7bf0128  swc1        $f31, 0x128($sp)
    ctx->pc = 0x2e3618u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2e361c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2e361cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3620: 0xe7be0120  swc1        $f30, 0x120($sp)
    ctx->pc = 0x2e3620u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2e3624: 0x24100024  addiu       $s0, $zero, 0x24
    ctx->pc = 0x2e3624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2e3628: 0xe7bd0118  swc1        $f29, 0x118($sp)
    ctx->pc = 0x2e3628u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2e362c: 0x24045df0  addiu       $a0, $zero, 0x5DF0
    ctx->pc = 0x2e362cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24048));
    // 0x2e3630: 0xe7bc0110  swc1        $f28, 0x110($sp)
    ctx->pc = 0x2e3630u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2e3634: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2e3634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e3638: 0xe7bb0108  swc1        $f27, 0x108($sp)
    ctx->pc = 0x2e3638u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2e363c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e363cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3640: 0xe7ba0100  swc1        $f26, 0x100($sp)
    ctx->pc = 0x2e3640u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2e3644: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x2e3644u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2e3648: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x2e3648u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2e364c: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x2e364cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2e3650: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2e3650u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2e3654: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2e3654u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2e3658: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2e3658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2e365c: 0x8e470110  lw          $a3, 0x110($s2)
    ctx->pc = 0x2e365cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x2e3660: 0xc4e0013c  lwc1        $f0, 0x13C($a3)
    ctx->pc = 0x2e3660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3664: 0xe64002f0  swc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 752), bits); }
    // 0x2e3668: 0xc4e00140  lwc1        $f0, 0x140($a3)
    ctx->pc = 0x2e3668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e366c: 0xe64002f4  swc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e366cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 756), bits); }
    // 0x2e3670: 0x80e3018c  lb          $v1, 0x18C($a3)
    ctx->pc = 0x2e3670u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 396)));
    // 0x2e3674: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e3674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e3678: 0xae4302f8  sw          $v1, 0x2F8($s2)
    ctx->pc = 0x2e3678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 760), GPR_U32(ctx, 3));
    // 0x2e367c: 0x80e2018d  lb          $v0, 0x18D($a3)
    ctx->pc = 0x2e367cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 397)));
    // 0x2e3680: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e3680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e3684: 0xa2420328  sb          $v0, 0x328($s2)
    ctx->pc = 0x2e3684u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 808), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e3688: 0x80e3018e  lb          $v1, 0x18E($a3)
    ctx->pc = 0x2e3688u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 398)));
    // 0x2e368c: 0xae4c0308  sw          $t4, 0x308($s2)
    ctx->pc = 0x2e368cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 776), GPR_U32(ctx, 12));
    // 0x2e3690: 0xae43032c  sw          $v1, 0x32C($s2)
    ctx->pc = 0x2e3690u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 812), GPR_U32(ctx, 3));
    // 0x2e3694: 0xae510320  sw          $s1, 0x320($s2)
    ctx->pc = 0x2e3694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 17));
    // 0x2e3698: 0xae4d02f8  sw          $t5, 0x2F8($s2)
    ctx->pc = 0x2e3698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 760), GPR_U32(ctx, 13));
    // 0x2e369c: 0xae4e0300  sw          $t6, 0x300($s2)
    ctx->pc = 0x2e369cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 768), GPR_U32(ctx, 14));
    // 0x2e36a0: 0xae4f0304  sw          $t7, 0x304($s2)
    ctx->pc = 0x2e36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 772), GPR_U32(ctx, 15));
    // 0x2e36a4: 0xae480310  sw          $t0, 0x310($s2)
    ctx->pc = 0x2e36a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 784), GPR_U32(ctx, 8));
    // 0x2e36a8: 0xae50031c  sw          $s0, 0x31C($s2)
    ctx->pc = 0x2e36a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 796), GPR_U32(ctx, 16));
    // 0x2e36ac: 0xae4b0318  sw          $t3, 0x318($s2)
    ctx->pc = 0x2e36acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 792), GPR_U32(ctx, 11));
    // 0x2e36b0: 0xae490314  sw          $t1, 0x314($s2)
    ctx->pc = 0x2e36b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 788), GPR_U32(ctx, 9));
    // 0x2e36b4: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2E36B4u;
    SET_GPR_U32(ctx, 31, 0x2E36BCu);
    ctx->pc = 0x2E36B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E36B4u;
    // 0x2e36b8: 0xae4a02fc  sw          $t2, 0x2FC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 764), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2E36B4u, 0x2E36BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36BCu;
label_2e36bc:
    // 0x2e36bc: 0x104001be  beqz        $v0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x2E36BCu;
    {
        const bool branch_taken_0x2e36bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36BCu;
        // 0x2e36c0: 0xae420330  sw          $v0, 0x330($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e36bc) {
            ctx->pc = 0x2E3DB8u;
            goto label_2e3db8;
        }
    }
    ctx->pc = 0x2E36C4u;
    // 0x2e36c4: 0x24045df0  addiu       $a0, $zero, 0x5DF0
    ctx->pc = 0x2e36c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24048));
    // 0x2e36c8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2e36c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e36cc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2E36CCu;
    SET_GPR_U32(ctx, 31, 0x2E36D4u);
    ctx->pc = 0x2E36D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E36CCu;
    // 0x2e36d0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2E36CCu, 0x2E36D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36D4u;
label_2e36d4:
    // 0x2e36d4: 0x104001b8  beqz        $v0, . + 4 + (0x1B8 << 2)
    ctx->pc = 0x2E36D4u;
    {
        const bool branch_taken_0x2e36d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36D4u;
        // 0x2e36d8: 0xae420334  sw          $v0, 0x334($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e36d4) {
            ctx->pc = 0x2E3DB8u;
            goto label_2e3db8;
        }
    }
    ctx->pc = 0x2E36DCu;
    // 0x2e36dc: 0x8e4402f8  lw          $a0, 0x2F8($s2)
    ctx->pc = 0x2e36dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 760)));
    // 0x2e36e0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2e36e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e36e4: 0x8e420308  lw          $v0, 0x308($s2)
    ctx->pc = 0x2e36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 776)));
    // 0x2e36e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e36e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36ec: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2e36ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e36f0: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2E36F0u;
    SET_GPR_U32(ctx, 31, 0x2E36F8u);
    ctx->pc = 0x2E36F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E36F0u;
    // 0x2e36f4: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2E36F0u, 0x2E36F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36F8u;
label_2e36f8:
    // 0x2e36f8: 0x104001af  beqz        $v0, . + 4 + (0x1AF << 2)
    ctx->pc = 0x2E36F8u;
    {
        const bool branch_taken_0x2e36f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36F8u;
        // 0x2e36fc: 0xae4202bc  sw          $v0, 0x2BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e36f8) {
            ctx->pc = 0x2E3DB8u;
            goto label_2e3db8;
        }
    }
    ctx->pc = 0x2E3700u;
    // 0x2e3700: 0x8e4402f8  lw          $a0, 0x2F8($s2)
    ctx->pc = 0x2e3700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 760)));
    // 0x2e3704: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2e3704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e3708: 0x8e420320  lw          $v0, 0x320($s2)
    ctx->pc = 0x2e3708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 800)));
    // 0x2e370c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e370cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3710: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2e3710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e3714: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e3714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e3718: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2E3718u;
    SET_GPR_U32(ctx, 31, 0x2E3720u);
    ctx->pc = 0x2E371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3718u;
    // 0x2e371c: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2E3718u, 0x2E3720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3720u;
label_2e3720:
    // 0x2e3720: 0x104001a5  beqz        $v0, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x2E3720u;
    {
        const bool branch_taken_0x2e3720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3720u;
        // 0x2e3724: 0xae42030c  sw          $v0, 0x30C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3720) {
            ctx->pc = 0x2E3DB8u;
            goto label_2e3db8;
        }
    }
    ctx->pc = 0x2E3728u;
    // 0x2e3728: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e3728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e372c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e372cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e3730: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3734: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x2e3734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e3738: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e3738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e373c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e373cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e3740: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2e3740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e3744: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2e3744u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3748: 0xe64002f4  swc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e3748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 756), bits); }
    // 0x2e374c: 0xe64002f0  swc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e374cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 752), bits); }
    // 0x2e3750: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e3750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3754: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3754u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3758: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2e3758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e375c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e375cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e3760: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3764: 0x3c013fb4  lui         $at, 0x3FB4
    ctx->pc = 0x2e3764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16308 << 16));
    // 0x2e3768: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x2e3768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x2e376c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e376cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e3770: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3774: 0xc64102f4  lwc1        $f1, 0x2F4($s2)
    ctx->pc = 0x2e3774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3778: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3778u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e377c: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e377cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3780: 0x0  nop
    ctx->pc = 0x2e3780u;
    // NOP
    // 0x2e3784: 0x0  nop
    ctx->pc = 0x2e3784u;
    // NOP
    // 0x2e3788: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e3788u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e378c: 0x3c013d99  lui         $at, 0x3D99
    ctx->pc = 0x2e378cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15769 << 16));
    // 0x2e3790: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e3790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e3794: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2e3794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e3798: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2e3798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e379c: 0x0  nop
    ctx->pc = 0x2e379cu;
    // NOP
    // 0x2e37a0: 0x0  nop
    ctx->pc = 0x2e37a0u;
    // NOP
    // 0x2e37a4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e37a4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e37a8: 0x46002147  neg.s       $f5, $f4
    ctx->pc = 0x2e37a8u;
    ctx->f[5] = FPU_NEG_S(ctx->f[4]);
    // 0x2e37ac: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2e37acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2e37b0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2e37b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e37b4: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x2e37b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e37b8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e37b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2e37bc: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e37bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e37c0: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e37c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e37c4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2e37c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2e37c8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2e37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e37cc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e37ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e37d0: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e37d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e37d4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e37d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e37d8: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e37d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e37dc: 0xc64102f4  lwc1        $f1, 0x2F4($s2)
    ctx->pc = 0x2e37dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e37e0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e37e0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e37e4: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e37e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e37e8: 0x0  nop
    ctx->pc = 0x2e37e8u;
    // NOP
    // 0x2e37ec: 0x0  nop
    ctx->pc = 0x2e37ecu;
    // NOP
    // 0x2e37f0: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e37f0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e37f4: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x2e37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2e37f8: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2e37f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2e37fc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e37fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3800: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3800u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3804: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3808: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e380c: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3810: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x2e3810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2e3814: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2e3814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2e3818: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3818u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e381c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e381cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e3820: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3824: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e3824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3828: 0xc64102f0  lwc1        $f1, 0x2F0($s2)
    ctx->pc = 0x2e3828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e382c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e382cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3830: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3834: 0x0  nop
    ctx->pc = 0x2e3834u;
    // NOP
    // 0x2e3838: 0x0  nop
    ctx->pc = 0x2e3838u;
    // NOP
    // 0x2e383c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e383cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e3840: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x2e3840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2e3844: 0x0  nop
    ctx->pc = 0x2e3844u;
    // NOP
    // 0x2e3848: 0x0  nop
    ctx->pc = 0x2e3848u;
    // NOP
    // 0x2e384c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e384cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e3850: 0xe4610050  swc1        $f1, 0x50($v1)
    ctx->pc = 0x2e3850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2e3854: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3858: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e3858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e385c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e385cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3860: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e3860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3864: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e3864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3868: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3868u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e386c: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x2e386cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x2e3870: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2e3870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2e3874: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3874u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3878: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e3878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e387c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e387cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3880: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3884: 0xc64102f4  lwc1        $f1, 0x2F4($s2)
    ctx->pc = 0x2e3884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3888: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3888u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e388c: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e388cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3890: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2e3890u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2e3894: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x2e3894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2e3898: 0x0  nop
    ctx->pc = 0x2e3898u;
    // NOP
    // 0x2e389c: 0x0  nop
    ctx->pc = 0x2e389cu;
    // NOP
    // 0x2e38a0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e38a0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e38a4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e38a4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e38a8: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x2e38a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x2e38ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e38acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e38b0: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e38b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e38b4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e38b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e38b8: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e38b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e38bc: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e38bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e38c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e38c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e38c4: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x2e38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2e38c8: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x2e38c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x2e38cc: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e38ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e38d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e38d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e38d4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e38d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e38d8: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e38d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e38dc: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e38dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e38e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e38e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e38e4: 0x24620090  addiu       $v0, $v1, 0x90
    ctx->pc = 0x2e38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x2e38e8: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2e38e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2e38ec: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e38ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e38f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e38f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e38f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e38f8: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e38f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e38fc: 0xc64102f4  lwc1        $f1, 0x2F4($s2)
    ctx->pc = 0x2e38fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3900: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3900u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3904: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e3904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3908: 0x0  nop
    ctx->pc = 0x2e3908u;
    // NOP
    // 0x2e390c: 0x0  nop
    ctx->pc = 0x2e390cu;
    // NOP
    // 0x2e3910: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e3910u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e3914: 0x244300a0  addiu       $v1, $v0, 0xA0
    ctx->pc = 0x2e3914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2e3918: 0x0  nop
    ctx->pc = 0x2e3918u;
    // NOP
    // 0x2e391c: 0x0  nop
    ctx->pc = 0x2e391cu;
    // NOP
    // 0x2e3920: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e3920u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e3924: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2e3924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2e3928: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2e3928u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e392c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e392cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2e3930: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x2e3930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e3934: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e3934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3938: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e3938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e393c: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x2e393cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x2e3940: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2e3940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2e3944: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e3944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3948: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e394c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e394cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3950: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3954: 0xc64102f4  lwc1        $f1, 0x2F4($s2)
    ctx->pc = 0x2e3954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3958: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e3958u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e395c: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e395cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3960: 0x0  nop
    ctx->pc = 0x2e3960u;
    // NOP
    // 0x2e3964: 0x0  nop
    ctx->pc = 0x2e3964u;
    // NOP
    // 0x2e3968: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e3968u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e396c: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x2e396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x2e3970: 0xe46000c0  swc1        $f0, 0xC0($v1)
    ctx->pc = 0x2e3970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x2e3974: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e3974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3978: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e397c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e397cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3980: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3984: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3988: 0x246200d0  addiu       $v0, $v1, 0xD0
    ctx->pc = 0x2e3988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2e398c: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x2e398cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2e3990: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3990u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3994: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e3994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e3998: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e399c: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e39a0: 0xc64102f0  lwc1        $f1, 0x2F0($s2)
    ctx->pc = 0x2e39a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e39a4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e39a4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e39a8: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e39a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e39ac: 0x0  nop
    ctx->pc = 0x2e39acu;
    // NOP
    // 0x2e39b0: 0x0  nop
    ctx->pc = 0x2e39b0u;
    // NOP
    // 0x2e39b4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e39b4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e39b8: 0x246200e0  addiu       $v0, $v1, 0xE0
    ctx->pc = 0x2e39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x2e39bc: 0x0  nop
    ctx->pc = 0x2e39bcu;
    // NOP
    // 0x2e39c0: 0x0  nop
    ctx->pc = 0x2e39c0u;
    // NOP
    // 0x2e39c4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e39c4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e39c8: 0xe46100e0  swc1        $f1, 0xE0($v1)
    ctx->pc = 0x2e39c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x2e39cc: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e39ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e39d0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e39d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e39d4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e39d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e39d8: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e39d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e39dc: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e39dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e39e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e39e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e39e4: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x2e39e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x2e39e8: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x2e39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x2e39ec: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e39ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e39f0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e39f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e39f4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e39f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e39f8: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e39f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e39fc: 0xc64102f4  lwc1        $f1, 0x2F4($s2)
    ctx->pc = 0x2e39fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3a00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3a00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3a04: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3a08: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2e3a08u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2e3a0c: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x2e3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2e3a10: 0x0  nop
    ctx->pc = 0x2e3a10u;
    // NOP
    // 0x2e3a14: 0x0  nop
    ctx->pc = 0x2e3a14u;
    // NOP
    // 0x2e3a18: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e3a18u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e3a1c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e3a1cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e3a20: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x2e3a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x2e3a24: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e3a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3a28: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3a28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3a2c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3a30: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3a34: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3a38: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3a38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3a3c: 0x24620110  addiu       $v0, $v1, 0x110
    ctx->pc = 0x2e3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x2e3a40: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x2e3a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x2e3a44: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3a44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3a48: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e3a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e3a4c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3a50: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3a54: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3a58: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3a58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3a5c: 0x24620120  addiu       $v0, $v1, 0x120
    ctx->pc = 0x2e3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2e3a60: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x2e3a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x2e3a64: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3a64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3a68: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e3a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e3a6c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3a70: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3a74: 0xc64102f4  lwc1        $f1, 0x2F4($s2)
    ctx->pc = 0x2e3a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3a78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3a78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3a7c: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3a80: 0x0  nop
    ctx->pc = 0x2e3a80u;
    // NOP
    // 0x2e3a84: 0x0  nop
    ctx->pc = 0x2e3a84u;
    // NOP
    // 0x2e3a88: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e3a88u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e3a8c: 0x24430130  addiu       $v1, $v0, 0x130
    ctx->pc = 0x2e3a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x2e3a90: 0x0  nop
    ctx->pc = 0x2e3a90u;
    // NOP
    // 0x2e3a94: 0x0  nop
    ctx->pc = 0x2e3a94u;
    // NOP
    // 0x2e3a98: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e3a98u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e3a9c: 0xe4400130  swc1        $f0, 0x130($v0)
    ctx->pc = 0x2e3a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 304), bits); }
    // 0x2e3aa0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2e3aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e3aa4: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x2e3aa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e3aa8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e3aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2e3aac: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3ab0: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e3ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3ab4: 0xac400140  sw          $zero, 0x140($v0)
    ctx->pc = 0x2e3ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
    // 0x2e3ab8: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x2e3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x2e3abc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e3abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3ac0: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3ac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3ac4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3ac8: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3acc: 0xc64102f4  lwc1        $f1, 0x2F4($s2)
    ctx->pc = 0x2e3accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3ad0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e3ad0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e3ad4: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3ad8: 0x0  nop
    ctx->pc = 0x2e3ad8u;
    // NOP
    // 0x2e3adc: 0x0  nop
    ctx->pc = 0x2e3adcu;
    // NOP
    // 0x2e3ae0: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e3ae0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e3ae4: 0x24620150  addiu       $v0, $v1, 0x150
    ctx->pc = 0x2e3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x2e3ae8: 0xe4600150  swc1        $f0, 0x150($v1)
    ctx->pc = 0x2e3ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 336), bits); }
    // 0x2e3aec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e3aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3af0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3af4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3af4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3af8: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3afc: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3b00: 0x24620160  addiu       $v0, $v1, 0x160
    ctx->pc = 0x2e3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x2e3b04: 0xe4600160  swc1        $f0, 0x160($v1)
    ctx->pc = 0x2e3b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 352), bits); }
    // 0x2e3b08: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3b0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e3b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e3b10: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3b14: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e3b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3b18: 0xc64102f0  lwc1        $f1, 0x2F0($s2)
    ctx->pc = 0x2e3b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3b1c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3b1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3b20: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3b24: 0x0  nop
    ctx->pc = 0x2e3b24u;
    // NOP
    // 0x2e3b28: 0x0  nop
    ctx->pc = 0x2e3b28u;
    // NOP
    // 0x2e3b2c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e3b2cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e3b30: 0x24620170  addiu       $v0, $v1, 0x170
    ctx->pc = 0x2e3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x2e3b34: 0x0  nop
    ctx->pc = 0x2e3b34u;
    // NOP
    // 0x2e3b38: 0x0  nop
    ctx->pc = 0x2e3b38u;
    // NOP
    // 0x2e3b3c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e3b3cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e3b40: 0xe4610170  swc1        $f1, 0x170($v1)
    ctx->pc = 0x2e3b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 368), bits); }
    // 0x2e3b44: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3b44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3b48: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e3b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3b4c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3b50: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e3b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3b54: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3b58: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3b58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3b5c: 0xac400180  sw          $zero, 0x180($v0)
    ctx->pc = 0x2e3b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
    // 0x2e3b60: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x2e3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2e3b64: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3b64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3b68: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e3b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3b6c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3b70: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3b74: 0xc64102f4  lwc1        $f1, 0x2F4($s2)
    ctx->pc = 0x2e3b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3b78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3b78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3b7c: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3b80: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2e3b80u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2e3b84: 0x24620190  addiu       $v0, $v1, 0x190
    ctx->pc = 0x2e3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x2e3b88: 0x0  nop
    ctx->pc = 0x2e3b88u;
    // NOP
    // 0x2e3b8c: 0x0  nop
    ctx->pc = 0x2e3b8cu;
    // NOP
    // 0x2e3b90: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e3b90u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e3b94: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e3b94u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e3b98: 0xe4600190  swc1        $f0, 0x190($v1)
    ctx->pc = 0x2e3b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 400), bits); }
    // 0x2e3b9c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e3b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3ba0: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3ba0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3ba4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3ba8: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3bac: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3bb0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3bb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3bb4: 0x246201a0  addiu       $v0, $v1, 0x1A0
    ctx->pc = 0x2e3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x2e3bb8: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x2e3bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x2e3bbc: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3bbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3bc0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e3bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e3bc4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3bc8: 0xe64402f4  swc1        $f4, 0x2F4($s2)
    ctx->pc = 0x2e3bc8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 756), bits); }
    // 0x2e3bcc: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3bd0: 0xe64402f0  swc1        $f4, 0x2F0($s2)
    ctx->pc = 0x2e3bd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 752), bits); }
    // 0x2e3bd4: 0xe44501b0  swc1        $f5, 0x1B0($v0)
    ctx->pc = 0x2e3bd4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
    // 0x2e3bd8: 0x244201b0  addiu       $v0, $v0, 0x1B0
    ctx->pc = 0x2e3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x2e3bdc: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3bdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3be0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e3be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e3be4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3be8: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3bec: 0xc64102f4  lwc1        $f1, 0x2F4($s2)
    ctx->pc = 0x2e3becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3bf0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3bf0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3bf4: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3bf8: 0x0  nop
    ctx->pc = 0x2e3bf8u;
    // NOP
    // 0x2e3bfc: 0x0  nop
    ctx->pc = 0x2e3bfcu;
    // NOP
    // 0x2e3c00: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e3c00u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e3c04: 0x244301c0  addiu       $v1, $v0, 0x1C0
    ctx->pc = 0x2e3c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x2e3c08: 0x0  nop
    ctx->pc = 0x2e3c08u;
    // NOP
    // 0x2e3c0c: 0x0  nop
    ctx->pc = 0x2e3c0cu;
    // NOP
    // 0x2e3c10: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e3c10u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e3c14: 0xe44001c0  swc1        $f0, 0x1C0($v0)
    ctx->pc = 0x2e3c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 448), bits); }
    // 0x2e3c18: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2e3c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e3c1c: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x2e3c1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e3c20: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e3c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2e3c24: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e3c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3c28: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e3c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3c2c: 0xac4001d0  sw          $zero, 0x1D0($v0)
    ctx->pc = 0x2e3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
    // 0x2e3c30: 0x244201d0  addiu       $v0, $v0, 0x1D0
    ctx->pc = 0x2e3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x2e3c34: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e3c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3c38: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3c38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3c3c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3c40: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3c44: 0xc64102f4  lwc1        $f1, 0x2F4($s2)
    ctx->pc = 0x2e3c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3c48: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e3c48u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e3c4c: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3c50: 0x0  nop
    ctx->pc = 0x2e3c50u;
    // NOP
    // 0x2e3c54: 0x0  nop
    ctx->pc = 0x2e3c54u;
    // NOP
    // 0x2e3c58: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e3c58u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e3c5c: 0x246201e0  addiu       $v0, $v1, 0x1E0
    ctx->pc = 0x2e3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x2e3c60: 0xe46001e0  swc1        $f0, 0x1E0($v1)
    ctx->pc = 0x2e3c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 480), bits); }
    // 0x2e3c64: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e3c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3c68: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3c68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3c6c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3c70: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3c74: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3c78: 0x246201f0  addiu       $v0, $v1, 0x1F0
    ctx->pc = 0x2e3c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 496));
    // 0x2e3c7c: 0xe46001f0  swc1        $f0, 0x1F0($v1)
    ctx->pc = 0x2e3c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 496), bits); }
    // 0x2e3c80: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3c84: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e3c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e3c88: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3c8c: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e3c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3c90: 0xc64102f0  lwc1        $f1, 0x2F0($s2)
    ctx->pc = 0x2e3c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3c94: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3c94u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3c98: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3c9c: 0x0  nop
    ctx->pc = 0x2e3c9cu;
    // NOP
    // 0x2e3ca0: 0x0  nop
    ctx->pc = 0x2e3ca0u;
    // NOP
    // 0x2e3ca4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e3ca4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e3ca8: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x2e3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x2e3cac: 0x0  nop
    ctx->pc = 0x2e3cacu;
    // NOP
    // 0x2e3cb0: 0x0  nop
    ctx->pc = 0x2e3cb0u;
    // NOP
    // 0x2e3cb4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e3cb4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e3cb8: 0xe4610200  swc1        $f1, 0x200($v1)
    ctx->pc = 0x2e3cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 512), bits); }
    // 0x2e3cbc: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3cbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3cc0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e3cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3cc4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3cc8: 0xc64002f4  lwc1        $f0, 0x2F4($s2)
    ctx->pc = 0x2e3cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3ccc: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3cd0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3cd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3cd4: 0xac400210  sw          $zero, 0x210($v0)
    ctx->pc = 0x2e3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 0));
    // 0x2e3cd8: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2e3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2e3cdc: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3cdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3ce0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e3ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3ce4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3ce8: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3cec: 0xc64102f4  lwc1        $f1, 0x2F4($s2)
    ctx->pc = 0x2e3cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3cf0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3cf0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3cf4: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3cf8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2e3cf8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2e3cfc: 0x24620220  addiu       $v0, $v1, 0x220
    ctx->pc = 0x2e3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x2e3d00: 0x0  nop
    ctx->pc = 0x2e3d00u;
    // NOP
    // 0x2e3d04: 0x0  nop
    ctx->pc = 0x2e3d04u;
    // NOP
    // 0x2e3d08: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2e3d08u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e3d0c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2e3d0cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2e3d10: 0xe4600220  swc1        $f0, 0x220($v1)
    ctx->pc = 0x2e3d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 544), bits); }
    // 0x2e3d14: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e3d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e3d18: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3d18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3d1c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3d20: 0xc64002f0  lwc1        $f0, 0x2F0($s2)
    ctx->pc = 0x2e3d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3d24: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3d28: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e3d28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2e3d2c: 0x24430230  addiu       $v1, $v0, 0x230
    ctx->pc = 0x2e3d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x2e3d30: 0xe4400230  swc1        $f0, 0x230($v0)
    ctx->pc = 0x2e3d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 560), bits); }
    // 0x2e3d34: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x2e3d34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e3d38: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e3d38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e3d3c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e3d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2e3d40: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3d44: 0xac400240  sw          $zero, 0x240($v0)
    ctx->pc = 0x2e3d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 0));
    // 0x2e3d48: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x2e3d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x2e3d4c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3d4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3d50: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e3d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e3d54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3d58: 0x8e43030c  lw          $v1, 0x30C($s2)
    ctx->pc = 0x2e3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3d5c: 0xac600250  sw          $zero, 0x250($v1)
    ctx->pc = 0x2e3d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 0));
    // 0x2e3d60: 0x24630250  addiu       $v1, $v1, 0x250
    ctx->pc = 0x2e3d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 592));
    // 0x2e3d64: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x2e3d64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e3d68: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e3d68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e3d6c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2e3d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x2e3d70: 0x8e42030c  lw          $v0, 0x30C($s2)
    ctx->pc = 0x2e3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 780)));
    // 0x2e3d74: 0xac400260  sw          $zero, 0x260($v0)
    ctx->pc = 0x2e3d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 608), GPR_U32(ctx, 0));
    // 0x2e3d78: 0x24420260  addiu       $v0, $v0, 0x260
    ctx->pc = 0x2e3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
    // 0x2e3d7c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3d7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e3d80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e3d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e3d84: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2e3d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2e3d88: 0x8e440310  lw          $a0, 0x310($s2)
    ctx->pc = 0x2e3d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 784)));
    // 0x2e3d8c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2E3D8Cu;
    SET_GPR_U32(ctx, 31, 0x2E3D94u);
    ctx->pc = 0x2E3D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D8Cu;
    // 0x2e3d90: 0x872018  mult        $a0, $a0, $a3 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2E3D8Cu, 0x2E3D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3D94u;
label_2e3d94:
    // 0x2e3d94: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3D94u;
    {
        const bool branch_taken_0x2e3d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D94u;
        // 0x2e3d98: 0xae420324  sw          $v0, 0x324($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d94) {
            ctx->pc = 0x2E3DB8u;
            goto label_2e3db8;
        }
    }
    ctx->pc = 0x2E3D9Cu;
    // 0x2e3d9c: 0x8e440314  lw          $a0, 0x314($s2)
    ctx->pc = 0x2e3d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 788)));
    // 0x2e3da0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e3da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3da4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2e3da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e3da8: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2E3DA8u;
    SET_GPR_U32(ctx, 31, 0x2E3DB0u);
    ctx->pc = 0x2E3DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3DA8u;
    // 0x2e3dac: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2E3DA8u, 0x2E3DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3DB0u;
label_2e3db0:
    // 0x2e3db0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3DB0u;
    {
        const bool branch_taken_0x2e3db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DB0u;
        // 0x2e3db4: 0xae4202c0  sw          $v0, 0x2C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3db0) {
            ctx->pc = 0x2E3DC0u;
            goto label_2e3dc0;
        }
    }
    ctx->pc = 0x2E3DB8u;
label_2e3db8:
    // 0x2e3db8: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x2E3DB8u;
    {
        const bool branch_taken_0x2e3db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DB8u;
        // 0x2e3dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3db8) {
            ctx->pc = 0x2E4220u;
            goto label_2e4220;
        }
    }
    ctx->pc = 0x2E3DC0u;
label_2e3dc0:
    // 0x2e3dc0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2e3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2e3dc4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e3dc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3dc8: 0x2446e2e0  addiu       $a2, $v0, -0x1D20
    ctx->pc = 0x2e3dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959840));
    // 0x2e3dcc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2e3dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e3dd0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2e3dd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e3dd4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x2e3dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x44E2E8u));
    // 0x2e3dd8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2e3dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3ddc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2e3ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e3de0: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2e3de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2e3de4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e3de4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3de8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2e3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e3dec: 0x0  nop
    ctx->pc = 0x2e3decu;
    // NOP
label_2e3df0:
    // 0x2e3df0: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2e3df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e3df4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2e3df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e3df8: 0x10400104  beqz        $v0, . + 4 + (0x104 << 2)
    ctx->pc = 0x2E3DF8u;
    {
        const bool branch_taken_0x2e3df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DF8u;
        // 0x2e3dfc: 0x247e0001  addiu       $fp, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3df8) {
            ctx->pc = 0x2E420Cu;
            goto label_2e420c;
        }
    }
    ctx->pc = 0x2E3E00u;
    // 0x2e3e00: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x2e3e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x2e3e04: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2e3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e3e08: 0x2484e2ec  addiu       $a0, $a0, -0x1D14
    ctx->pc = 0x2e3e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959852));
    // 0x2e3e0c: 0x3a2a021  addu        $s4, $sp, $v0
    ctx->pc = 0x2e3e0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2e3e10: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2e3e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3e14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e3e14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e3e18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3e1c: 0x24570001  addiu       $s7, $v0, 0x1
    ctx->pc = 0x2e3e1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e3e20: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e3e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e3e24: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2e3e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2e3e28:
    // 0x2e3e28: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2e3e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2e3e2c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e3e2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2e3e30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3e34: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x2e3e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2e3e38: 0x0  nop
    ctx->pc = 0x2e3e38u;
    // NOP
    // 0x2e3e3c: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x2e3e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x2e3e40: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2e3e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3e44: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2e3e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2e3e48: 0x2463e2ec  addiu       $v1, $v1, -0x1D14
    ctx->pc = 0x2e3e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959852));
    // 0x2e3e4c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e3e4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3e50: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2e3e50u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2e3e54: 0x26160001  addiu       $s6, $s0, 0x1
    ctx->pc = 0x2e3e54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e3e58: 0xc47c0000  lwc1        $f28, 0x0($v1)
    ctx->pc = 0x2e3e58u;
    { uint32_t bits = FAST_READ32(0x44E2ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2e3e5c: 0x4680e720  cvt.s.w     $f28, $f28
    ctx->pc = 0x2e3e5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[28], sizeof(tmp)); ctx->f[28] = FPU_CVT_S_W(tmp); }
    // 0x2e3e60: 0x0  nop
    ctx->pc = 0x2e3e60u;
    // NOP
    // 0x2e3e64: 0x0  nop
    ctx->pc = 0x2e3e64u;
    // NOP
    // 0x2e3e68: 0x4601ad43  div.s       $f21, $f21, $f1
    ctx->pc = 0x2e3e68u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[1]);
    // 0x2e3e6c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2E3E6Cu;
    SET_GPR_U32(ctx, 31, 0x2E3E74u);
    ctx->pc = 0x2E3E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E6Cu;
    // 0x2e3e70: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2E3E6Cu, 0x2E3E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E74u;
label_2e3e74:
    // 0x2e3e74: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2E3E74u;
    SET_GPR_U32(ctx, 31, 0x2E3E7Cu);
    ctx->pc = 0x2E3E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3E74u;
    // 0x2e3e78: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2E3E74u, 0x2E3E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3E7Cu;
label_2e3e7c:
    // 0x2e3e7c: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x2e3e7cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e3e80: 0x0  nop
    ctx->pc = 0x2e3e80u;
    // NOP
    // 0x2e3e84: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2e3e84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2e3e88: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2e3e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2e3e8c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e3e8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2e3e90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e3e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e3e94: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2e3e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3e98: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2e3e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3e9c: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x2e3e9cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2e3ea0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e3ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e3ea4: 0x0  nop
    ctx->pc = 0x2e3ea4u;
    // NOP
    // 0x2e3ea8: 0x0  nop
    ctx->pc = 0x2e3ea8u;
    // NOP
    // 0x2e3eac: 0x4603a503  div.s       $f20, $f20, $f3
    ctx->pc = 0x2e3eacu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[3]);
    // 0x2e3eb0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e3eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e3eb4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2E3EB4u;
    SET_GPR_U32(ctx, 31, 0x2E3EBCu);
    ctx->pc = 0x2E3EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3EB4u;
    // 0x2e3eb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2E3EB4u, 0x2E3EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3EBCu;
label_2e3ebc:
    // 0x2e3ebc: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2E3EBCu;
    SET_GPR_U32(ctx, 31, 0x2E3EC4u);
    ctx->pc = 0x2E3EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3EBCu;
    // 0x2e3ec0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2E3EBCu, 0x2E3EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3EC4u;
label_2e3ec4:
    // 0x2e3ec4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2e3ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3ec8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2e3ec8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2e3ecc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e3eccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e3ed0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2E3ED0u;
    SET_GPR_U32(ctx, 31, 0x2E3ED8u);
    ctx->pc = 0x2E3ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3ED0u;
    // 0x2e3ed4: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2E3ED0u, 0x2E3ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3ED8u;
label_2e3ed8:
    // 0x2e3ed8: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2E3ED8u;
    SET_GPR_U32(ctx, 31, 0x2E3EE0u);
    ctx->pc = 0x2E3EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3ED8u;
    // 0x2e3edc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2E3ED8u, 0x2E3EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3EE0u;
label_2e3ee0:
    // 0x2e3ee0: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2e3ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3ee4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e3ee4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e3ee8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2E3EE8u;
    SET_GPR_U32(ctx, 31, 0x2E3EF0u);
    ctx->pc = 0x2E3EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3EE8u;
    // 0x2e3eec: 0x46010682  mul.s       $f26, $f0, $f1 (Delay Slot)
    ctx->f[26] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2E3EE8u, 0x2E3EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3EF0u;
label_2e3ef0:
    // 0x2e3ef0: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2E3EF0u;
    SET_GPR_U32(ctx, 31, 0x2E3EF8u);
    ctx->pc = 0x2E3EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3EF0u;
    // 0x2e3ef4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2E3EF0u, 0x2E3EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3EF8u;
label_2e3ef8:
    // 0x2e3ef8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2e3ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3efc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2e3efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2e3f00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e3f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e3f04: 0x0  nop
    ctx->pc = 0x2e3f04u;
    // NOP
    // 0x2e3f08: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e3f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e3f0c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2e3f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e3f10: 0x46010642  mul.s       $f25, $f0, $f1
    ctx->pc = 0x2e3f10u;
    ctx->f[25] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e3f14: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e3f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e3f18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3f1c: 0x0  nop
    ctx->pc = 0x2e3f1cu;
    // NOP
    // 0x2e3f20: 0x46001602  mul.s       $f24, $f2, $f0
    ctx->pc = 0x2e3f20u;
    ctx->f[24] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e3f24: 0x0  nop
    ctx->pc = 0x2e3f24u;
    // NOP
label_2e3f28:
    // 0x2e3f28: 0x4495a800  mtc1        $s5, $f21
    ctx->pc = 0x2e3f28u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2e3f2c: 0x0  nop
    ctx->pc = 0x2e3f2cu;
    // NOP
    // 0x2e3f30: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x2e3f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x2e3f34: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2e3f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2e3f38: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e3f38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2e3f3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e3f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3f40: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2e3f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e3f44: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2e3f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2e3f48: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e3f48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2e3f4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e3f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e3f50: 0x4614ad00  add.s       $f20, $f21, $f20
    ctx->pc = 0x2e3f50u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2e3f54: 0x4618a500  add.s       $f20, $f20, $f24
    ctx->pc = 0x2e3f54u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
    // 0x2e3f58: 0x461ca503  div.s       $f20, $f20, $f28
    ctx->pc = 0x2e3f58u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[28]);
    // 0x2e3f5c: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x2e3f5cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2e3f60: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->pc = 0x2e3f60u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x2e3f64: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2E3F64u;
    SET_GPR_U32(ctx, 31, 0x2E3F6Cu);
    ctx->pc = 0x2E3F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F64u;
    // 0x2e3f68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2E3F64u, 0x2E3F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F6Cu;
label_2e3f6c:
    // 0x2e3f6c: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2E3F6Cu;
    SET_GPR_U32(ctx, 31, 0x2E3F74u);
    ctx->pc = 0x2E3F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F6Cu;
    // 0x2e3f70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2E3F6Cu, 0x2E3F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F74u;
label_2e3f74:
    // 0x2e3f74: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e3f74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e3f78: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2E3F78u;
    SET_GPR_U32(ctx, 31, 0x2E3F80u);
    ctx->pc = 0x2E3F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F78u;
    // 0x2e3f7c: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2E3F78u, 0x2E3F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F80u;
label_2e3f80:
    // 0x2e3f80: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2E3F80u;
    SET_GPR_U32(ctx, 31, 0x2E3F88u);
    ctx->pc = 0x2E3F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3F80u;
    // 0x2e3f84: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2E3F80u, 0x2E3F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3F88u;
label_2e3f88:
    // 0x2e3f88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e3f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e3f8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e3f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e3f90: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2e3f90u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2e3f94: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2e3f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2e3f98: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e3f98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2e3f9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3fa0: 0x4603ad00  add.s       $f20, $f21, $f3
    ctx->pc = 0x2e3fa0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
    // 0x2e3fa4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2e3fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2e3fa8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e3fa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2e3fac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e3facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3fb0: 0x4618a500  add.s       $f20, $f20, $f24
    ctx->pc = 0x2e3fb0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
    // 0x2e3fb4: 0x461ca503  div.s       $f20, $f20, $f28
    ctx->pc = 0x2e3fb4u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[28]);
    // 0x2e3fb8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2e3fb8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e3fbc: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x2e3fbcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x2e3fc0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2E3FC0u;
    SET_GPR_U32(ctx, 31, 0x2E3FC8u);
    ctx->pc = 0x2E3FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3FC0u;
    // 0x2e3fc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2E3FC0u, 0x2E3FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3FC8u;
label_2e3fc8:
    // 0x2e3fc8: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2E3FC8u;
    SET_GPR_U32(ctx, 31, 0x2E3FD0u);
    ctx->pc = 0x2E3FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3FC8u;
    // 0x2e3fcc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2E3FC8u, 0x2E3FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3FD0u;
label_2e3fd0:
    // 0x2e3fd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e3fd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e3fd4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2E3FD4u;
    SET_GPR_U32(ctx, 31, 0x2E3FDCu);
    ctx->pc = 0x2E3FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3FD4u;
    // 0x2e3fd8: 0x46000746  mov.s       $f29, $f0 (Delay Slot)
    ctx->f[29] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2E3FD4u, 0x2E3FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3FDCu;
label_2e3fdc:
    // 0x2e3fdc: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2E3FDCu;
    SET_GPR_U32(ctx, 31, 0x2E3FE4u);
    ctx->pc = 0x2E3FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3FDCu;
    // 0x2e3fe0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2E3FDCu, 0x2E3FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3FE4u;
label_2e3fe4:
    // 0x2e3fe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e3fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3fe8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e3fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e3fec: 0x460006c6  mov.s       $f27, $f0
    ctx->pc = 0x2e3fecu;
    ctx->f[27] = FPU_MOV_S(ctx->f[0]);
    // 0x2e3ff0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2e3ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2e3ff4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e3ff4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2e3ff8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e3ff8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e3ffc: 0x4602ad00  add.s       $f20, $f21, $f2
    ctx->pc = 0x2e3ffcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x2e4000: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2e4000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2e4004: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e4004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2e4008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e4008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e400c: 0x4618a500  add.s       $f20, $f20, $f24
    ctx->pc = 0x2e400cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
    // 0x2e4010: 0x461ca503  div.s       $f20, $f20, $f28
    ctx->pc = 0x2e4010u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[28]);
    // 0x2e4014: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x2e4014u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x2e4018: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2e4018u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2e401c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2E401Cu;
    SET_GPR_U32(ctx, 31, 0x2E4024u);
    ctx->pc = 0x2E4020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E401Cu;
    // 0x2e4020: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2E401Cu, 0x2E4024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4024u;
label_2e4024:
    // 0x2e4024: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2E4024u;
    SET_GPR_U32(ctx, 31, 0x2E402Cu);
    ctx->pc = 0x2E4028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4024u;
    // 0x2e4028: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2E4024u, 0x2E402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E402Cu;
label_2e402c:
    // 0x2e402c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e402cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e4030: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2E4030u;
    SET_GPR_U32(ctx, 31, 0x2E4038u);
    ctx->pc = 0x2E4034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4030u;
    // 0x2e4034: 0x46000786  mov.s       $f30, $f0 (Delay Slot)
    ctx->f[30] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2E4030u, 0x2E4038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4038u;
label_2e4038:
    // 0x2e4038: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2E4038u;
    SET_GPR_U32(ctx, 31, 0x2E4040u);
    ctx->pc = 0x2E403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4038u;
    // 0x2e403c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2E4038u, 0x2E4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4040u;
label_2e4040:
    // 0x2e4040: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e4040u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e4044: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2e4044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2e4048: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e4048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2e404c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e404cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e4050: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2e4050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2e4054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e4054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4058: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2e4058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2e405c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2e405cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2e4060: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e4060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e4064: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x2e4064u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2e4068: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x2e4068u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x2e406c: 0x461cad43  div.s       $f21, $f21, $f28
    ctx->pc = 0x2e406cu;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[28]);
    // 0x2e4070: 0x4601ad42  mul.s       $f21, $f21, $f1
    ctx->pc = 0x2e4070u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2e4074: 0x4602ad41  sub.s       $f21, $f21, $f2
    ctx->pc = 0x2e4074u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x2e4078: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2E4078u;
    SET_GPR_U32(ctx, 31, 0x2E4080u);
    ctx->pc = 0x2E407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4078u;
    // 0x2e407c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2E4078u, 0x2E4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4080u;
label_2e4080:
    // 0x2e4080: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2E4080u;
    SET_GPR_U32(ctx, 31, 0x2E4088u);
    ctx->pc = 0x2E4084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4080u;
    // 0x2e4084: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2E4080u, 0x2E4088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4088u;
label_2e4088:
    // 0x2e4088: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2e4088u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2e408c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2E408Cu;
    SET_GPR_U32(ctx, 31, 0x2E4094u);
    ctx->pc = 0x2E4090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E408Cu;
    // 0x2e4090: 0x460007c6  mov.s       $f31, $f0 (Delay Slot)
    ctx->f[31] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2E408Cu, 0x2E4094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4094u;
label_2e4094:
    // 0x2e4094: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2E4094u;
    SET_GPR_U32(ctx, 31, 0x2E409Cu);
    ctx->pc = 0x2E4098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4094u;
    // 0x2e4098: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2E4094u, 0x2E409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E409Cu;
label_2e409c:
    // 0x2e409c: 0x4619bdc2  mul.s       $f23, $f23, $f25
    ctx->pc = 0x2e409cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[25]);
    // 0x2e40a0: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x2e40a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e40a4: 0x4619b582  mul.s       $f22, $f22, $f25
    ctx->pc = 0x2e40a4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[25]);
    // 0x2e40a8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2e40a8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2e40ac: 0x8e430324  lw          $v1, 0x324($s2)
    ctx->pc = 0x2e40acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x2e40b0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2e40b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e40b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e40b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e40b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e40b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e40bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e40bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e40c0: 0xe7b70010  swc1        $f23, 0x10($sp)
    ctx->pc = 0x2e40c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e40c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e40c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e40c8: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x2e40c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e40cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e40d0: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2e40d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e40d4: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E40D4u;
    {
        const bool branch_taken_0x2e40d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2E40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E40D4u;
        // 0x2e40d8: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e40d4) {
            ctx->pc = 0x2E40F4u;
            goto label_2e40f4;
        }
    }
    ctx->pc = 0x2E40DCu;
    // 0x2e40dc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e40dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e40e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e40e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e40e4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e40e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e40e8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e40e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e40ec: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e40ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e40f0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e40f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e40f4:
    // 0x2e40f4: 0x461ad802  mul.s       $f0, $f27, $f26
    ctx->pc = 0x2e40f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[26]);
    // 0x2e40f8: 0x8e430324  lw          $v1, 0x324($s2)
    ctx->pc = 0x2e40f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x2e40fc: 0x461ae842  mul.s       $f1, $f29, $f26
    ctx->pc = 0x2e40fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[29], ctx->f[26]);
    // 0x2e4100: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2e4100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e4104: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2e4104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4108: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e4108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e410c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e410cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e4110: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e4114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e411c: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2e411cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e4120: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e4120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e4124: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2e4124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e4128: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4128u;
    {
        const bool branch_taken_0x2e4128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2E412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4128u;
        // 0x2e412c: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4128) {
            ctx->pc = 0x2E4148u;
            goto label_2e4148;
        }
    }
    ctx->pc = 0x2E4130u;
    // 0x2e4130: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e4130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4134: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e4134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e4138: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e4138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e413c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e413cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e4140: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e4140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4144: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e4144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e4148:
    // 0x2e4148: 0x4619a002  mul.s       $f0, $f20, $f25
    ctx->pc = 0x2e4148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x2e414c: 0x8e430324  lw          $v1, 0x324($s2)
    ctx->pc = 0x2e414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x2e4150: 0x4619f042  mul.s       $f1, $f30, $f25
    ctx->pc = 0x2e4150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[30], ctx->f[25]);
    // 0x2e4154: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x2e4154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e4158: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2e4158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e415c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e415cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e4160: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e4160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e4164: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4168: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e4168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e416c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e416cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4170: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2e4170u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e4174: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e4174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e4178: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2e4178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e417c: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E417Cu;
    {
        const bool branch_taken_0x2e417c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2E4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E417Cu;
        // 0x2e4180: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e417c) {
            ctx->pc = 0x2E419Cu;
            goto label_2e419c;
        }
    }
    ctx->pc = 0x2E4184u;
    // 0x2e4184: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e4184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4188: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e4188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e418c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4190: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e4190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e4194: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e4194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4198: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e4198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e419c:
    // 0x2e419c: 0x461a1002  mul.s       $f0, $f2, $f26
    ctx->pc = 0x2e419cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[26]);
    // 0x2e41a0: 0x8e430324  lw          $v1, 0x324($s2)
    ctx->pc = 0x2e41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
    // 0x2e41a4: 0x461af842  mul.s       $f1, $f31, $f26
    ctx->pc = 0x2e41a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[31], ctx->f[26]);
    // 0x2e41a8: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2e41a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e41ac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2e41acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e41b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e41b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e41b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e41b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e41b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e41bc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2e41bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e41c0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2e41c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e41c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e41c8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e41c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e41cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e41ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e41d0: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E41D0u;
    {
        const bool branch_taken_0x2e41d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2E41D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41D0u;
        // 0x2e41d4: 0xe623000c  swc1        $f3, 0xC($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41d0) {
            ctx->pc = 0x2E41F0u;
            goto label_2e41f0;
        }
    }
    ctx->pc = 0x2E41D8u;
    // 0x2e41d8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2e41d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e41dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2e41dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2e41e0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e41e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e41e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e41e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e41e8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e41e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e41ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e41ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e41f0:
    // 0x2e41f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2e41f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2e41f4: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x2e41f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e41f8: 0x1440ff4b  bnez        $v0, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x2E41F8u;
    {
        const bool branch_taken_0x2e41f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41F8u;
        // 0x2e41fc: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41f8) {
            ctx->pc = 0x2E3F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3f28;
        }
    }
    ctx->pc = 0x2E4200u;
    // 0x2e4200: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x2e4200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x2e4204: 0x1440ff08  bnez        $v0, . + 4 + (-0xF8 << 2)
    ctx->pc = 0x2E4204u;
    {
        const bool branch_taken_0x2e4204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4204u;
        // 0x2e4208: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4204) {
            ctx->pc = 0x2E3E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3e28;
        }
    }
    ctx->pc = 0x2E420Cu;
label_2e420c:
    // 0x2e420c: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x2e420cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4210: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x2e4210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e4214: 0x1440fef6  bnez        $v0, . + 4 + (-0x10A << 2)
    ctx->pc = 0x2E4214u;
    {
        const bool branch_taken_0x2e4214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4214u;
        // 0x2e4218: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4214) {
            ctx->pc = 0x2E3DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e3df0;
        }
    }
    ctx->pc = 0x2E421Cu;
    // 0x2e421c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4220:
    // 0x2e4220: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2e4220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e4224: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2e4224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e4228: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2e4228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e422c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2e422cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e4230: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2e4230u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e4234: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2e4234u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e4238: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e4238u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e423c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2e423cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4240: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2e4240u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4244: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e4244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4248: 0xc7bf0128  lwc1        $f31, 0x128($sp)
    ctx->pc = 0x2e4248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2e424c: 0xc7be0120  lwc1        $f30, 0x120($sp)
    ctx->pc = 0x2e424cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2e4250: 0xc7bd0118  lwc1        $f29, 0x118($sp)
    ctx->pc = 0x2e4250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2e4254: 0xc7bc0110  lwc1        $f28, 0x110($sp)
    ctx->pc = 0x2e4254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2e4258: 0xc7bb0108  lwc1        $f27, 0x108($sp)
    ctx->pc = 0x2e4258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2e425c: 0xc7ba0100  lwc1        $f26, 0x100($sp)
    ctx->pc = 0x2e425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2e4260: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x2e4260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2e4264: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x2e4264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2e4268: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x2e4268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e426c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2e426cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e4270: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2e4270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e4274: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2e4274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e4278: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4278u;
        // 0x2e427c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4280u;
}
